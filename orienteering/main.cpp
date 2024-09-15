#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <unistd.h>  // for the sleep function

struct orienteering_date {
public:
    int dibber_num2;
    int seconds_taken2;
    int seconds_count2;
};

    std::string filename {"orienteering.txt"};
    int dibber_num {};
    int seconds_taken {};
    int dibber_count {};
    int seconds_count {};
    std::string command {};
    std::vector<orienteering_date> objs {};

void print_title() {
    std::cout << "Welcome to orienteering!" << std::endl;
}

void print_reciept() {
    std::ifstream input_stream(filename);
    // if (input_stream) {
        orienteering_date obj;
        input_stream >> obj.dibber_num2 >> obj.seconds_taken2 >> obj.seconds_count2;
        objs.push_back(obj);
    // }
    
    std::cout << "Dibber Number" << '\t' << "Seconds_taken" << '\t' << "Seconds_count\n";
    
    // orienteering_date obj2 : objs  // you could use a range based for loop instead of the normal for loop
    
    for (int i = 0; i < dibber_count; i++) {
        orienteering_date obj2 = objs[i];
        std::cout << obj2.dibber_num2 << '\t' << obj2.seconds_taken2 << '\t' << obj2.seconds_count2;
    }
}

void add_seconds_to_count(int seconds) {
    seconds_count += seconds;
}

void get_start() {
    std::cout << "Starting in 5...\n";
    sleep(1);
    std::cout << "4...\n";
    sleep(1);
    std::cout << "3...\n";
    sleep(1);
    std::cout << "2...\n";
    sleep(1);
    std::cout << "1...\n";
    sleep(1);
    std::cout << "Go! Go! Go!" << std::endl;
    
}

void get_dibber() {
    std::cout << "If you have found a dibber enter: (the number of dibber), (seconds): ";
    std::cin >> dibber_num;
    std::cin >> seconds_taken;
    
    add_seconds_to_count(seconds_taken);
    
    std::ofstream output_stream(filename);
    output_stream << dibber_num << '\t' << seconds_taken << '\t' << seconds_count << '\n';
    
    output_stream.close();
    
    dibber_count++;
}

int main () {

    print_title();
    
    get_start();
    
    while (command != "finish" || command != "Finish") {
    
    std::cout << "Enter command: ";
    std::cin >> command;    
    
    if (command == "a") {
    get_dibber();
    continue;
    } 
    else if (command == "finish") {
        break;
    } 
    else {
        std::cout << "Invalid_command. Please try again." << std::endl;
        continue;
    }
    
    }
    
    print_reciept();
    
    return 0;
}