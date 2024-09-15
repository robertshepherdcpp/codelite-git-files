#include <iostream>



int get_word_count (std::string& sentance) {
    int word_counter;
    for (int i = 0; i < sentance.size(); i++) {
        if (i != ' ') {
            ++word_counter;
        }
    }
    return word_counter;
}

int get_char_count (std::string& sentance) {
    int char_counter;
    for (int i = 0; i < sentance.size(); i++) {
        if (i != ' ') {
            ++char_counter;
        }
    }
    return char_counter;
}

int main () {
    std::string sentance;
    std::cout << "Enter a sentance: ";
    std::getline(std::cin, sentance);
    
    int words = get_word_count(sentance);
    
    int chars = get_char_count(sentance);
    
    std::cout << "Word count: " << words << std::endl;
    std::cout << "Char count: " << chars << std::endl;
}