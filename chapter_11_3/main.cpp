#include <iostream>

std::string temp {};

std::string remove_vowels (std::string& o) {
    for (char j : o) {
        if (j == 'a' || j == 'e' || j == 'i' || j == 'o' || j == 'u') {
            j = ' ';
        }
        temp += j;
    }
    o = temp;
    return o;
}

int main () {
    std::cout << "The vowell remover!\n";
    std::string o {"once apon a time"};
    
    /*
    std::cout << "Enter a phrase: ";
    getline(std::cin, o);
     */ 
    
    // system("cls");
    
    remove_vowels(o);
    std::cout << o;
}