

#include "Image.h"

Image::Image(){

mHeight = 0; 
mWidth = 0;
mData.resize(mHeight * mWidth * 3); 

}


Image::Image(const int& height, const int& width){
    mHeight = height;
    mWidth = width;
    mData.resize(mHeight * mWidth * 3);    
    }

int Image::getHeight() const {
    return mHeight;
}

int Image::getWidth() const {
    return mWidth;
}

bool Image::indexValid(const int& row, const int& column, const int& channel) const {
    return (row >= 0 && row < mHeight) && (column >= 0 && column < mWidth) && (channel >= 0 && channel < 3);
}

int Image::index(const int& row, const int& column, const int& channel) const{
    if (!indexValid(row,column,channel)){
        return -1; //Index invalid
    }

    return (row * mWidth + column) * 3 + channel;

}

int Image::getChannel(const int& row, const int& column, const int& channel) const {
    return mData[index(row,column,channel)];
}

void Image::setHeight(const int& height){
    if (height >= 0){
        this->mHeight = height;
        mData.resize(mHeight*mWidth*3);
    }
}

void Image::setWidth(const int& mWidth){
    if (mWidth >= 0){
        this->mWidth = mWidth;
        mData.resize(mHeight*mWidth*3);
    }
}

void Image::setChannel(const int& row, const int& column, const int& channel, const int& value) {
    if (indexValid(row,column,channel)){
        mData[index(row,column,channel)] = value;
    }

}