#include <iostream>

struct custom_exeption{
  
    std::string message {};
    int gallons {};

  
};

void get_mpg (int gallons, int miles) {
    
    if (gallons <= 0) {
        custom_exeption error;
        error.gallons = gallons;
        error.message = "Gallons must be > 0";
        throw error;
    }
    
    if (gallons > 0) {
        int mpg = miles / gallons;
        std::cout << mpg << std::endl;
    }
    
}

int main () {
    
    int gallons {};
    int miles {};
    
    std::cout << "Enter gallons: ";
    std::cin >> gallons;
    
    std::cout << "Enter miles: ";
    std::cin >> miles;
    
    try {
        get_mpg(gallons, miles);
    }
    catch (const custom_exeption& e) {
        std::cout << e.message << std::endl;
    }
    return 0;
}