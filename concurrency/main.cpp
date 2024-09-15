#include <thread>
#include <mutex>
#include <chrono>
#include <vector>

std::vector<std::string> important_data {};
std::mutex m;

void do_something(std::string data) {
    std::lock_guard<std::mutex> lock(m);
    important_data.push_back(data); 
    std::this_thread::sleep_for(std::chrono::minutes(1));
}

int main() {
    try {
    std::thread t1 (do_something, "Hello");
    std::thread t2 (do_something, "Bye");
    }
    catch(auto e) {
        std::cout << e.what() << std::endl;
    }
    
}