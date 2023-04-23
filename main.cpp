#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

int main() {
    #define print std::cout
    #define input std::cin
    #define newline '\n'

    const double pi {3.14};

    int maxRadius {};
    int minRadius {};
    
    std::string userPlayOver {};
    
    while (true) {
        print << "What is the min and max radius for the session (Please enter whole numbers!): ";
        input >> minRadius >> maxRadius;
        
        srand(time(0));
        double radius = rand() % (maxRadius - minRadius + 1) + minRadius;
        const double circleArea {pow(radius, 2) * pi};
        
        double userCircleArea {};
        print << "What is the area of a circle with a radius of " << radius << ": ";
        input >> userCircleArea;
        
        if (userCircleArea == circleArea) {
            print << "You are correct!" << newline;
        } else {
            print << "You are incorrect! The correct answer was " << circleArea << newline;
        }
        
        print << "Would you like to play again? y/n: ";
        input >> userPlayOver;
        
        if (userPlayOver == "n" || userPlayOver == "N") {
            break;
        }
    }
    
    return 0;
}
