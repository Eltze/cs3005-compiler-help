#ifndef PPM_H
#define PPM_H

#include <iostream>
#include <fstream>
#include <string>

#include "Image.h"
#include "image_menu.h"

class PPM : public Image {

public:

PPM( ); 

PPM( const int& height, const int& width ); 
//The max color value should be set to 1. The Image portion should be initialized with the height and width parameters.

int getMaxColorValue( ) const; 
//Returns the maximum color value of the PPM.

bool valueValid( const int& value ) const; 
//Checks if value is a legal color value for this image. Legal means at least 0 and no more than the maximum color value. Returns true if it is legal, false otherwise.

void setMaxColorValue( const int& max_color_value ); 
//Change the maximum color value of the PPM. Only values 1 to 255, inclusive should be accepted. If the value is not accepted, make no changes.

void setChannel( const int& row, const int& column, const int& channel, const int& value ); 
//If value is valid (use the valueValid method), then call Image::setChannel() passing in the parameters. If value is not valid, do nothing.

void setPixel( const int& row, const int& column, const int& red, const int& green, const int& blue ); 
//Set all three channels for the specified pixel. Should use setChannel to do the work.

void writeStream(std::ostream& os) const;
//Writes the PPM data to the output stream os. Uses the format mentioned above. The first line of data is ASCII text, and the rest is binary data.

void readStream(std::istream& is);
//Reads the PPM data from the input stream is. It will take that information and change info in the PPM object

/*

void PPM& Operator*=( const PPM& rhs );


*/

private:
    int max_color_value;
};
#endif