#include <iostream>
#include <string>
#include <map>
#include <algorithm>

struct Under {
    double limit;
    
    Under(double max) {
    limit = max;
    }
    
    bool operator () (std::pair<std::string, double> p) const {
        return p.second < limit;
    }
};

int main () {
    
    std::map<std::string, double> products { {"Car", 200.50}, {"Tree", 150.70}};
    auto num_low = count_if(products.begin(), products.end(), Under(500.0));
    std::cout << num_low;
}