#include <iostream>
#include <string>

class Calculator {
private:
int result;
public:

Calculator multiply(int a, int b) {
    this->result = a * b;
    return *this;
}

Calculator square_result() {
    this->result *= this->result;
    return *this;
}

int get_result() {
    return this->result;
}

Calculator divide_result_by(int c) {
    this->result /= c;
    return *this;
}

};

int main() {
    Calculator a;
    a.multiply(5, 2);
    a.square_result();
    a.divide_result_by(5);
    std::cout << a.get_result() << std::endl;
    
    return 0;
}