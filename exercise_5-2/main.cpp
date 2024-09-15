//#include <iostream>
//#include <iomanip>
//#include <fstream>
//
//int main () {
//    int miles_driven {};
//    int gallons {};
//    int mpg {};
//    std::cout << std::right;
//    std::cout << "Miles Per Gallon\n";
//    std::cout << std::setw(12) << "Miles" << std::setw(12) << "Gallons"
//              << std::setw(12) << "MPG" << std::endl;
//    std::cout << std::setw(12) << "225.2" << std::setw(12) << "17.0"
//              << std::setw(12) << "13.25" << std::endl;
//    std::cout << std::setw(12) << "1374.8" << std::setw(12) << "64.5"
//              << std::setw(12) << "21.31" << std::endl;
//              
//    std::cout << "Enter Miles Driven: ";
//    std::cin >> miles_driven;
//    
//    std::cout << "Enter gallons used: ";
//    std::cin >> gallons;
//    
//    gallons = miles_driven / gallons;
//
//    std::ofstream output_file;
//    output_file.open("words.txt");
//    output_file << miles_driven << std::setw(12) << gallons << std::setw(12) << mpg << std::endl;
//    output_file.close();
//    
//    std::cout << std::setw(12) << "Miles" << std::setw(12) << "Gallons"
//              << std::setw(12) << "MPG" << std::endl;
//    std::cout << std::setw(12) << "225.2" << std::setw(12) << "17.0"
//              << std::setw(12) << "13.25" << std::endl;
//    
//    std::string line;
//    std::ifstream input_file;
//    input_file.open("names.txt");
//    while (getline(input_file, line))
//        std::cout << line;
//              
//    return 0;
//}

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	// print name of program
	cout << "Miles Per Gallon\n\n";

	// define variables
	double miles;
	double gallons;
	double mpg;
	double total_miles;
	double total_gallons;
	double avg_mpg;

	// print existing file data
	ifstream infile;
	infile.open("trips.txt");
	if (infile) {
		total_miles = 0;
		total_gallons = 0;
		cout << setw(8) << "Miles" << setw(12) << "Gallons" << setw(12) << "MPG" << endl;
		while (infile >> miles >> gallons) {
			total_miles += miles;
			total_gallons += gallons;
			mpg = miles / gallons;
			mpg = round(mpg * 100) / 100;
			cout << fixed << setprecision(1);
			cout << setw(8) << miles << setw(12) << gallons;
			cout << fixed << setprecision(2);
			cout << setw(12) << mpg << endl;
		}
		infile.close();

		avg_mpg = total_miles / total_gallons;

		cout << fixed << setprecision(2) << showpoint << endl;
		cout << left << setw(15) << "Total miles:"
			<< right << setw(10) << total_miles << endl;
		cout << left << setw(15) << "Total gallons:"
			<< right << setw(10) << total_gallons << endl;
		cout << left << setw(15) << "Average MPG:"
			<< right << setw(10) << avg_mpg << endl;
		cout << endl;
	}

	char another_entry = 'y';
	while (tolower(another_entry) == 'y') {

		// get miles driven
		miles = 0;
		while (true) {
			cout << "Enter miles driven:        ";
			cin >> miles;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			if (miles <= 0) {
				cout << "Miles driven must be greater than zero. Please try again.\n";
				continue;
			}
			else {
				break;
			}
		}

		// get gallons of gas used
		gallons = 0;
		while (true) {
			cout << "Enter gallons of gas used: ";
			cin >> gallons;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			if (gallons <= 0) {
				cout << "Gallons used must be greater than zero. Please try again.\n";
				continue;
			}
			else {
				break;
			}
		}

		// calculate and display miles per gallon
		mpg = miles / gallons;
		mpg = round(mpg * 100) / 100;
		cout << "Miles per gallon:          " << mpg << endl << endl;

		// write entry to file
		ofstream outfile;
		outfile.open("trips.txt", ios::app);
		outfile << fixed << setprecision(1);
		outfile << miles << '\t' << gallons << '\n';
		outfile.close();

		// print file data
		infile.open("trips.txt");
		if (infile) {
			total_miles = 0;
			total_gallons = 0;
			cout << setw(8) << "Miles" << setw(12) << "Gallons" << setw(12) << "MPG" << endl;
			while (infile >> miles >> gallons) {
				total_miles += miles;
				total_gallons += gallons;
				mpg = miles / gallons;
				mpg = round(mpg * 100) / 100;
				cout << fixed << setprecision(1);
				cout << setw(8) << miles << setw(12) << gallons;
				cout << fixed << setprecision(2);
				cout << setw(12) << mpg << endl;
			}
			infile.close();

			avg_mpg = total_miles / total_gallons;

			cout << fixed << setprecision(2) << showpoint << endl;
			cout << left << setw(15) << "Total miles:"
				<< right << setw(10) << total_miles << endl;
			cout << left << setw(15) << "Total gallons:"
				<< right << setw(10) << total_gallons << endl;
			cout << left << setw(15) << "Average MPG:"
				<< right << setw(10) << avg_mpg << endl;
			cout << endl;
		}

		// see if the user wants to enter more data
		cout << "Get entries for another trip? (y/n): ";
		cin >> another_entry;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << endl;
}

cout << "Bye!\n\n";
}