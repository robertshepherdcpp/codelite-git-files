#include <iostream>
#include <algorithm>
#include <vector>

class Over {
private:
    int value {};
public:
    Over(int i) {value = i;};
    bool operator() (int i) {return i < value;};
};

int main() {
    std::vector<int> nums {2, 4, 6, 8, 10, 12};
    auto i = std::count_if(nums.begin(), nums.end(), Over(10));
    std::cout << i << std::endl;
}