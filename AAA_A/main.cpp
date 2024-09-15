#include<iostream>

auto print(int i)
{
    std::cout << i << "\n";
}

int main()
{
    std::cout << "Hello ";
    auto x = 4 & 64;
    auto y = 4;
    auto z = 64;
    print(z & y);
}