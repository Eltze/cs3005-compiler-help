
#include <iostream>
#include <istream>
#include <ostream>
#include "ActionData.h"
#include "PPM.h"

class ActionData {
public:

    ActionData(std::istream& is, std::ostream& os, PPM& inputImage1, PPM& inputeImage2, PPM& outputImage) : is(is), os(os), inputImage1(inputImage1), inputImage2(inputImage2), outputImage(outputImage) ,done(false){}

    std::istream& getIS(std::istream& ) {return is; }
    std::ostream& getOS(std::ostream& ) {return os; }
    PPM& getInputImage1(PPM& ) {return inputImage1; }
    PPM& getInputImage2(PPM& ) {return inputImage2; }
    PPM& getOutputImage(PPM& ) {return outputImage; }
    bool getDone() const {return done; }

    void setDone() { done = true; }

private:

    std::istream is;
    std::ostream os;
    PPM& inputImage1;
    PPM& inputImage2;
    PPM& outputImage;
    bool done;


};