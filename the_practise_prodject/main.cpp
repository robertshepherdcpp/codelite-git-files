#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void retrn_options() {
    std::cout << "\n1. Temperature Manager" << '\n';
    std::cout << "2. Your favourite movies" << '\n';
    std::cout << "\nEnter your choice: ";
}

void temperature_manager (std::vector <int> temps, int temp) {
    
    while (true) {
        int choice1 {};
        std::cout << "1. Add a temperature." << '\n';
        std::cout << "2. View temperatures." << '\n';
        std::cout << "3. Exit." << '\n';
        std::cout << "4. See high and low temps." << '\n';
        std::cout << "Enter your choice: ";
        std::cin >> choice1;
        if (choice1 == 1) {
        std::cout << "Enter a temperature: ";
        std::cin >> temp;
        temps.push_back(temp);
        char y_or_n {};
        std::cout << "Do you want to enter another temperature? y/n: ";
        std::cin >> y_or_n;
        if (y_or_n == 'y') {
            continue;
        } else {
            break;
        }
        
        } else if (choice1 == 2) {
            for (auto temp1 : temps) {
                std::cout << temp << "\n";
            } 
        char y_or_n2 {};
        std::cout << "Do you want to enter another temperature? y/n: ";
        std::cin >> y_or_n2;
        if (y_or_n2 == 'y') {
            continue;
        } else {
            break;
        }
        } else if (choice1 == 3) {
            break;
        } else if (choice1 == 4) {
            auto low = std::min_element(temps.begin(), temps.end());
            auto high = std::max_element(temps.begin(), temps.end());
            std::cout << "The lowest temperature is: " << *low << '\n';
            std::cout << "The highest temperature is: " << *high << '\n';
        }
    
    }
    
}

int main () {
    std::cout << "The Practice Project" << '\n'; 
    int choice {};
    int temp {};
    std::vector <int> temps {};
    retrn_options();
    std::cin >> choice;
    if (choice == 1) {
    temperature_manager(temps, temp);
       }
   } 
