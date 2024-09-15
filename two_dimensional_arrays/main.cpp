#include <iostream>

int rows = 4, colums = 3;

int main () {
    int twod_array[rows] [colums] {0};
    twod_array[1] [0] = 4;
    for (int i = 0; i < rows; i++) {
        int total = 0;
        std::cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < colums; j++) {
            std::cout << twod_array[i] [j] << " ";
        }
        std::cout << std::endl;
    }
}