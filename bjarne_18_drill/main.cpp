#include <iostream>

int ga[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int* array, int size) {
    int la[10];
    
    for (int i = 0; i < size; i++) {
        la[i] = ga[i];
        std::cout << la[i];
    }
    
    std::cout << std::endl;
    
    int* p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = ga[i];
        std::cout << p[i];
    }
    
    std::cout << std::endl;
    
    delete[] p;
    
}

int main () {
    f(ga, 10);
    int aa[10] {1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1, 8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};
    f(aa, 10);
}