#include <iostream>

    namespace temperature {
        double to_celcius (double i) {
            double temp = i * 5 - 2;
            return temp;
        }
    }
    
int main () {

    std::cout << temperature::to_celcius(5.02);
    
}