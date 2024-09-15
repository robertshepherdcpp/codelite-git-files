
#include <iomanip>
#include <iostream>

int main () {
    std::cout << std::endl;
    std::cout << std::left;
    std::cout << std::setw(20) << "Total" << std::right << 199.99 <<std::endl;
    std::cout << std::left;
    std::cout << std::setw(20) << "Taxes" << std::right << 22.50 <<std::endl;
    std::cout << std::left;
    std::cout << std::setw(20) << "Grand Total" << std::right << 177.51 <<std::endl;
    std::cout << std::left;
    std::cout << '\n' << std::endl;
    

  
return 0;     

}