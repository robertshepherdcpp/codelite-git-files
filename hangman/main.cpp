#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

int main () {
    std::string temp2 {};
    int index {};
    char y_or_no {};
    int guess_count {5};
    std::cout << "Welcome to hangman!" << std::endl;
    std::vector<std::string> words{"butternutsquash", "goal", "dinosaur", "mazda", "sainsburys", "house", "badge", "sticker", "light", "operator", "paper", "skittles", "memory", "address", "pen"};
    int elapsed_seconds = time(nullptr); // setting up rand
    srand(elapsed_seconds);
    int random = rand() % words.size();
    
    std::string word = words[random]; // getting word
    
    std::string guess {""};
    std::string temp {};
    
        for (char c : word) { // if word was hello it would be _ _ _ _ _
            c = '_';
            temp += c;
            temp += " ";
            
        }
    
    while (true) {
        // display the _'s
        std::cout << "Here are the letters: ";
        std::cout << temp << std::endl;
        // getting guess of user
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        //getting index
        char j = guess[0];
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == j) {
                index = i;
                temp[i] = guess[0];
            }
        }
        // checking if guess is somewhere in word
        // if it is temp would now be h _ _ _ _
        if (guess[0] == word[index]) {
            temp[index] = guess[0];
            // outputs new updated temp
        } else {  // if guess was wrong
            --guess_count;
            std::cout << "No, You have " << guess_count << " guesses left." << std::endl;
            if (guess_count < 0) {
        std::cout << "Would you like to go again? y/n: ";
        std::cin >> y_or_no;
        if (y_or_no == 'y') {
            continue;
    }
                break;
            }
        }
        
        
        
        // goes back to start
        continue;
        if (guess_count < 0) {
            std::cout << "You ran out of guesses!" << std::endl;
        std::cout << "Would you like to go again? y/n: ";
        std::cin >> y_or_no;
        if (y_or_no == 'y') {
        continue;
    } 
        }
        if (guess == word) {
        
        std::cout << "Well done you only got " << 5 - guess_count << " wrong!";
        std::cout << "Would you like to go again?" << std::endl;
        std::cin >> y_or_no;
        if (y_or_no == 'y') {
            continue;
        }
    } else {
        std::cout << "You ran out of guesses!" << std::endl;
        std::cout << "Would you like to go again? y/n: ";
        std::cin >> y_or_no;
        if (y_or_no == 'y') {
            continue;
    } else {
        std::cout << "Bye!" << std::endl;
    }
}





}
}