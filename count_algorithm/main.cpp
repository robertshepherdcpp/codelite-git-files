#include <iostream>
#include <vector>
#include <algorithm>

int main () {
    std::vector<int> numbers {1, 6, 7, 3, 2, 6, 4, 7, 8, 10, 5, 3, 8, 9};
    int c = std::count(numbers.begin(), numbers.end(), 4);
    std::cout << 4 << " Was contained " << c << " times in numbers.\n";
    
    std::cout << "\nAlphabetitizer 2.0\n\n";
    std::vector<std::string> words {"hello", "bye", "hi", "goodbye"};
    std::sort(words.begin(), words.end());
    for (std::string c : words) {
        std::cout << c << ' ';
    }
    std::cout << "\n\n";
    
    std::cout << "\nThe sort function\n\n";
    std::sort(numbers.begin(), numbers.end());
    for (int i : numbers) {
        std::cout << i << "\n";
    }
 
}