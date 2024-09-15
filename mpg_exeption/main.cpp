#include <iostream>

class invalid_arguement {
    
};

void calculate_mpg (int miles, int gallons) {
    if (miles <= 0) {
        throw std::invalid_argument("Miles has to be above 0.");
    } else if (gallons >= 100) {
        throw std::invalid_argument("Gallons has to be less than 100.");
    } else {
        int mpg = miles * gallons;
        std::cout << "MPG is " << mpg << std::endl;
    }
}

int main () {
    int miles = 0;
    int gallons = 0;
    
    std::cout << "Welcome to the MPG calculator!\n" << std::endl;
    
    std::cout << "Enter miles: ";
    std::cin >> miles;
    
    std::cout << "Enter gallons: ";
    std::cin >> gallons;
    
    calculate_mpg(miles, gallons);
}