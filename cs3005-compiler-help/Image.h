#ifndef IMAGE_H
#define IMAGE_H

#include <istream>
#include <ostream>
#include <vector>


class Image {

public:
    Image();

    Image(const int& height, const int& width);

    int getHeight() const;
    int getWidth() const;

    bool indexValid(const int& row, const int& column, const int& channel) const;
    
    int index(const int& row, const int& column, const int& channel) const;
    
    int getChannel(const int& row, const int& column, const int& channel) const;

    void setChannel(const int& row, const int& column, const int& channel, const int& value);

    void setHeight(const int& height);

    void setWidth(const int& width);

private:
    std::vector<int> mData;
    int mHeight;
    int mWidth;
    
};

#endif