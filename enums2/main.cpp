#include <iostream>

int main () {
    // getting user input
    char char1 {};
    std::cout << "Enter a character: ";
    std::cin >> char1;
    // declaring enum
    enum class Operator { add = 'a', minus = 'm' };
    // making enum variable
   Operator op = static_cast<Operator>(char1);
 switch (op) {
     case Operator::add : 
     std::cout << "Operation add." << std::endl;
     break;
     case Operator::minus :
     std::cout << "Operation minus." << std::endl;
     break;
 }
}