#include <iostream>
#include <fstream>

int main () {
    std::string file_name {"bjarne_stroustrup.txt"};
    std::ofstream ost;
    ost.open(file_name);
    ost << "Hello my name is bjarne stroustrup" << '\n';
    ost.close();
    
    std::string temp {};
    std::ifstream ist;
    ist.open(file_name);
    std::string line;
    getline(ist, line);
    for (char l : line) {
        l = tolower(l);
        temp += l;
    }
    line = temp;
    std::cout << line;
    ist.close();
    
    return 0;
}