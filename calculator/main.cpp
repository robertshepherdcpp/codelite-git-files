#include <iostream>

int main () {
    int num1 {};
    int num2 {};
    int num3 {};
    char operator1 {};
    char operator2 {};
    int sum {};
    
    std::cout << "Enter sum: ";
    
    std::cin >> num1;
    std::cin >> operator1;
    std::cin >> num2;
    std::cin >> operator2;
    std::cin >> num3;
    
    switch (operator1) {
    case '*' :
    sum = num1 * num2;
    break;
    case '+' :
    sum = num1 + num2;
    break;
    case '-' : 
    sum = num1 - num2;
    break;
    case '%' :
    sum = num1 % num2;
    break;
    
    }
    switch (operator2) {
        case '*' : 
        sum = sum * num3;
        std::cout << sum;
        break;
        case '+' :
        sum = sum + num3;
        std::cout << sum;
        break;
        case '-' :
        sum = sum - num3;
        std::cout << sum;
        break;
        case '%' :
        sum = sum % num3;
        std::cout << sum;
        break;

    }
    
    return 0;
}