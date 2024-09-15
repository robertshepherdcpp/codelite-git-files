#include <iostream>
#include <ctime>
#include <string>
#include <vector>

int main() {
    std::cout << "Welcome to Hangman!\n" << std::endl; 
    std::vector<std::string> words {"car", "tree", "house", "light"};
    
    // get random word
    srand(time(nullptr));
    int random = rand() % words.size();
    std::string word = words[random];
    
    // output info
    int _count {};
    std::vector<char> blanks {};
    while(true) {
    std::cout << "Here is your word but blanked out: ";
    std::string blank_word {};
    for(int i = 0; i < word.size(); i++) {
        if(_count != word.size()) {
        blanks.push_back('_');
        ++_count;
        }
    }
    for(int i = 0; i < blanks.size(); i++) {
        std::cout << blanks[i] << ' ';
    }
    std::cout << std::endl;

    
    // get guess from user
    int guess_count;
    std::string guess;
    std::cout << "Enter your guess for a word or a letter: ";
    std::cin >> guess;
    ++guess_count;
    
    // check guess
    int index {};
    for(int i = 0; i < word.size(); i++) {
    if (guess.size() == 1) {
        if (guess[0] == word[i]) {
            blanks[i] == guess[0];
        
    }
    }
    for(int i = 0; i < blanks.size(); i++) {
        blank_word[i] = blanks[i];
    }
    
} if(guess == word || blank_word == word) {
    std::cout << "Well done you guesses it in " << guess_count << " guesses!" << std::endl;
    break;
} else {
    std::cout << "No. Try again." << std::endl;
    continue;
}

    
    std::cout << "Well done!" << std::endl;
    
    return 0;
}
}