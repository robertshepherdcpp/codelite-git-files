#include <iostream>

template<int N>
struct Factorial {
   static const unsigned long long value {N * Factorial<N-1>::value};
}
template<>
struct Factorial<0> {
    static const unsigned long long value {0};
}

int main() {
    std::cout << Factorial<6>::value << std::endl;
}