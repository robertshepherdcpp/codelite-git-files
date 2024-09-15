#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

int main () {
    std::vector<std::string> words {""};
    std::string french {};
    std::string english {};
    std::string language {};
    std::string answer {};
    char yes_no {};
    std::cout << '\t' << "The french thing\n\n";
    std::cout << "Enter \"exit\" to exit. \n\n";
    
    while (language != "exit") {
    std::cout << "Enter the language: ";
    std::cin >> language;
    
    std::cout << "Enter the English word: ";
    std::cin >> english;
    
    std::cout << "Enter the " << language << " word: ";
    std::cin >> french;
    

    
    words.push_back(english);
    words.push_back(french);
    
    std::cout << "Continue? y/n";
    std::cin >> yes_no;
    
    if (yes_no == 'n') {
        break;
    } else {
        continue;
    }
    }
    
    std::cout << "The test!" << std::endl;
    
    int elapsed_seconds = time(nullptr);
    
    srand(elapsed_seconds);
    
    int random = rand() % words.size();
    
    std::cout << "Enter the correct meaning of " << words[random] << ': ';
    std::cin >> answer;
    if (answer == words[random = 1] || answer == words[random - 1]) {
        std::cout << "Correct!\n";
    } else {
        std::cout << "Wrong!\n";
    }
    return 0;
}