#include <iostream>
#include <string>

class Product {

protected:
    std::string name;
private:
    int price;
    double discount_percent;
public:

    Product();
    ~Product();
   
    std::string get_name() {return name;}
    int get_price() {return price;}
    double get_discount_percent() {return discount_percent;}
    
    void set_name(std::string name_param);
    void set_price(int price_param);
    void set_discount_percent(int discount_percent_param);
    
    virtual std::string get_description() = 0;
};

Product::Product() {
    name = "";
    price = 0;
    discount_percent = 0.0;
}

Product::~Product() {
    
}

void Product::set_name(std::string name_param) {
    name = name_param;
}

void Product::set_price(int price_param) {
    price = price_param;
}

void Product::set_discount_percent(int discount_percent_param) {
    discount_percent = discount_percent_param;
}

/*std::string Product::get_description() {
    return "Product";
} */

class Movie: public Product {

private:
    int year;
    std::string main_character;
public:
    Movie();
    std::string get_main_character() {return main_character;}
    int get_year() {return year;}
    
    void set_main_character(std::string main_character_param);
    void set_year(int year_param);
    
    std::string get_description() override {return name + "(" + std::to_string(year) + ")";}
    
};

Movie::Movie() {
    year = 1888;
    main_character = "No one";
}

void Movie::set_main_character(std::string main_character_param) {
    main_character = main_character_param;
}

void Movie::set_year(int year_param) {
    year = year_param;
}

int main () {
    
    Movie harry_potter;
    
    harry_potter.set_name("Harry Potter");
    
    std::cout << harry_potter.get_description() << std::endl;
    
}