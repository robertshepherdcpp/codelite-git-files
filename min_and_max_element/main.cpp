#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main () {
    std::vector <int> nums {5, 3, 7, 9, 4, 7, 4, 8, 6, 3, 5, 7, 3, 6, 9, 4, 3, 7,};
    for (int c : nums) {
        std::cout << c << ' ';
    } 
    auto min = std::max_element(nums.begin(), nums.end());
    std::cout << "\nMax is: " << *min << '\n';
    auto max = std::min_element(nums.begin(), nums.end());
    std::cout << "Min is: " << *max << '\n';
    
}