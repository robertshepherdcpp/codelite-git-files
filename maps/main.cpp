#include <iostream>
#include <string>
#include <map>

int main () {
    
    std::map <std::string, int> states { {"CA", 10}, {"PO", 20}};
    for (std::pair <std::string, int> p : states) {
        // p.first = "Hello?";     ////this works
        std::cout << p.first << "(" << p.second << ")\n";
    }
    
    return 0;
}