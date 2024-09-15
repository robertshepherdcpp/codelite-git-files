#include <iostream>

template <auto T> [[noreturn]] auto do_something()
{
    std::cout << 42 * (32 & 8 * 8) / 4 << "\n";
}

[[nodiscard]] auto __f__u__n__c__(auto xyz)
{
    do_something<42>();
}

int main()
{
    std::cout << "Hello World" << '\n';
}