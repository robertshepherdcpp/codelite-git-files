#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <ctime>

template<typename T>
class Container {
private:
  T* elems;
  int size;
public:
  // constructors
  Container();
  Container(std::initializer_list<T> list);
  Container(const Container& to_copy);
  Container(Container&& to_move);
  // move assignment operators
  Container& operator=(const Container& to_copy);
  Container& operator=(Container&& to_move);
  // member functions
  int get_size() {return size;};
  T operator[](int i) {return elems[i];};
  
};

template<typename T>
Container<T>::Container() {
    elems = nullptr;
    size = 0;
}

template<typename T>
Container<T>::Container(std::initializer_list<T> list) {
    std::copy(list.begin(), list.end(), elems);
}
template<typename T>
Container<T>::Container(const Container& to_copy) {
    size = to_copy.size;
    delete[] elems;
    for(int i = 0; i < size; i++) {
        elems[i] = to_copy.elems[i];
    }
}

template<typename T>
Container<T>::Container(Container&& to_move) {
    size = to_move.size;
    elems = to_move.elems;
    to_move.size = 0;
    to_move.elems = nullptr;
}

template<typename T>
Container<T>& Container<T>::operator=(const Container& to_copy) {
    size = to_copy.size;
    elems = new T[size];
    elems = to_copy.elems;
    
    return *this;
}

template<typename T>
Container<T>& Container<T>::operator=(Container&& to_move) {
    size = to_move.size;
    delete elems;
    for(int i = 0; i < size; i++) {
        elems[i] = to_move.elems[i];
    }
    return *this;
}

const std::string filename {"christmas.txt"};
std::vector<std::string> names2 {};

void print_names (std::vector<std::string> names) {
    for(int i = 0; i < names.size(); i++) {
        std::cout << names[i] << std::endl;
    }
}

void output_file2() {
    std::string name2 {};
    std::ifstream input_file;
    input_file.open(filename);
    while(input_file >> name2) {
        names2.push_back(name2);
        names2.push_back(", ");
    }
    input_file.close();
} 

void output_random_number() {
    srand(time(nullptr));
    int random = rand();
    std::cout << random << std::endl;
}

void output_random_character() {
    int random_char = rand() % 128;
    char rand_char = static_cast<char> (random_char);
    std::cout << rand_char << std::endl;
}

void explain() {
    std::cout << "\nThe code you are seeing currently is c++." << std::endl;
    std::cout << "A simple c++ program is std::cout << \"Hello World\" << std::endl;" << std::endl;
    std::cout << "That will print to the console Hello World.\n" << std::endl;
} 

void the_guessing_game() {
    int count {};
    int number_guess {};
    srand(time(nullptr));
    int random_int = rand() % 10;
    random_int += 1;
    std::cout << "I am thinking of a number from 1 - 10." << std::endl;
    while(true) {
    std::cout << "Enter your guess: ";
    ++count;
    std::cin >> number_guess;
    if (number_guess == random_int) {
        std::cout << "Well done you guessed it in " << count << " guesses!\n" << std::endl;
        break;
    } else if (number_guess < random_int) {
        std::cout << "No. The number is higher." << std::endl;
    } else if (number_guess > random_int) {
        std::cout << "No. The number is lower." << std::endl;
    } else {
        std::cout << "Invalid guess." << std::endl;
    }
    
    }
    
}

void clear_screen() {
    system("cls");
}

int main () {
    std::ofstream output_file;
    char letter_choice;
    
    // output_file.open(filename);
    
    // for(int i = 0; i < 18; i++) {
    // std::string name;
    // std::cin >> name;
    // output_file << name << '\n' << std::endl;
    
    // }
    
    output_file.close();
    
    std::vector<char> alphabet{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's'};
    std::vector<std::string> commands{"Print the names of 8S", "Output a random number", "Output a random ascii character", "What does c++ do?"};
    commands.push_back("The guessing game.");
    commands.push_back("Clear the screen.");
    commands.push_back("Exit");
    std::string name;
    std::vector<std::string>names {};
    std::cout << "Hello! Welcome To 8S's christmas room!" << std::endl;
    std::cout << "\nPlease enter your name!: ";
    std::cin >> name;
    names.push_back(name);
    std::cout << name << " is a great name!\n" << std::endl;
    
    while(letter_choice != 'g') {
    
    std::cout << "Enter a command from the following commands: " << std::endl;
    for(int i = 0; i < commands.size(); i++) {
        std::cout << alphabet[i] << ") ";
        std::cout << commands[i] << std::endl;
    }
    std::cout << "\nEnter a letter now: ";
    std::cin >> letter_choice;
    
    output_file2();
    
    switch(letter_choice) {
        case 'a':
        print_names(names);
        break;
        case 'b':
        output_random_number();
        break;
        case 'c':
        output_random_character();
        break;
        case 'd':
        explain();
        break;
        case 'e':
        the_guessing_game();
        break;
        case 'f':
        clear_screen();
        break;
        case 'g':
        break;
    }
    }
    
    Container<int> nums1 {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Container<int> nums2 {5, 7, 3, 7, 4, 8, 1, 3, 9};
    nums1 = nums2;
    int temp;
    temp = nums1[0];
    std::cout << temp << std::endl;

    
    return 0;
}