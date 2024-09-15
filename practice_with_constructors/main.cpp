#include <iostream>
#include <string>
#include <vector>

class Movie {
    
private:
    int year {};
    std::string title {};
public:
    int get_year();
    std::string get_title();
    
    void set_year(int date2);
    void set_title(std::string title);
    
    Movie(int date2 = 0, std::string title2 = "None");
    
};

 Movie::Movie(int date2, std::string title2) {
    year = date2;
    
    title = title2;
}

int Movie::get_year() {
    return year;
}

std::string Movie::get_title() {
    return title;
}

void Movie::set_year(int date2) {
    year = date2;
}

void Movie::set_title(std::string title2) {
    title = title2;
}

int main () {
    
    std::vector<Movie> Movies {};
    
    Movie m1(2018, "Bee");
    Movies.push_back(m1);
    
    Movie m2(1972, "House");
    Movies.push_back(m2);
    
    Movie m3(1939, "Cat");
    Movies.push_back(m3);
    
    Movie m4(2001, "Tree");
    Movies.push_back(m4);
    
    std::cout << "Title" << '\t' << "Year\n" << std::endl;
    
    for (Movie movie: Movies) {
        std::cout << movie.get_title() << '\t' << movie.get_year() << std::endl;
    }
    
    return 0;
    
}
