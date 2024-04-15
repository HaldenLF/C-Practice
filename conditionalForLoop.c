#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

// this function takes to inputs as numbers and returns the values as a string
// for example input 2, 3 - output = two, three

int main() { 
    int a, b;
    
    char* numWords[] = {"zero", "one", "two", "three", "four", 
                        "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);

    for (int i = a; i <= b; i++) {
        if ( i < 10) {
            printf("%s\n", numWords[i]);
        } else if (i % 2 ==0) {
            printf("even\n");  
        } else if (i % 2 !=0) {
            printf("odd\n");  
        }  
    }


    return 0;
}