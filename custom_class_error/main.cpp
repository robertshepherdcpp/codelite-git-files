 #include <iostream>
 
class Error : public std::invalid_argument {
private:
     std::string message;
     int value = 11;
public:
     Error(std::string message = "") : std::invalid_argument(message) {};
     void check_value();
     
 };

 void Error::check_value() {
     if (value <= 10) {
         std::cout << "Good, your number is below 11" << std::endl;
     } else {
         throw Error("error: Number is above 10.");
     }
 }
 
 int main () {
     
     Error error2;
     
     
     try {
         error2.check_value();
     }
     catch(const Error& e) {
         std::cout << e.what() << std::endl;
     }
     
 }