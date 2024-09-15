#include <iostream>
#include <string>
#include <vector>
#include <ctime>

std::vector<std::string> objs {"treasure chest", "table", "light", "carpet"};
srand(time(nullptr));
int random = rand() % objs.size();
room_obj room_object;
std::vector<char> compass_points {'N', 'E', 'S', 'W'};

class room_obj {
private:
    std::string name = objs[random];
    std::string curr_obj = objs.begin();
public:
    virtual void get_description();
    void curr_obj_set(std::string to_set) {curr_obj = to_set;};
};

void room_obj::get_description() {
    std::cout << curr_obj << " is located right infront of you" << std::endl;
}

class table : public room_obj {
private: 
    std::string name = "Table";
public:
    void get_description(); 
};

void table::get_description() {
    std::cout << name << " is located right infront of you" << std::endl;
}

class Direction {
private:
  char direction = 'N';
  std::string movement = "None";
  
public:
  char get_direction() {return direction;};
  void set_direction(char direction_param) {direction = direction_param;};
  
  std::string get_movement() {return movement;};
  void set_movement(std::string movement_param) {movement = movement_param;};
  
  int index = std::find(compass_points.begin(), compass_points.end(), direction);
  std::string obj = objs[index];
  room_object.curr_obj_set(obj);
};

int main() {
     
    Direction direction;
    std::string movement {};
    std::string mysterious_obj = "treasure chest";
    
    std::cout << "You are in a house try and find the mysterious object!" << std::endl;
    
    std::cout << "Enter some movement: ";
    std::cin >> movement;
    
    if (movement == "N") {
    direction.set_direction('N');
    }
    else if (movement == "E") {
        direction.set_direction('E');
    }
    else if (movement == "S") {
    direction.set_direction('S');
    }
    else if (movement == "W") {
    direction.set_direction('W');
    }
    else if (movement == "move forward") {
        direction.set_movement("forward");
    } else if(movement == "move backward") {
        direction.set_movement("backward");
    }

    
    return 0;
}