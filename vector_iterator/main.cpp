#include <vector>
#include <iostream>

int main() {
    std::vector<int> i = {1, 2, 3, 4, 5};
    
    for(std::vector<int>::iterator iter = i.begin(); iter != i.end(); iter++) {
        std::cout << *iter << std::endl;
    }
}