#include <iostream> 
#include <string>

int main () {
  std::string s;
  s = "abcdef";   
  std::string s1 {s};
  std::string s2 {s};
  for (int i = 0; i <= s1.size(); i += 2) {
    s1[i] = std::toupper(s1[i]);
  }
  for (int j = 1; j <= s2.size() - 1; j +=2) {
    s2[j] = std::toupper(s2[j]);
      
  }
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    
    return 0;
}


