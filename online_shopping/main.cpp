#include <iostream>
#include <vector>
#include <string>
#include <fstream>

    std::ofstream output_stream;
    std::string output {};

void print_options () {
    std::cout << "1.Pink lady apples." << std::endl;
    std::cout << "2.Butternut squash" << std::endl;
    std::cout << "3.Cut pinnaple" << std::endl;
    std::cout << "4.Whole cucumber" << std::endl;
    std::cout << "\nChose an item: ";
}

void add_to_reciet(std::vector<std::string> choices, int choice) {
    

    output_stream.open("shopping.txt", std::ios::app);
    output_stream << choices[choice - 1] << std::endl;
    output_stream.close();
}
int main () {
    
    int choice {};
    std::vector<std::string> choices {"Pink lady apples.", "Butternut squash","Cut pinnaple", "Whole cucumber"};
    std::cout << "Welcome to Robert's online shopping!\n\n" << std::endl;
    print_options();
    std::cin >> choice;
    char y_or_n;
    std::cout << "Would you like to add " << choices[choice - 1] << " to your basket? ";
    std::cin >> y_or_n;
    if (y_or_n == 'y') {
        add_to_reciet(choices, choice);
    }
    
    std::ifstream input_stream;
    input_stream.open("shopping.txt"); 
    while(input_stream >> output);
    std::cout << output;
    input_stream.close();

    
    
    
}