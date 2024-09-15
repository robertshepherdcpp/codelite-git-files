#include <iostream>
#include <string>

double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067;

int get_choice() {
    char choice {};
    
    std::cout << "Enter a choice: ";
    std::cin >> choice;
    
    switch(choice) {
        case 'a':
        std::cout << "Your choice was the area of a circle." << std::endl;
        return 1;
        break;
        case 'b':
        std::cout << "Your choice was the circumference of a circle." << std::endl;
        return 2;
        break;
        case 'c':
        std::cout << "Your choice was the area of a sector." << std::endl;
        return 3;
        break;
        case 'd':
        std::cout << "Your choice was the area of a semi cirle." << std::endl;
        return 4;
        break;
    } 
}

void peform_calculation(int i) {
    double radius {};
    double result {};
    double radius_squared {};
    double diameter {};
    double degrees {};
    double area {};
    double division {};
    switch(i) {
        case 1:
        std::cout << "Enter the radius: ";
        std::cin >> radius;
        radius_squared = radius * radius;
        result = pi * radius_squared; 
        std::cout << "Result: " << result << std::endl;
        break;
        case 2:
        std::cout << "Enter the diameter: ";
        std::cin >> diameter;
        result = pi * diameter;
        std::cout << "Result: " << result << std::endl;
        break;
        case 3:
        std::cout << "Enter the radius: ";
        std::cin >> radius;
        std::cout << "Enter the degrees: ";
        std::cin >> degrees;
        radius_squared = radius * radius;
        area = pi * radius_squared; 
        division = degrees / 360.0;
        result = division * area;
        std::cout << "Result: " << result << std::endl;
        break;
        case 4:
        std::cout << "Enter the radius: ";
        std::cin >> radius;
        radius_squared = radius * radius;
        area = pi * radius_squared;
        result = area / 2;
        std::cout << "Result: " << result << std::endl;
        
    }
}

int main() {
    int counter {1};
    while(true) {
    std::cout << "\nRound " << counter  << "\n" << std::endl;
    int i = get_choice();
    peform_calculation(i);
    counter++;
    }
    
    return 0;
}