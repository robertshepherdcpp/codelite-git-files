#include <iostream> 
#include <iomanip>

int main () {
    std::string password;
    std::string first_name;
    std::string pass_len;
    bool length_p;
    std::string pass_punc;
    std::string punc_password;
    int index;
    bool password_num;
    std::string pass_num;
    
    while (true) {
        // get name and password
        std::cout << "Enter your first name: ";
        std::cin >> first_name;
        
        std::cout << "Enter a password: ";
        std::cin >> password;
        
        // checks password length
        if (password.length() >= 8) {
            pass_len = "good";
            length_p = true;
            
    } else {
            pass_len = "bad";
            length_p = false;
    }
    // checks for punctuation
    for (char c : password) {
        if (ispunct(c)) {
            pass_punc = "good";
            punc_password = true;
        } else {
            pass_punc = "bad";
            punc_password = false;
        }
    } 
    // checks for numbers
    index = password.find_first_of("1234567890");
    if (index == -1) {
        pass_num = "bad";
        password_num = false;
    } else {
        pass_num = "good";
        password_num = true;
    }
    break;
    
}
    std::cout << "\n\n" << first_name << " here are your resluts: \n"<< std::endl;
    std::cout << "Punctuation: " << pass_punc << std::endl;
    std::cout << "Numbers: " << pass_num << std::endl;
    std::cout << "Password Length: " << pass_len << std::endl;
    
    std::cout << std::right << std::setw(10) << "\n" << std::endl;
    std::cout << "";
}
