#include <iostream>
#include <string>
#include <algorithm>

int main () {
 std::string cc_number {"4748-8845-6748-5299"};
 std::replace(cc_number.begin(), cc_number.end(), '-', ' ');
 std::cout << cc_number << '\n';
 
 std::replace (cc_number.begin(), cc_number.end(), ' ', '-');
 std::cout << cc_number << '\n';
}