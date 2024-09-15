#include <iostream>
#include <string>
#include <iomanip>


class animal {
std::string name;

public:
std::string GetName () { return name; }
void SetName (std::string a) {
    name = a;
}; 
  
};

class sheep: public animal {
  bool wool = true;
  
public:
std::string name = "Sheep";

  bool GetWool () { return wool; }
  bool SetWool (bool a) {return wool; }
};
int main () {
    animal i;
    sheep j;
    i.SetName("Zebra");
    std::cout << i.GetName() << std::endl;
     std::cout << std::boolalpha;
     std::cout << j.GetName() << std::endl;
    
    return 0;
}