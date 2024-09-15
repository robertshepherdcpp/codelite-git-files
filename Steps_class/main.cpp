#include <iostream>

class Steps {
private:
	int* steps = nullptr;
	int size = 10;
	
public:
	
	Steps() {
		steps = new int[size];
	}
	
	~Steps() {
		delete[] steps;
	}
	Steps(const Steps& to_copy) {
		std::cout << "Copy constructor called.\n" << std::endl;
		steps = new int[size];
		for (int i = 0; i < size; i++) {
			steps[i] = to_copy.steps[i];
		}
	}
	Steps(Steps&& to_move) {
		std::cout << "Move constructor called.\n" << std::endl;
		steps = to_move.steps;
		to_move.steps = nullptr;
		
	}
	
	Steps& operator= (Steps&& to_move) {
		std::cout << "Move assignment called.\n" << std::endl;
		delete[] steps;
		steps = to_move.steps;
		to_move.steps = nullptr;
		return *this;
	}
	
	Steps& operator= (Steps& to_copy) {
		std::cout << "Copy assignment called.\n" << std::endl;
		auto temp = new int[size];
		for (int i = 0; i < size; i++) {
			temp[i] = to_copy.steps[i];
		}
		delete steps;
		steps = temp;
        return *this;
	}
	
	void set_steps(int num) {
		for (int i = 0; i < size; i++) {
		  steps[i] = num;  
		}
	}
	
	auto get_steps() {
		return *steps;
	}
	
};

int main() {
	
	Steps y;
	Steps j;
	j.set_steps(5);
	y = j;
	std::cout << j.get_steps() << std::endl;
	std::cout << y.get_steps() << std::endl;
	
}