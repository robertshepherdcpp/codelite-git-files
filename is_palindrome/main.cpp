#include <iostream>
#include <algorithm>

bool is_palindrome(std::string s) {
    bool is_palindrome = false;
    std::string string_reverse = s;
    std::reverse(string_reverse.begin(), string_reverse.end());
    if (s == string_reverse) {
        is_palindrome = true;
        return is_palindrome;
    } else {
        return is_palindrome;
    }
}

int main() {
    std::string s1 = "ada";
    std::string s2 = "house";
    std::string s3 = "";
    
    
    std::cout << "Enter a palindrome: ";
    std::cin >> s3;
    
    std::cout << std::endl;
    
    bool s1_palindrome = is_palindrome(s1);
    bool s2_palindrome = is_palindrome(s2);
    bool s3_palindrome = is_palindrome(s3);
    
    std::cout << std::boolalpha;
    
    std::cout << s1 << " is a palindrome: " << s1_palindrome << std::endl;
    std::cout << s2 << " is a palindrome: " << s2_palindrome << std::endl;
    std::cout << s3 << " is a palindrome: " << s3_palindrome << std::endl;
    
}
