#include <iostream>
#include <vector>

int main () {
    std::vector<int> nums2;
    nums2.reserve(10);
    
    for (int i = 0; i < 10; i++) {
        nums2.push_back(i);
        std::cout << "Element: " << i << '\t' << "Capacity: " << nums2.capacity() << '\t' << "Size: " << nums2.size() << '\n';
}
}
