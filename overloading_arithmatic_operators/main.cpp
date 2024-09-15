#include <string>
#include <iostream>
#include <iomanip>

class Gallons {
private:
    int gallons;
public:
    int get_gallons() {return gallons;};
    void set_gallons(int gallons_param);
    Gallons(int gallons_param2 = 0);
    Gallons operator+ (const Gallons& param);
    Gallons operator- (const Gallons& param2);
    Gallons operator* (const Gallons& param3);
    Gallons operator/ (const Gallons& param4);
    Gallons operator% (const Gallons& param8);
    bool operator< (const Gallons& param6);
    bool operator== (const Gallons& param5);
    bool operator> (const Gallons& param7);
    
    

};

Gallons Gallons::operator% (const Gallons& param8) {
    Gallons t;
    t.set_gallons(gallons % param8.gallons);
    return t;
}

bool Gallons::operator< (const Gallons& param6) {
    return (gallons < param6.gallons);
}

bool Gallons::operator> (const Gallons& param7) {
    return (gallons > param7.gallons);
}

Gallons Gallons::operator/ (const Gallons& param4) {
    Gallons t;
    t.set_gallons(gallons / param4.gallons);
    return t;
}

bool Gallons::operator== (const Gallons& param5) {
return (gallons == param5.gallons);
}

Gallons Gallons::operator* (const Gallons& param3) {
    Gallons t;
    t.set_gallons(gallons * param3.gallons);
    return t;
}

Gallons Gallons::operator- (const Gallons& param2) {
    Gallons t;
    t.set_gallons(gallons - param2.gallons);
    return t;
}

Gallons Gallons::operator+ (const Gallons& param) {
    Gallons t;
    t.set_gallons(gallons + param.gallons);
    return t;
}

Gallons::Gallons(int gallons_param2) {
    gallons = gallons_param2;
}

void Gallons::set_gallons(int gallons_param) {
    gallons = gallons_param;
}

int main() {
    
    Gallons t(100);
    Gallons v(200);
    Gallons g = t + v;
    std::cout << g.get_gallons() << std::endl;
    g = v - t;
    std::cout << g.get_gallons() << std::endl;
    g = v * t;
    std::cout << g.get_gallons() << std::endl;
    g = v / t;
    std::cout << g.get_gallons() << std::endl;
    bool result = v == t;
    std::cout << std::boolalpha;
    std::cout << result << std::endl;
    bool result2 = v > t;
    bool result3 = v < t;
    std::cout << std::boolalpha;
    std::cout << "Is v greater than t?" << std::endl;
    std::cout << result2 << std::endl;
    std::cout << "Is t greater than v?" << std::endl;
    std::cout << result3 << std::endl;
    
    std::cout << "V's value: " << v.get_gallons() << std::endl;
    std::cout << "T's value: " << t.get_gallons() << std::endl;
    
    std::cout << "v % t = ";
    
    g = v % t;
    std::cout << g.get_gallons() << std::endl;
}