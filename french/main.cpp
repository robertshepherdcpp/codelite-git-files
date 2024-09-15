#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>

int main () {
    std::string question {};
    std::vector <std::string> questions {};
    
    std::ifstream input_file;
    input_file.open("questions.txt");
    if (input_file) {
        std::string line;
        while (getline(input_file, line)); 
            questions.push_back(line);
        input_file.close();
    }
    
    std::cout << "The french question asker.\n\n";
    std::cout << "Enter \'x\' to exit.\n" << std::endl;
    
    int elapsed_seconds = time(nullptr);
    srand(elapsed_seconds);
    
    while (question != "x") {
        std::cout << "Enter a question: ";
        getline(std::cin, question);
        if (question != "x") {
        questions.push_back(question);
        }
    }
    
    int index = rand() % questions.size();
    std::cout << questions[index] << std::endl;
    
    std::ofstream output_file;
    output_file.open("questions.txt");
    for (std::string q : questions) {
        output_file << q;
    }
    output_file.close();
}