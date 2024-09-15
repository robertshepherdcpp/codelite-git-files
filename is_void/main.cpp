#include <iostream>

template <typename T> struct is_void : std::false_type {};

template <> struct is_void<void> : std::true_type {};

template <> struct is_void<void const> : std::true_type {};

template <> struct is_void<void volatile> : std::true_type {};

template <> struct is_void<void const volatile> : std::true_type {};

int main() {
    const int t;
    
    std::cout << is_void<t>::value << std::endl;
}