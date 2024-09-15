//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main () {
//    int hi;
//    std::cin >> hi;
//std::ofstream output_file;
//output_file.open("name.txt");
//output_file << "Grace\n";
//output_file << "Ada\n";
//output_file << "Adam\n";
//output_file << hi;
//output_file.close();
//
//std::ifstream input_file;
//input_file.open("name.txt");
//if (input_file) {
//    std::string line;
//    while (getline(input_file, line))
//    std::cout << line << std::endl;
//    input_file.close();
//}
//
//}

    #include<iostream>
    #include<string>
    #include<fstream>
    using namespace std;

    int main() {
       string firstname;
       ofstream name;
       name. open("name");
       cout<<"Name? "<<endl;
       cin>>firstname;
       name<<firstname;
       name. close();
    }
 



