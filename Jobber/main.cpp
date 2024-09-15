#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Person {
private:
    std::string name;
    int age;
    std::string recent_job;
    std::string qualifications;
public:
    std::string get_name() {return name;} 
    int get_age() {return age;}
    std::string get_recent_job() {return recent_job;}
    std::string get_qualifications() {return qualifications;}
    
    void set_name(std::string _name) {name = _name;}
    void set_age(int _age) {age = _age;}
    void set_recent_job(std::string _recent_job) {recent_job = _recent_job;}
    void set_qualifications(std::string _qualifications) {qualifications = _qualifications;}
    
    Person() = delete;
    Person(Person &&to_move) = delete;
    Person(Person &to_copy) = delete;
    void operator=(Person &&to_move) = delete;
    void operator=(Person &to_copy) = delete;
    
};

void get_options() {
    std::cout << "Are you an Employer or looking for a job?";
}

int main() {
    get_options();
}
