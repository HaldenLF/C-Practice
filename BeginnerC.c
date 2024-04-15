// go to main for early stuff. the functions for the most 
// part only contain explanations of the header
// https://www.youtube.com/watch?v=KJgsSFOSQv0&t=7637s&ab_channel=freeCodeCamp.org

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

    // Functions
    // functions are group of code that completes the task within it
    // you can call the function throughout the 
    // the above function is called main
    // if you call the function after the main where the function will be
    // called then an error will occur.
void sayHi(char name[], int age){ // you can have as many parameters to the functions
                                  // they must be called in the function 
    printf("Hello %s , you are %d.\n", name, age);

}

    // Return Statments
    // return statements are used to take a value and print it to the terminal
    // like below where the variable result returns the value of its sum.
    // return statments break out of the function.
    //
double cube(double num){
    double result = num * num * num;
    return result;
    // example
    //     printf("Answer: %f", cube(7.0));
}

    // if statments
    // we can specify conditions and depending on the input 
    // the if statment will return the desired result. 
    //
int max(int num1, int num2, int num3){
    int result;
    // basic if statment
    // if (num1 > num2) {
    //     result = num1;
    // } else {
    //     result = num2;
    // }

    // more complex if statment that includes else if statments
    // logical and && means both requirements must be met
    // logical or || means either requirement can be met
    //
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

    // Calculator
    // simple calculator that asks the user which sum the wish to 
    // do. 
    // this works for add, subtract, multiply & divide
    //
double Calculator(){
    double num1;
    double num2;
    char operator;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &operator); // put the space before %c so it works, this is special for characters
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        printf("%f", num1 + num2);
    } else if (operator == '-') {
        printf("%f", num1 - num2);
    } else if (operator == '/') {
        printf("%f", num1 / num2);
    } else if ( operator == '*') {
        printf("%f", num1 * num2);
    } else {
        printf("Invalid Operator");
    }
}

    // Switch Statments 
    // switch statments are useful 
    // 
char switchStatments(){
    char grade;

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    switch(grade) {
    case 'A' :
        printf("You did great");
        break;
    case 'B' :
        printf("You did alright");
        break;
    case 'C' :
        printf("You did poorly");
        break;
    case 'D' :
        printf("You did very bad");
        break;
    case 'F' :
        printf("You Failed!");
        break;
    default :
        printf("Invalid Grade");
    }
}

    // Structs
    // structs are data structures used for storing a varitey
    // of information like a student and all of its information
    // this year. You can create multiple students for this structure
    //
struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;

    /* example. Move to main and run.
    struct Student stud1;
    stud1.age = 22;
    stud1.gpa = 3.2;
    // cannot add characters to an array like above. We must use the
    // string copy method, strcpy(), to do this task
    strcpy(stud1.name, "Jim");
    strcpy(stud1.major, "CS");

    printf("%s", stud1.name);
    printf(" %f", stud1.gpa);
    printf("\n");

    struct Student stud2;
    stud2.age = 20;
    stud2.gpa = 3.5;
    strcpy(stud2.name, "Jane");
    strcpy(stud2.major, "BUS");

    printf("%s", stud2.name);
    printf(" %f", stud2.gpa);
    printf("\n");
    */
};

    // while loop
    // while loops take a parameter and check it. while the parameter is true
    // it will complete the task below it. once it is false it ends.
    //
int WhileLoops() {

    int index = 1;

    while (index <=5) {
        printf("%d\n", index);
        index++;
    }

    // do while loops print the final increment from index++, 6, since the 
    // prinft function comes before the while statment.
    do {
        printf("%d\n", index);
        index++;
    } while (index <=5);
}

    // Guessing Game
    // more advnaced type of game that requires the user to guess a predetermined number
    // this function uses a while loop with a nested if statment to check if the number
    // is correct while counting the amount of guesses. there is a limit on the amount 
    // of guesses available.
    // 
int GuessingGame () {

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses ==0) {
        if (guessCount < guessLimit) {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;            
        } else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1) {
        printf("Out of guesses!");
    } else {
        printf("You win!");
    }
}

    // For Loops
    // for loops are another way to check parameters and to complete tasks
    // for loops work by itterating through the require parameter until the conditions 
    // are met. The example below shows the for loops printing out the first 6 indexes
    // of the array luckyNumbers
    //
int forLoop () {
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    for (int i = 0; i < 6; i++ ) {
        printf("%d\n", luckyNumbers[i]);
    }
}

    // 2D Arrays
    // 2D arrays are like an array within an array. The 'outer' array indexes the inner
    // arrays like normal, starting at 0, and the inner arrays also index as noraml. 
    // this is a way of storing multiple bits of data for the ones functions or problem.
    // then we have a nested for loop that itterates through the 'outer' and 'inner'
    // arrays to print them out
    //
int TwoDArrays () {

    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d,", nums[i][j]);
        }
        printf("\n"); 
    } 
}

    // Memory Addresses
    // When a user wants to access a variable they can call the name and get the value
    // but C will use memory address to do so. This program shows use how to see what
    // the memory address is for each variable.
    //
int MemoryAddresses () {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);
}

    // Pointers
    // pointers are pretty simple. the point to memory addresses. This can be 
    // the address of a variable for example. with this is allows us to directly
    // access this information. &age, like shown below, is the the pointer for the
    // memory address of the variable age.
    //
int Pointers () {
    int age = 30;
    int * pointerAge = &age; // pointerAge is the pointer. it stores the memory address 
    // for the age variable
    // this format is to create a pointer variable and references the address
    double gpa = 3.4;
    double * pointerGpa = &gpa;
    char grade = 'A';
    char * pointerGrade = &grade;

    printf("age`s memory address: %p\n", &age);

    // to dereference the address we can do the following via a print statment
    printf("%d", *&age);
}

    // Read / Write / Append a file
    // this shows us how to read/write/append a file
    //
int WriteReadAppendToFile () {
    // this creates a pointer that points to a file that will be created
    // we can write to this file since we have 'w' included in the brackets
    // 'w' allows us tp write to the file (everytime we write is overrides the previous contents)
    // 'r' allows us to read 
    // 'a' allows us to append
    FILE * filePointer = fopen("Employees.txt", "r");

    // fprintf works the same as printf but writes to the file instead.
    /*
    fprintf(filePointer, "\nMary, HR ");
    */

    char line[255];
    fgets(line, 255, filePointer); // repeat this line to get more from the file
    printf("%s", line);

    fclose(filePointer);
}

int main () 
{

WriteReadAppendToFile();

/*
    variables 
    
    char name[] = "Paul"; // character variable within an array
    int age = 4; // integer variable 
    double blub = 12.222; // decimel variable

    //print statments.
    
    printf("the name is %s\n", name); //use %s for strings
    printf("the age is %d\n", age); // use %d for integers
    printf("the number is %f\n", blub); // use %f for decimels

    printf("%d\n", 1234);
    printf("%f\n", 12.34);

    char chara = 'i';
    printf("%c\n", chara); // use %c for a single character

    printf("%f\n", pow(2,3)); // to get the power
    printf("%f\n", sqrt(36)); // to get the square root
    printf("%f\n", ceil(36.356)); // to round up 
    printf("%f\n", floor(36.336)); // to round down

    /*
    comments like this are multi line
    or like this // this is a single line comment
*/

/*
    // constants
    // these cannot be modified or changed after creation
    // best practice is to use capitals for variable names

    const int NUM = 5; // const makes the variable read only
    printf("%d\n", NUM);

    NUM = 8;
    printf("%d", NUM);
    
    // scanf allows for the user to input a number or character to the terminal 
    // this can then be used within the program
    // The '&' is used as a pointer and is needed for scanf
    // scanf only gets the character up to the first space
    // not good for sentences
    // 
    int age;
    printf("Enter in your age: ");
    scanf("%d", &age); // use d% to tell c that you want an interger
    printf("You are %d\n", age);

    double gpa;
    printf("Enter in your gpa: ");
    scanf("%lf", &gpa); // use %lf to tell c that you want a double for scanf
    printf("You gpa is %f\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade); // use %c to tell c that you want a character
    printf("Your grade is %c", grade);

    char name[20]; // list that limits its size to 20 
    printf("Enter your name: ");6
    scanf("%s", name); // no need for '&' with lists
    printf("Your name is %s\n", name);

    // for sentences from the user, use fgets
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin); // stdin is for standard input
    printf("Your name is %s", name);
*/
/*
    // basic calculator that takes the input from the user and
    // adds the numbers together
    //
    int num1;
    int num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Answer: %d", num1 + num2);

    double numA;
    double numB;
    printf("Enter first number: ");
    scanf("%lf", &numA);
    printf("Enter second number: ");
    scanf("%lf", &numB);

    printf("Answer: %f", numA + numB);

    // Mad lib "game" that takes user input and 
    //adds the words to a premade poem
    //
    char colour[20];
    char pluralNoun[20];
    char celebF[20];
    char celebL [20];

    printf("Enter a colour: ");
    scanf("%s", &colour);

    printf("Enter a plural noun: ");
    scanf("%s", &pluralNoun);

    printf("Enter a celebrity: ");
    scanf("%s%s", celebF, celebL);

    printf("Roses are %s\n", colour);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebF, celebL);
*/
/*
    // arrays
    // an array can store multiple characters or numbers
    // the array can only store one type of value
    // each value is given a index for its position in the 
    // array. arrays start at 0
    int luckyNumbers[] = {4, 3, 5, 6, 7, 2, 10};
    printf("%d\n", luckyNumbers[2]);
    luckyNumbers[2] = 200; // reassigneds index 2 to the new value
    printf("%d\n", luckyNumbers[2]);

    int lukNum [10];
    lukNum [1] = 20;
    lukNum [0] = 2;
    printf("%d", lukNum[0]);
*/

    return 0;
}



