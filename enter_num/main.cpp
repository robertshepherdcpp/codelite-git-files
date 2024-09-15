#include <iostream>

void check_temp(int temp) {
    
    if (temp <= 0) {
        throw std::invalid_argument("Temp has to be above 0.");
    }
    else {
        std::cout << "Your temp is good." << std::endl;
    }
    
}    

int main () {
    
    int temp {};
    
    std::cout << "Enter a temp: ";
    std::cin >> temp;
    
    try {
    check_temp(temp);
    }
    catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
        throw;
    }
    
    return 0;
    

}