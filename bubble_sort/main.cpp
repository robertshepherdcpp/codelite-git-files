#include <iostream>

void bubble_sort (int nums[], int size) {
    for (int j = 0; j < size; j++) {
        if (nums[j] > nums[j + 1]) {
            int temp = nums[j];
            nums[j] = nums[j + 1];
            nums[j + 1] = temp;
            j = 0;
        }
    }
    for (int i = 0; i < size; i++) {
        std::cout << nums[i] << " ";
    }
}

int main () {
    const int size = 9;
    int nums[size] {1, 3, 5, 8, 4, 7, 9, 2, 6};
    bubble_sort(nums, sizeof(nums) / sizeof(nums[0]));
}