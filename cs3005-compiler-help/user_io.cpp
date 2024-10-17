
#include <istream>
#include <ostream>
#include <string>

#include "image_menu.h"

//This function is displaying the prompt to the output stream(os),
//read a string response from the input stream(is) and return the string.

std::string getString(std::istream& is, std::ostream& os, const std::string& prompt) {
    os << prompt;
    std::string input;
    std::getline(is, input);
    return input;
}

int getInteger(std::istream& is, std::ostream& os, const std::string& prompt) {
    os << prompt;
    int input;
    is >> input;
    return input;
}

double getDouble(std::istream& is, std::ostream& os, const std::string& prompt) {
    os << prompt;
    double input;
    is >> input;
    return input;
}

/*
This function uses getString, using the prompt “What is your favorite color? “, 
getInteger using the prompt “What is your favorite integer? “, and getDouble using the prompt “What is your favorite number? “. 
It must then repeatedly send the line described above in the assignment description to the output stream. 
Returns the integer number given by the user. Be sure to read the full description above.
*/

int askQuestions3(std::istream& is, std::ostream& os) {
    std::string favoriteColor = getString(is, os, "What is your favorite color?");
    int favoriteInteger = getInteger(is,os,"What is your favorit integer?");
    double favoriteNumber = getDouble(is,os,"What is your favorite number?");

    std::string outputLine = "Your favorite color is " + favoriteColor + ", your favorite integer is " + std::to_string(favoriteInteger) + ", and your favorite number is " + std::to_string(favoriteNumber);
    for (int i = 0; i < favoriteInteger; i++){
        os << outputLine << std::endl;
    }
    return favoriteNumber;
}

/*
int askInquisitorQuestions(std::istream& is, std::ostream& os){

    std::string strongestPokemon = getString(is, os, "What is your most powerful pokemon? ");
    int pokeLevel = getInteger(is, os, "What is its level? ");
    double currentHealth = getDouble(is, os, "What is its health? ");
    
    std::string outputLine = strongestPokemon + " is level " + std::to_string(pokeLevel) + " and has " + std::to_string(currentHealth);

    os << outputLine << std::endl;
    return pokeLevel;
}

int askUncleBuckQuestions(std::istream& is, std::ostream& os){
    std::string whereResidence = getString(is,os,"Where do you live? ");
    std::string ownOrRent = getString(is,os, "Own or Rent? ");
    int consecutiveQuestions = getInteger(is,os, "What is your record for consecutive questions asked? ")


    std::string residing = "owning"
    std::string questionStatus = "okay."

    if (ownOrRent = "rent"){
        residing = "renting"
    }

    if (consecutiveQuestions > 20){
        questionStatus = "pretty good."
    }

    std::string outputLine = consecutiveQuestions + " is " + questionStatus + " Enjoy " + residing + " in the " + whereResidence;
    os<< outpusLine << std::endl;
    return consecutiveQuestions;

}
*/