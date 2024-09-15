#include <iostream>
#include <vector>
#include <string>`
#include <cctype>
#include <algorithm>
#include <ctime>

std::string command {};

int main () {

    std::string joke {};
    int index1 {};
    char y_or_n {};
    char y_or_n2 {};
    std::vector<std::string> options {"tell me a joke", "set an alarm for ", "ask me a question", "clear the screen", "open the shopping list", "what are the options", "say", "tell me something nice"};
    std::string joke_answer2 {};
    std::vector<std::string> shopping_list {};
    std::string joke_answer {};
    std::vector<std::string> jokes {"What is the name of a snakes medicin?: "};
    std::vector<std::string> jokes_answers {"Anti-hissstomine"};
    std::string answer_joke {};
    std::cout << "Enter: what are the options ,to see the options. " << std::endl;
    std::cout << "Welcome, I am your freindly assistant\n" << std::endl;
        
    while (true) {
        
    int elapsed_seconds = time(nullptr);
    srand(elapsed_seconds);
    int random;
    std::cout << "Enter something for me to do: ";
    std::getline(std::cin, command);
        
    std::string time1;
        
    size_t begin_of_command = 0;        
    size_t end_of_command = command.size() -1;
        
        
    if (isdigit(command[command.size() - 5])) {
        time1 = command.substr(command.size() - 5, 5);
        std::cout << "An alarm was set for " << time1 << '\n' << std::endl;
    } else if (command == "tell me a joke") {
        
            random = rand() % jokes.size();
            std::cout << jokes[random];
            std::getline(std::cin, answer_joke);
            if (answer_joke == jokes_answers[random]) {
            std::cout << "Wow. You got it right!\n";
            } else {
                std::cout << "Unlucky, the answer was " << jokes_answers[random] << std::endl;
            }
           std::cout << "Would you like to enter a joke?:";

           std::cin >> y_or_n;
           if (y_or_n == 'y') {
               std::cout << "Is there an answer to your joke?: ";
               std::cin >> y_or_n2;
               std::cout << "Enter a joke: ";
               std::getline(std::cin, joke);
               jokes.push_back(joke);
               if (y_or_n2 == 'y') {
                   std::cout << "Enter your answer: ";
                   std::cin >> joke_answer2;
                   jokes.push_back(joke_answer2);
                   std::cout << "\nWhat a great joke!\n";
               } else if (y_or_n2 == 'n')
               jokes_answers.push_back("");
           }
               
    } else if (command == "open the shopping list") {
        char y_or_n3;
        std::string item;
        std::cout << "Enter something to be added to your shopping list: ";
        std::getline(std::cin, item);
        shopping_list.push_back(item);
        std::cout << item << " was added to your shopping list!" << std::endl;
        std::cout << "Would you like to see your shopping list?: " << std::endl;
        std::cin >> y_or_n3;
        if (y_or_n3 == 'y') {
            for (std::string i : shopping_list) {
                std::cout << i << std::endl;
        } 
        } else if (y_or_n3 == 'n') {
                std::cout << "Ok." << std::endl;
                break;
            } else {
                std::cout << "Invalid command." << std::endl;
            }
        
    } else if (command == "clear the screen") {
        system("cls");
    } else if (command[0] == 's' && command[1] == 'a' && command[2] == 'y') {
        std::string what_to_say = command.substr(4, end_of_command);
        std::cout << what_to_say << std::endl;
    } else if (command == "what are the options") {
        std::cout << "The options are: " << std::endl;
        for (std::string option : options) {
            std::cout << "- " << option << std::endl;
        }
    } else if (command == "hey bot") {
        std::cout << "I am listening: " << std::endl;
    } else if (command == "tell me something nice") { 
        
        char y_or_n4 {};
        std::string nice_thing2 {};
        std::vector<std::string> nice_things_to_say {"you are good at c++"};
        
        int random3 = rand() % nice_things_to_say.size();
        
        std::string nice_thing = nice_things_to_say[random3];
        
        std::cout << nice_thing << std::endl;
        
        std::cout << "Would you like to add anything to the nice_things_to_say variable?: ";
        std::cin >> y_or_n4;
        
        if (y_or_n4 == 'y') {
            std::cout << "Enter a nice thing to say: " << std::endl;
            std::cin >> nice_thing2;
            nice_things_to_say.push_back(nice_thing2);
        }
        else if (y_or_n4 == 'n') {
            std::cout << "Ok." << std::endl;
        }
        
        std::cout << "Good job" << std::endl;
        

    } else if (command.find("what is the capital city of") != -1) {
        std::string statement_capital = command.substr(0, 27);
        std::string country = command.substr(28, command.size());
        
        std::cout << country << std::endl;
        
    }
    
    else if (command == "ask me a question") {
        std::string favourite_sport;
        std::cout << "Whats your favourite sport: ";
        std::cin >> favourite_sport;
        std::cout << favourite_sport << " is a good sport!" << std::endl;
    }
    
    else {
        std::cout << "Sorry, I dont get that one." << std::endl;
    }
  
    }
    
    return 0;
    
}