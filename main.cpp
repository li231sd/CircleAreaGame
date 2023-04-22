#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

int main() {
    const double pi {3.14};

    int maxRadius {};
    int minRadius {};
    
    std::string userPlayOver {};
    
    while (true) {
        std::cout << "What is the min and max radius for the session (Please enter whole numbers!): ";
        std::cin >> minRadius >> maxRadius;
        
        srand(time(0));
        double radius = rand() % (maxRadius - minRadius + 1) + minRadius;
        const double circleArea {pow(radius, 2) * pi};
        
        double userCircleArea {};
        std::cout << "What is the area of a circle with a radius of " << radius << ": ";
        std::cin >> userCircleArea;
        
        if (userCircleArea == circleArea) {
            std::cout << "You are correct!" << '\n';
        } else {
            std::cout << "You are incorrect! The correct answer was " << circleArea << '\n';
        }
        
        std::cout << "Would you like to play again? y/n: ";
        std::cin >> userPlayOver;
        
        if (userPlayOver == "n" || userPlayOver == "N") {
            break;
        }
    }
    
    return 0;
}
