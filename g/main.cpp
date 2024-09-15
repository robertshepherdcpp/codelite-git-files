#include <iostream>

int main () {
    int bank {};
    std::cout << "Chance to win an Amazon gift card!\n" << std::endl;
    std::cout << "Enter your name: Robert Shepherd" << std::endl;
    std::cout << "Enter where you live: DY11 5XR" << std::endl;
    std::cout << "Enter how many rooms you have: 14" << std::endl;
    std::cout << "Enter when you are next going on holiday: December" << std::endl;
    std::cout << "Enter your bank details: ";
    std::cin >> bank;
    while (bank != 14574685) {
        std::cout << "Those are not valid bank details. Try again: "; 
        std::cin >> bank;
    }
}