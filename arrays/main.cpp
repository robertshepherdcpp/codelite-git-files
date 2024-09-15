#include <iostream>

int main () {
    int nums [3];
    nums[3] = 5;
    nums[2] = 7;
    nums[1] = 2;
    
    for (int i = 1; i < 4; i++) {
        std::cout << nums[i] << std::endl;
    }
    return 1;
 
}
