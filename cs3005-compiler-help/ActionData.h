#ifdef ACTION_DATA_H
#define ACTION_DATA_H

#include <iostream>
#include "PPM.h"


class ActionData {

public:
    ActionData(std::istream& is, std::ostream& os) : done(false);

    std::istream& getIS();

    std::ostream& getOS();

    PPM& getInputImage1();

    PPM& getInputImage2();

    PPM& getOutputImage();

    bool getDone() const;
    
    void setDone();

private:
    std::istream& is;
    std::ostream& os;
    PPM inputImage1;
    PPM inputImage2;
    PPM outputImage;
    bool done;

}



#endif