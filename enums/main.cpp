#include <iostream>

enum class Operation { add, subract, multiply, divide };

double calculate (Operation op, double num1, double num2) {
    switch (op) {
        case Operation::add :
        std::cout << num1 + num2;
        return num1 + num2;
    }
}
int main () {
    
    Operation op;
    
    double num1 = 50, num2 = 25;
    
    op = Operation::add;
    
    calculate(op, num1, num2);
    
    
    
}