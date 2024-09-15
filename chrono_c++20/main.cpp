#include <chrono>
#include <iostream>

using namespace std::chrono;

int main() {
    auto day{Wednesday};
    std::cout << day << std::endl;
    
    auto y{2021y};
    std::cout << y << std::endl;
    
    auto day2 = day + days{4};
    std::cout << day2 << std::endl;
    
    return 0;
}