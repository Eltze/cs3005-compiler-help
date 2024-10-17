#ifndef IMAGE_MENU_H
#define IMAGE_MENU_H

#include <istream>
#include <ostream>

#include "PPM.h"
#include "Image.h"
//#include "ActionData.h"
//#include "MenuData.h"


int askQuestions3(std::istream& is, std::ostream& os);
std::string getString(std::istream& is, std::ostream& os, const std::string& prompt);
int getInteger(std::istream& is, std::ostream& os, const std::string& prompt);
double getDouble(std::istream& is, std::ostream& os, const std::string& prompt);

int assignment1(std::istream& is, std::ostream& os);

void drawAsciiImage(std::ostream& os, const Image& image);
void diagonalQuadPattern(std::istream& is, std::ostream& os, Image& image);
int assignment2(std::istream& is, std::ostream& os);

void writeUserImage(std::istream& is, std::ostream& os, const PPM& p);
void stripedDiagonalPattern(std::istream& is, std::ostream& os, PPM& p);
int assignment3(std::istream& is, std::ostream& os);

//MenuData commands

/*
void readImage1(ActionData& action_data);
void readImage2(ActionData& action_data);
void copyImage(ActionData& action_data);
void writeImage(ActionData& action_data);

void copyImage1ToImage2(ActionData& action_data);
void copyImage2ToImage1(ActionData& action_data);

void timesEqualsPPM(ActionData& action_data);


*/

//void drawTestColorPattern(ActionData& action_data);

/*
int askInquisitorQuestions(std::istream& is, std::ostream& os);
int inquisitor(std::istream& is, std::ostream& os);

int askUncleBuckQuestions(std::istream& is, std::ostream& os);
int buck(std::istream& is, std::ostream& os);

void flagColumbiaPattern(std::istream& is, std::ostream& os, Image& image);
int flag_colombia_ascii(std::istream& is, std::ostream& os);

void flagRomaniaPattern(std::istream& is, std::ostream& os, PPM& p);
int flag_romania(std::istream& is, std::ostream& os);
*/
#endif 