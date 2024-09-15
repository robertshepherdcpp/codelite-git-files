#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>

char matrix[3][3] {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
std::vector<int> spaces_taken {};
int counter = 2;
int pos1 {0};
int pos2 {0};
char x_or_o {};

void print_board() {
   std::cout << "         |         |        " << std::endl;
   std::cout << "    " << matrix[0][0] << "    |    " << matrix[0][1] << "    |    " << matrix[0][2] << "    " << std::endl;
   std::cout << "_________|_________|_______ " << std::endl;
   std::cout << "         |         |        " << std::endl;
   std::cout << "    " << matrix[1][0] << "    |    " << matrix[1][1] << "    |    " << matrix[1][2] << "    " << std::endl;
   std::cout << "_________|_________|________" << std::endl;
   std::cout << "         |         |        " << std::endl;
   std::cout << "    " << matrix[2][0] << "    |    " << matrix[2][1] << "    |    " << matrix[2][2] << "    " << std::endl;
   std::cout << "         |         |        " << std::endl;
}


void function() {
  std::cout << "\nEnter a positon: ";
  std::cin >> pos1;
  std::cin >> pos2;
  
  if(counter % 2 == 0) {
      x_or_o = 'O';
  } else {
      x_or_o = 'X';
  }
  
  system("cls");
  
  std::string pos1_string2 = std::to_string(pos1);
  std::string pos2_string2 = std::to_string(pos2);
  
  std::string pos1_pos22 = pos1_string2 + pos2_string2;
  
  int i2 = std::stoi(pos1_pos22);
  
  auto b = find(spaces_taken.begin(), spaces_taken.end(), i2);
  
  if(b == spaces_taken.end()) {
  
  std::string pos1_string = std::to_string(pos1);
  std::string pos2_string = std::to_string(pos2);
  
  std::string pos1_pos2 = pos1_string + pos2_string;
  
  int i = std::stoi(pos1_pos2);
  
  matrix[pos1][pos2] = x_or_o;
  counter++;
  spaces_taken.push_back(i);
  print_board();
  } else {
      std::cout << "That space is already taken!.";
  }
}

void function2() {
while(true) {
    srand(time(nullptr));
    
    int random1 = rand() % 3 + 1;
    int random2 = rand() % 3 + 1;
    
    if(counter % 2 == 0) {
      x_or_o = 'O';
  } else {
      x_or_o = 'X';
  }
  
  std::string pos1_string2 = std::to_string(random1);
  std::string pos2_string2 = std::to_string(random2);
  
  std::string pos1_pos22 = pos1_string2 + pos2_string2;
  
  int i2 = std::stoi(pos1_pos22);
  
  if(find(spaces_taken.begin(), spaces_taken.end(), i2) == spaces_taken.end()) {
      matrix[random1][random2] = x_or_o;
  } else {
      continue;
  }
  system("cls");
  print_board();
  break;
}
counter++;
}

bool x_has_won() {
    if(matrix[3][1] == 'X' && matrix[3][2] == 'X' && matrix[3][3] == 'X') {
        return true;
    } else if(matrix[2][1] == 'X' && matrix[2][2] == 'X' && matrix[2][3] == 'X') {
        return true;
    } else if(matrix[1][1] == 'X' && matrix[1][2] == 'X' && matrix[1][3] == 'X') {
        return true;
    } else if(matrix[3][1] == 'X' && matrix[2][2] == 'X' && matrix[1][3] == 'X') {
        return true;
    }  else if(matrix[3][3] == 'X' && matrix[2][2] == 'X' && matrix[1][1] == 'X') {
        return true;
    }  else if(matrix[3][1] == 'X' && matrix[2][1] == 'X' && matrix[1][1] == 'X') {
        return true;
    } else if(matrix[3][2] == 'X' && matrix[2][2] == 'X' && matrix[1][2] == 'X') {
        return true;
    } else if(matrix[3][3] == 'X' && matrix[2][3] == 'X' && matrix[1][3] == 'X') {
        return true;
    } else {
        return false;
    }
}

bool o_has_won() {
    if(matrix[3][1] == 'O' && matrix[3][2] == 'O' && matrix[3][3] == 'O') {
        return true;
    } else if(matrix[2][1] == 'O' && matrix[2][2] == 'O' && matrix[2][3] == 'O') {
        return true;
    } else if(matrix[1][1] == 'O' && matrix[1][2] == 'O' && matrix[1][3] == 'O') {
        return true;
    } else if(matrix[3][1] == 'O' && matrix[2][2] == 'O' && matrix[1][3] == 'O') {
        return true;
    }  else if(matrix[3][3] == 'O' && matrix[2][2] == 'O' && matrix[1][1] == 'O') {
        return true;
    }  else if(matrix[3][1] == 'O' && matrix[2][1] == 'O' && matrix[1][1] == 'O') {
        return true;
    } else if(matrix[3][2] == 'O' && matrix[2][2] == 'O' && matrix[1][2] == 'O') {
        return true;
    } else if(matrix[3][3] == 'O' && matrix[2][3] == 'O' && matrix[1][3] == 'O') {
        return true;
    } else {
        return false;
    }
}

int main() {
  
  std::cout << "Player 1 is \'O\'." << std::endl;
  std::cout << "Player 2 is \'X\'." << std::endl;
  
  while(x_has_won() == false && o_has_won() == false) {
  print_board();
  function();
  function2();
  function();
  function2();
  function();
  if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function2();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function2();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function2();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function2();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function2();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function2();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  function2();
    if(x_has_won() == true || o_has_won() == true) {
      if(x_has_won() == true) {
          std::cout << "Well done X you won!" << std::endl;
      }
      if(o_has_won() == true) {
          std::cout << "Well done O you won!" << std::endl;
      }
      return 0;
  }
  }
  
  return 0;
  
}