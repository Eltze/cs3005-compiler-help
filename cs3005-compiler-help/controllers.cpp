
#include <iostream>
#include <istream>
#include <ostream>

#include "PPM.h"
#include "image_menu.h"

//#include "MenuData.h"

int assignment1(std::istream& is, std::ostream& os) {
    return askQuestions3(is, os);
}

void diagonalQuadPattern(std::istream& is, std::ostream& os, Image& image); 
void drawAsciiImage(std::ostream& os, const Image& image);

int assignment2(std::istream& is, std::ostream& os){
    //call the class / pattern and what's drawing it
   Image image;
   diagonalQuadPattern(is,os,image);
   drawAsciiImage(os,image);
   return 0;
}

int assignment3(std::istream& is, std::ostream& os) {
    PPM p = PPM( );
    stripedDiagonalPattern(is, os, p);
    writeUserImage(is, os, p);
    return 0;
}

//void configureMenu(MenuData& menu_data){

    /*


    Command Name	    Function Name	    Description
        quit            quitProgram             Break the while loop for ./ppm_menu

        read1           readImage1              Read the input of image1.
        read2           readImage2              Read the input of image2.
        copy            copyImage               Copy and image from the input.
        write           writeImage              Take the image copied from the input and write or overwrite a file to store it.

        copy12	        copyImage1ToImage2	    Copy input image 1 to input image 2.
        copy21	        copyImage2ToImage1	    Copy input image 2 to input image 1.

        blend           blendImages             Blend input images 1 & 2 into a singular image based on the ratio

        *=-ppm          timesEquealsPPM         Set the input image 1 by multiplying it by input image 2.
    
    */


    
    //test-pattern uses drawTestColorPattern to draw a test pattern on image 1

    //diagonal-quad uses diagonalQuadPattern to draw a diagonal quad pattern on image 1

    //striped-diagonal uses stripedDiagonalPattern to draw a striped diagonal pattern on image 1
    
    
//} 

/*
int inquisitor(std::istream& is, std::ostream& os){
    return askInquisitorQuestions(is,os);
}

int buck(std::istream& is, std::ostream& os){
    return askUncleBuckQuestions(is,os);
}

int flag_colombia_ascii(std::istream& is, std::ostream& os, Image& image){
    flagColombiaPattern(is,os,image);
    drawAsciiImage(is,os,image);
    return 0;
}
*/