// have orange above white face

#include <iostream>
#include <vector>

std::vector<char> white_results;
std::vector<char> yellow_results;
std::vector<char> green_results;
std::vector<char> blue_results;
std::vector<char> red_results;
std::vector<char> orange_results;


class rubix_cube {
private:

public:
char white_side[3][3];
char yellow_side[3][3];
char green_side[3][3];
char blue_side[3][3];
char red_side[3][3];
char orange_side[3][3];

void print_positions(rubix_cube &rubix) {
    
        for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cout << rubix.white_side[i][j];
        std::cout << ' ' << std::endl;
    }
}
    
        for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cout << rubix.yellow_side[i][j];
        std::cout << ' ' << std::endl;
    }
}

    for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cout << rubix.green_side[i][j];
        std::cout << ' ' << std::endl;
    }
}

    for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cout << rubix.blue_side[i][j];
        std::cout << ' ' << std::endl;
    }
}

    for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cout << rubix.orange_side[i][j];
        std::cout << ' ' << std::endl;
    }
}

    for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cout << rubix.red_side[i][j];
        std::cout << ' ' << std::endl;
    }
}

}
};

void get_input(rubix_cube& rubix) {
    
    std::cout << "Enter the white side starting from the top left going clock wise." << std::endl;
    
    for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cin >> rubix.white_side[i][j];
    }
}

    std::cout << "Enter the yellow side starting from the top left going clock wise." << std::endl;
    
    for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cin >> rubix.yellow_side[i][j];
    }
}

    std::cout << "Enter the green side starting from the top left going clock wise." << std::endl;
    
    for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cin >> rubix.green_side[i][j];
    }
}

    std::cout << "Enter the blue side starting from the top left going clock wise." << std::endl;
    
    for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cin >> rubix.blue_side[i][j];
    }
}

    std::cout << "Enter the orange side starting from the top left going clock wise." << std::endl;
    
    for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cin >> rubix.orange_side[i][j];
    }
}

    std::cout << "Enter the red side starting from the top left going clock wise." << std::endl;
    
    for(int i = 1; i < 3; i++) {
        for(int j = 1; j < 3; j++) {
        std::cin >> rubix.red_side[i][j];
    }
}

}

void l(rubix_cube& rubix) {
    
    rubix.white_side[1][1] = rubix.green_side[1][1];
    rubix.white_side[1][2] = rubix.green_side[1][2];
    rubix.white_side[1][3] = rubix.green_side[1][3];

}

void r(rubix_cube& rubix) {
    
    rubix.white_side[3][1] = rubix.green_side[3][1];
    rubix.white_side[3][2] = rubix.green_side[3][2];
    rubix.white_side[3][3] = rubix.green_side[3][3];

}

void lp(rubix_cube& rubix) {
    
    rubix.white_side[1][3] = rubix.green_side[1][3];
    rubix.white_side[1][2] = rubix.green_side[1][2];
    rubix.white_side[1][1] = rubix.green_side[1][1];

}

void rp(rubix_cube& rubix) {
    
    rubix.white_side[3][3] = rubix.green_side[3][3];
    rubix.white_side[3][2] = rubix.green_side[3][2];
    rubix.white_side[3][1] = rubix.green_side[3][1];

}

void t(rubix_cube& rubix) {
    
    rubix.white_side[1][3] = rubix.orange_side[1][3];
    rubix.white_side[2][3] = rubix.orange_side[2][3];
    rubix.white_side[3][3] = rubix.orange_side[3][3];
    
    rubix.orange_side[1][3] = rubix.yellow_side[1][3];
    rubix.orange_side[2][3] = rubix.yellow_side[2][3];
    rubix.orange_side[3][3] = rubix.yellow_side[3][3];
    
    rubix.yellow_side[1][3] = rubix.red_side[1][3];
    rubix.yellow_side[2][3] = rubix.red_side[2][3];
    rubix.yellow_side[3][3] = rubix.red_side[3][3];
    
    rubix.red_side[1][3] = rubix.white_side[1][3];
    rubix.red_side[2][3] = rubix.white_side[2][3];
    rubix.red_side[3][3] = rubix.white_side[3][3];
    
    rubix.green_side[1][1] = rubix.green_side[3][1];
    rubix.green_side[2][1] = rubix.green_side[3][2];
    rubix.green_side[3][1] = rubix.green_side[3][3];
    
    rubix.green_side[3][1] = rubix.green_side[3][3];
    rubix.green_side[3][2] = rubix.green_side[2][3];
    rubix.green_side[3][3] = rubix.green_side[1][3];
    
    rubix.green_side[3][3] = rubix.green_side[1][3];
    rubix.green_side[2][3] = rubix.green_side[1][2];
    rubix.green_side[1][3] = rubix.green_side[1][1];
    
    rubix.green_side[1][3] = rubix.green_side[1][1];
    rubix.green_side[1][2] = rubix.green_side[2][1];
    rubix.green_side[1][1] = rubix.green_side[3][1];

}

void tp(rubix_cube& rubix) {
    
    rubix.white_side[3][3] = rubix.orange_side[3][3];
    rubix.white_side[2][3] = rubix.orange_side[2][3];
    rubix.white_side[1][3] = rubix.orange_side[1][3];
    
    rubix.orange_side[3][3] = rubix.yellow_side[3][3];
    rubix.orange_side[2][3] = rubix.yellow_side[2][3];
    rubix.orange_side[1][3] = rubix.yellow_side[1][3];
    
    rubix.yellow_side[3][3] = rubix.red_side[3][3];
    rubix.yellow_side[2][3] = rubix.red_side[2][3];
    rubix.yellow_side[1][3] = rubix.red_side[1][3];
    
    rubix.red_side[3][3] = rubix.white_side[3][3];
    rubix.red_side[2][3] = rubix.white_side[2][3];
    rubix.red_side[1][3] = rubix.white_side[1][3];

}

void b(rubix_cube& rubix) {
    
    rubix.white_side[1][1] = rubix.orange_side[1][1];
    rubix.white_side[2][1] = rubix.orange_side[2][1];
    rubix.white_side[3][1] = rubix.orange_side[3][1];
    
    rubix.orange_side[1][1] = rubix.yellow_side[1][1];
    rubix.orange_side[2][1] = rubix.yellow_side[2][1];
    rubix.orange_side[3][1] = rubix.yellow_side[3][1];
    
    rubix.yellow_side[1][1] = rubix.red_side[1][1];
    rubix.yellow_side[2][1] = rubix.red_side[2][1];
    rubix.yellow_side[3][1] = rubix.red_side[3][1];
    
    rubix.red_side[1][1] = rubix.green_side[1][1];
    rubix.red_side[2][1] = rubix.green_side[2][1];
    rubix.red_side[3][1] = rubix.green_side[3][1];

}

void bp(rubix_cube& rubix) {
    
    rubix.white_side[3][1] = rubix.red_side[3][1];
    rubix.white_side[2][1] = rubix.red_side[2][1];
    rubix.white_side[1][1] = rubix.red_side[1][1];

}

void solve_white_cross(rubix_cube& rubix) {
    
}

// w y r o b g w w y r o b g y w y r o b g g w y r o b g b w y r o b g o w y r o b g r 

// w w w w w w w w w y y y y y y y y y g g g g g g g g g b b b b b b b b b o o o o o o r r r r r r r r r

int main() {
    
    rubix_cube rubix;
    
    get_input(rubix);
    
    t(rubix);
    
    rubix.print_positions(rubix);
    
}