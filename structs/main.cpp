#include <iostream>

    struct animal {
        int age = 0;
        std::string name {""};
    };
    
int main () {
    animal Animal;
    Animal.age = 11;
    Animal.name = "Lion";
    
    std::cout << Animal.age << ", " << Animal.name;
}