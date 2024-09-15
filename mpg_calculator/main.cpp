#include <iostream>
#include <cmath>

void display_title() {
    
    std::cout << "The MPG callculator." << std::endl;
    
}

double calculate_mpg(int miles, int gallons) {
    if (gallons <= 0) {
        throw std::invalid_argument("Gallons has to be above 0.");
    }
    if (miles <= 0) {
        throw std::invalid_argument("Miles has to be above 0");
    } 
    else if (miles > 0 && gallons > 0) {
        double mpg2 = miles / gallons;
        return mpg2;
    }
}

int main () {
    
    int gallons {-10};
    int miles {-5};
    double mpg {};
    
    display_title();
    
    try {
        calculate_mpg(miles, gallons);
    }
    catch (const std::invalid_argument& e) {
        std::cout << e.what();
    }
    std::cout << "Bye." << std::endl;
    
    return 0;
}