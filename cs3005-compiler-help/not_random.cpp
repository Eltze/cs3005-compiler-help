#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate and display 5 random numbers between 0 and RAND_MAX
    std::cout << "Here are 5 random numbers:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << rand() << std::endl;
    }

    // Generate random numbers within a specific range (e.g., 0 to 99)
    std::cout << "\nRandom numbers between 0 and 99:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << rand() % 100 << std::endl;
    }

    return 0;
}
