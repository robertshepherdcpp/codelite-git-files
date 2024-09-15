#include <iostream>

template<int N>
struct Factorial {
    static value = N * Factorial<N - 1>::value;
}

struct Factorial<0> {
    static value = 1
}