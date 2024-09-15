#include <iostream>

int main () {
    char cstring [5];
    cstring[1] = 't';
    cstring[2] = 'e';
    cstring[3] = 's';
    cstring[4] = 't';
    
    for (int i = 1; i < 5; i++) {
    std::cout << cstring[i];
    }
    
    char cstring2 [] = "\ntest";
    std::cout << cstring2;
    
    return 0;
    
}