#include <ctime>
#include <iostream>
#include <vector>


int main () {
    std::string guess {};
    int hint_count {1};
    int times_done {0};
    std::string theme {"Fruit and vegtables."};
    
    std::cout << "Welcome to the Word Jumble game!" << std::endl;
    std::cout << "The theme is " << theme << "\n\n" << std::endl;
    
    std::vector<std::string> words{"Apple", "Carrot", "Banana", "Pear", "Orange", "Cucumber", "kiwi", "Tomato", "Onion", "Cabbage", "Pepper" , "Apricot"};
    
    srand(time(nullptr));
    int index = rand() % words.size();
    std::string word = words[index];
    word[0] = std::tolower(word[0]);
    
    auto length = word.size();
    std::string jumbled_word = word;
    for (int index1 = 0; index1 < length; index1++) {
        std::string word = words[index];
        int index2 = rand() % length;
        char temporary = jumbled_word[index1];
        jumbled_word[index1] = jumbled_word[index2];
        jumbled_word[index2] = temporary;
    }

    
    
    std::cout << "Here is the jumbled word: " << jumbled_word << std::endl;
    while (guess != "exit") {
        if (times_done > 0) {
            std::cout << jumbled_word;
        }
    std::cout << "\n\nEnter your first guess: ";
    std::cin >> guess;
        
if (guess == "hint") {
  if (hint_count < word.size()) hint_count++;
  std::cout << word.substr(0, hint_count) << std::endl;

guess = "";
        ++hint_count;
    } else if (guess == "exit") {
        break;
    } else if (guess == word) {
        std::cout << "Congratulations you guessed it!" << std::endl;
        continue;
    } else {
    
        std::cout << "Try again!" << std::endl;
        continue;
    }
    
    ++times_done;
    }
    if (guess == word) {
    std::cout << "\nCongratulations you guessed it!" << std::endl;
    }
    std::cout << "Bye!" << std::endl;
    return 0;

}

