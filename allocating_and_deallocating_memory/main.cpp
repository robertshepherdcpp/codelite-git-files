#include <iostream>

int main () {
    
    int* pie = new int;
    std::cout << pie << " (location of int on the free store)" << std::endl;
    delete pie;
    
    double* nums = new double[10] {0};
    std::cout << nums << " (location of array on the free store)" << std::endl;
    delete[] nums;
    
    return 0;
    
}