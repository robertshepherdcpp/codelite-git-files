#include <iostream>
#include <string>

class Movie {
    
private:
    std::string title;
    int date_released;
public:
    std::string get_title();
    int get_date ();
    
    void set_title(std::string title2);
    void set_date(int date);
    
  

};

std::string Movie::get_title() {
    return title;
}

int Movie::get_date() {
    return date_released;
}

void Movie::set_date(int date) {
    date_released = date;
}

void Movie::set_title(std::string title2) {
    title = title2;
}



int main () {
    std::cout << "One." << std::endl;
    Movie one;
    one.set_date(1899);
    std::cout << "The Date of one is: ";
    std::cout << one.get_date() << std::endl;
    one.set_title("Black Panthter");
    std::cout << "The Title of one is: ";
    std::cout << one.get_title() << std::endl;
    
}