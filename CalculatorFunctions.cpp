#include <iostream> 
#include <string>
#include <sstream>
#include <vector>
#include <limits>
#include "CalculatorFunctions.h"

using namespace std;

double Addition(){
    cout << "\nEnter the numbers you wish to add!\n"
            "> "; // prompt users for numbers they wish to add

    double sum = 0;

    string userInput = ""; // variable for sotring user input
    getline(cin,userInput ); // get the full line from the user

    if (userInput.empty()) { // check too see if input is empty
    cout << "No numbers entered." << endl;
    return numeric_limits<int>::quiet_NaN();
    }

    stringstream ss(userInput); // string stream object from user input
    double num; // variable to store each number
    while(ss >> num){ // loop to read and add numbers
        sum += num;
    }

    cout << "The result is: " << sum << endl; // print result
    return sum;
}

double Subtraction(){

    vector<double> numbers; // vector to store numbers from input

    cout << "\nEnter the numbers you wish to subtract!"
            "Q to exit\n" // prompt user for input and instructions to exit
            "> ";

    double number;
    while (cin >> number){ // loop to check if input if number, if not then move on
        numbers.push_back(number);
    }

    if (numbers.empty()) { // checks to see if any input has been given
    cout << "No numbers entered." << endl;
    return numeric_limits<double>::quiet_NaN();
    }

    double result = numbers[0]; // loop to subtract number from previous
    for (double i = 1; i < numbers.size(); i++) {
    result -= numbers[i];
    }

    cout << "The result is: " << result << endl;// returns result
    return 0;
}

double Multiplication(){

    vector<double> numbers;// vector to store numbers from input

    cout << "\nEnter the numbers you wish to Multiply!\n"
            "Q to exit\n"// prompt user for input and instructions to exit
            "> ";

    double number;
    while (cin >> number){// loop to check if input is a number, if not then move on
        numbers.push_back(number);
    }

    if (numbers.empty()) {// checks to see if any input has been given
    cout << "No numbers entered." << endl;
    return numeric_limits<double>::quiet_NaN();
    }

    double result = 1.0; //sets initial number to one to avoid multiply by 0
    for (double number: numbers) {// loop tp mulitpy number by previous
        result *= number;
    }

    cout << "The result is: " << result << endl; // returns result
    return 0;
}

double Division(){
    
    vector<double> numbers;// vector to store numbers from input

    cout << "\nEnter the numbers you wish to Divide!\n"
            "Q to exit\n"// prompt user for input and instructions to exit
            "> ";

    double number;
    while (cin >> number){// loop to check if input is a number, if not then move on
        numbers.push_back(number);
    }

    if (numbers.empty()) {// checks to see if any input has been given
    cout << "No numbers entered." << endl;
    return numeric_limits<double>::quiet_NaN();
    }

    double result = numbers[0];
    for (int i = 1; i < numbers.size(); i++){ // loop to add numbers to variable
        if (numbers[i] == 0){ // checks for division by 0
            cout << "Cannot divide by zero!" << endl;
            return numeric_limits<double>::quiet_NaN();
        }
        result /= numbers[i]; // divides the number by the previous
    }

    cout << "The result is: " << result << endl; // returns result
    return 0;
}
