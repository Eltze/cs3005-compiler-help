#include <istream>
#include <ostream>
#include <iostream>

#include "Image.h"
#include "image_menu.h"
#include "PPM.h"

void diagonalQuadPattern(std::istream& is, std::ostream& os, Image& image) {
    //get the dimensions
    //int height, width;
    //std::cout << "Image height? ";
    //is >> height;
    //std::cout << "Image width? ";
    //is >> width;
    int height = getInteger(is,os,"Image height? ");
    int width = getInteger(is,os,"Image width? ");

    //create image using width and height
    image.setHeight(height);
    image.setWidth(width);
    //calling the classes from Image.h

    //Tricky, pixel values, read assignment instructions thoroughly

    //assigning row first
    for(int row = 0; row < height; ++row) {
        //assigning column
        for(int col = 0; col < width; ++col){
            //use image class to set the channels
            
            image.setChannel(row, col, 0, row < height / 2 ? 0 : 255);
            image.setChannel(row, col, 1, (2 * row + 2 * col) % 256);
            image.setChannel(row, col, 2, col < width / 2 ? 0 : 255);
        } 
    }


}

void stripedDiagonalPattern(std::istream& is, std::ostream& os, PPM& p) {
    int height, width;

    height = getInteger(is,os,"Image height? ");
    
    width = getInteger(is, os, "Image width? ");

    p.setHeight(height);
    p.setWidth(width);
    p.setMaxColorValue(std::min(255, (height + width) / 3));
    
    int maxColorValue = (height + width) / 3;
    if (maxColorValue > 255){
        maxColorValue = 255;
    }
    p.setMaxColorValue(maxColorValue);

    for (int row = 0; row < height; ++row) {
        for (int col = 0; col < width; ++col) {
            int red = (row >= height / 2 && row % 3 != 0) ? maxColorValue : 0;
            int green = (row + width - col - 1) % (maxColorValue + 1);
            int blue = (col < row) ? 0 : maxColorValue;
            p.setPixel(row, col, red, green, blue);
        }
    }
}

/*
void drawTestColorPattern(ActionData& action_data){
    int height = getInteger(is,os,"Height?");
    int width = getInteger(is,os,"Width?");
    int maxColorValue = getInteger(is,os,"Max Color Value?");

    


}

int flagColombiaPattern(std::istream& is, std::ostream& os, Image& image){
    int height;
    std::cout << "Image height? ";
    height = getInteger(is);

    p.setHeight(height);
    p.setWidth((height*3)/2);
    p.setMaxColorValue(std::min(255, (height + width) / 3));


}

void flagRomaniaPattern(std::istream& is, std::ostream& os, PPM& p){
    int height;

    std::cout << "Image height? ";
    height = getInteger(is);
    p.setHeight(height);
    p.setWidth
}
*/
