#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> middles;
int middle;

int FindMidpoint(int n) {
    return (n + 1) / 2; 
}

void PrintPalindromeSubstr(int n, int j, std::string s) {
    for(int i = n; i < j; i++) {
        std::cout << s[i] << std::endl;
    }
}

void FindPalindromeSubstr(std::string s) {
    int size = s.length();
    
    if(size == 1) {
        std::cout << s << std::endl;
    }
    
    if(size % 2 == 0) {
        middles.push_back(size / 2);
        middles.push_back(size / 2 + 1);
        
        int i = middles[0];
        int j = middles[1];
        
        while(s[i] == s[j]) {
            i--;
            j++;
        }
        
        PrintPalindromeSubstr(i, j, s);
    }
     else {
         middle = FindMidpoint(size);
     }
}

int main() {
    FindPalindromeSubstr("sinnis");
}