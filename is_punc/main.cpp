#include <iostream>

int main () {
    std::cout << "Password punc finder" << std::endl;
    std::string password {"TheCa;turer"};
    std::cout << "\n\nEnter a password: ";
    std::getline(std::cin, password);
    bool if_true {false};
    for (char c : password) {
        if (ispunct(c)) {
            if_true = true;
            
        }
    }
    std::cout << std::boolalpha << std::endl;
    std::cout << if_true << std::endl;
}
