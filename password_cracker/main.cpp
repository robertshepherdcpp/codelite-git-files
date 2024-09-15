#include <iostream>

int main () {
    std::string alphabet {" abcdefghijklmnopqrstuvwxyz"};
    std::string password {"hippoxq"};
    
    for (int a = 0; a < alphabet.size(); a++) {
            for (int b = 0; b < alphabet.size(); b++) {
                for (int c = 0; c < alphabet.size(); c++) {
                    for (int d = 0; c < alphabet.size(); d++) {
                        for (int e = 0; d < alphabet.size(); e++) {
                            for (int f = 0; e < alphabet.size(); f++) {
                                for (int g = 0; e < alphabet.size(); f++) {
        std::cout << alphabet[a] << alphabet[b] << alphabet[c] << alphabet[d] << alphabet[e] << alphabet[f] << alphabet[g];
                                         }   
                               }   
                      }   
              }   
          }
        
       }

    }

}