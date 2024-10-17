
#include "PPM.h"
#include "image_menu.h"

PPM::PPM() : Image(), max_color_value(1) {}

PPM::PPM(const int& height, const int& width) : Image(height, width), max_color_value(1){}

int PPM::getMaxColorValue() const {
    return max_color_value;
}

bool PPM::valueValid(const int& value) const{
    return value >= 0 && value <= max_color_value;
}

void PPM::setMaxColorValue(const int& maxColorValue) {
    if (maxColorValue >= 1 && maxColorValue <= 255) {
        max_color_value = maxColorValue;
    }
}

void PPM::setChannel(const int& row, const int& column, const int& channel, const int& value) {
    if (valueValid(value)){
        Image::setChannel(row,column,channel,value);
    }
}

void PPM::setPixel(const int& row, const int& column, const int& red, const int& green, const int& blue) {
    setChannel(row,column,0,red);
    setChannel(row,column,1,green);
    setChannel(row,column,2,blue);
}

void PPM::writeStream(std::ostream& os) const {
    os << "P6\n" << getWidth() << getHeight() << "\n" << max_color_value << "\n";
    for (int row = 0; row < getHeight(); ++row){
        for (int col = 0; col < getWidth(); ++col){
            for (int channel = 0; channel < 3; ++channel){
                os.put(static_cast<char>(getChannel(row,col,channel)));
            }
        }
    }
}

void PPM::readStream(std::istream& is) {
    // Implementation for reading PPM image from the input stream
    // ...
    std::string temp_variable;
    is >> temp_variable;

    if (temp_variable != "P6"){
        throw std::runtime_error("Invalid Format: Expected PPM.");
    }

    int width, height, max_color_value;
    is >> width >> height >> max_color_value;

    setWidth(width);
    setHeight(height);
    setMaxColorValue(max_color_value);

    temp_variable.resize(width*height*3);

    for (int row = 0; row < height; row++){
        for (int col = 0; col < width; col++){
            for (int channel = 0; channel <3; channel++){
                int value = is.get();
                if (value == EOF){
                    throw std::runtime_error("Unexpected end of file while reading PPM.");
                }

                temp_variable[(row*width+col)*3+channel] = static_cast<unsigned char>(value);

            }
        }
    }

}

/*

PPM& operator*=(const PPM& rhs){
    
}



*/