#include <iostream>
#include <fstream>
#include <string>

#include "image_menu.h"
#include "Image.h"
#include "PPM.h"
//#include "ActionData.h"

void drawAsciiImage(std::ostream& os, const Image& image) {
    for (int row = 0; row < image.getHeight(); ++row) {
        for (int col = 0; col < image.getWidth(); ++col) {
            double pixelStrength = (image.getChannel(row, col, 0) + image.getChannel(row, col, 1) + image.getChannel(row, col, 2)) / 765.0;

            char symbol;
            if (pixelStrength >= 1.0) {
                symbol = '@';
            } else if (pixelStrength >= 0.9) {
                symbol = '#';
            } else if (pixelStrength >= 0.8) {
                symbol = '%';
            } else if (pixelStrength >= 0.7) {
                symbol = '*';
            } else if (pixelStrength >= 0.6) {
                symbol = '|';
            } else if (pixelStrength >= 0.5) {
                symbol = '+';
            } else if (pixelStrength >= 0.4) {
                symbol = ';';
            } else if (pixelStrength >= 0.3) {
                symbol = '~';
            } else if (pixelStrength >= 0.2) {
                symbol = '-';
            } else if (pixelStrength >= 0.1) {
                symbol = '.';
            } else {
                symbol = ' ';
            }

            os << symbol;
        }
        os << std::endl;
    }
}

void writeUserImage(std::istream& is, std::ostream& os, const PPM& p){
    std::string filename;
    
    filename = getString(is,os,"Output filename?");

    if (filename.empty()){
        os << "Error: Invalid filename." << std::endl;
        return;
    }

    std::ofstream outputFile(filename, std::ios::binary);
    if (!outputFile.is_open()){
        os << "Error: Could not open output file \"" << filename << "\"." << std::endl;
        return; 
    }

    p.writeStream(outputFile);
    outputFile.close();

    os << "Image saved successfully to \"" << filename << "\"." << std::endl;

}

/*
void read1(ActionData& action_data){
    //reads the PPM data of the first image
}

void read2(ActionData& action_data){
    //reads PPM data of the second image
}

void copy(ActionData& action_data){
    //copies the data of a selected PPM image
}

void write(ActionData& action_data){
    //writes the copied data onto a new PPM image or overwrites a previous one 
}



void copyImage1ToImage2(ActionData& action_data){
    //uses all four of the above functions to overwrite one image input onto another input
    //command name will be "copy12"
}

void copyImage2ToImage1(ActionData& action_data){
    //uses all of the above functions to overwrite one image input onto another input
    //command name will be "copy21"
}

*/