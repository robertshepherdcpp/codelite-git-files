#include <iostream>

int main () {
    std::string name {"Robert"};
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::string string1 {"Hello"};
    std::string string2 {"hello my name is <nm>"};
    int index {0};
    string1.erase(0, 1);
    string1.insert(0, "h");
    index = string2.find("<nm>");
    string2.replace(index, 4, name);
    std::cout << string1 << std::endl;
    std::cout << string2;
    
    return 0;
}