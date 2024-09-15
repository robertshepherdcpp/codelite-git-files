#include <iostream>

int main () {
    int p {10};
    int& g {p};
    
    g = 11;
    std::cout << p;
    
}