#include <iostream>

namespace detail {
    std::true_type is_nullptr(std::nullptr_t);
    std::false_type is_nullptr(...);
}

template <typename T> struct is_null_pointer : std::false_type {};

template <typename T> struct is_null_pointer<std::nullptr_t> : std::true_type {};

int main() {
   static_assert(is_null_pointer<int>, "Parameter passed in is not nullptr");
}