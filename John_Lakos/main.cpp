#include <iostream>

struct s 
{
public:
    
    s() = default;
    s(const s&) = default;
    s(s&&) = default;
    
    decltype(0) i;
    std::string j;
    
    // member functions
    
    [[gnu::warn_unused_result]] int f();

[[gnu::warn_unused_result]] int s::f()
{
   return 1; 
}

int main() {
    s S;
    decltype(S.j) j = "Hello";
    
    std::cout << j << std::endl;
    
    int a = S.f();
    
    if(a == 0) {
        std::cout << "0" << std::endl;
        
    } else {
    std::cout << "1" << std::endl;
    }
    }