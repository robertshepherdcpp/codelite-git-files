#include <iostream>
#include <string>
#include <map>

int main () {
    
    while (true) {
    // get input from the user.
    std::string language;
    std::string lang_word;
    std::string translation;
    std::string answer;
    std::cout << "Enter a language: ";
    std::cin >> language;
    std::cout << "Enter a word in the " << language << " language: ";
    std::cin >> lang_word;
    std::cout << "Enter the translation of " << lang_word << " in English: ";
    std::cin >> translation;
    
    // do things with the input
    std::map <std::string, std::string> language_map{ {lang_word, translation},  };
    
    // asks the user
    for (std::pair <std::string, std::string> p : language_map) {
        std::cout << p.first << ": ";
    }
    std::cin >> answer;
    
 
    }
}

