#include <iostream>

int main() {
    int previous_number {0};
    int number {1};
    int i {0};
    std::cout << "0, "; 
    while(i != 40) {
        std::cout << number + previous_number << ", ";
        int temp = number;
        number = number + previous_number;
        previous_number = temp;
        i++;
        
    }
}