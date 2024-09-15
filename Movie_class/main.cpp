#include <iostream>
#include <string>

class Movie {
private:
    std::string title {};
    int year_made {};
public:
    void set_year_made(int year);
    void set_title(std::string);
    
    std::string get_title();
    int get_year_made();
    
    Movie();
    ~Movie();
    
};

void Movie::set_year_made(int year) {
    year_made = year;
}

void Movie::set_title(std::string title2) {
    title = title2; 
}

std::string Movie::get_title() {
    return title;
}

int Movie::get_year_made() {
    return year_made;
}

Movie::Movie() {
    title =  "None";
    year_made = 1888;
}

Movie::~Movie() {
 
}

int main () {
    
    std::string movie_name {};
    int year2 {};
    
    Movie Movie1;
    
    std::cout << "Enter a Movie: ";
    std::getline(std::cin, movie_name);
    
    Movie1.set_title(movie_name);
    Movie1.get_title();
    
    std::cout << "Enter the year that " << Movie1.get_title() << " was made: ";
    std::cin >> year2;
    
    Movie1.set_title(movie_name);
    Movie1.get_title();
    
    
    
    try { 
        
    Movie1.set_year_made(year2);
    
    if (Movie1.get_year_made() < 1888) {
        throw std::invalid_argument("error: The first movie was made in 1888");
    }
    
    } catch (std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
        
    }
    
