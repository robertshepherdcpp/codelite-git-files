#include <iostream>

int count = 0;

template<typename T>
void output(T value, int amount_of_times) {
    for (int i = 0; i < amount_of_times; i++) {
    std::cout << value << std::endl;
    ++count;
}
}

int main() {
    
    output(12, 5);
    output("Hello", 1);
    
    output(RAND_MAX, 1);
    std::cout << "Count = " << count << std::endl;
    
}