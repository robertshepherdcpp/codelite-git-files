#include <iostream>

struct Movie {
    std::string name {""};
    int year = 0;
    
    bool operator== (const Movie& to_compare) {
        return (name == to_compare.name && year == to_compare.year);
    }
};
int main () {
    Movie ww1 {""};
    Movie ww2 {""};
    
    if (ww1 == ww2) {
        std::cout << "They are the same." << std::endl;
    } else {
        std::cout << "They are not the same." << std::endl;
    }
}