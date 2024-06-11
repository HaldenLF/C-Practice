// This is a work in progress calculator that will grow over time to perform most opperations that a standard calculator  can do. 
#include <iostream> 
#include <string>
#include "CalculatorFunctions.h"

using namespace std;

string userInput;

string main_menu(){
    
    string main_menu;
    main_menu = "What type of calculation would you like to perform?\n"
            "(1) Addition\n"
            "(2) Subtraction\n"
            "(3) Multiplication\n"
            "(4) Division\n"
            "(5) Sqaure Root\n";

    cout << "> ";
    getline(cin, userInput);   //get the input from the user.

    for (int i = 0; userInput[i] != '\0'; ++i) { // converts string to lowercase
        userInput[i] = tolower(userInput[i]);
    }

    return main_menu;
}

int main(){

    std::cout << main_menu(); //prints the menu message

    if (userInput == "addition" || userInput == "1" || userInput == "add"
        || userInput == "+") {
        Addition(); // perform addition
        cout << main_menu();
    } 
    else if (userInput == "subtraction" || userInput == "2" || userInput == "sub"
        || userInput == "-" || userInput == "minus") {
        Subtraction(); // perform subtraction
        main_menu(); 
    } 
    else if (userInput == "multiplication" || userInput == "3" || userInput == "times"
        || userInput == "mutliply" || userInput == "x" || userInput == "*") {
        Multiplication(); // perform multiplication
        main_menu(); 
    } 
    else if (userInput == "division" ||userInput == "4" || userInput == "divide"
        || userInput == "/") {
        Division(); // perform division
        main_menu(); 
    } 
    else if (userInput == "square root" ||userInput == "5" || userInput == "sqrt"
        || userInput == "^2") {
        Division(); // perform division
        main_menu(); 
    } 
    else {
        main_menu(); // Display menu for invalid input
    }
}
