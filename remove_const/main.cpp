#include <iostream>

template<typename T>
struct TypeIdentity {
    using type = T;
};

template<typename T>
struct remove_const : TypeIdentity<T> {};

template<typename T>
struct remove_const<T const> : TypeIdentity<T> {};

int main() {
    

    
}