#include <stdlib.h>
#include <string.h>
#include<stdio.h>

// this functions takes a string and removes all the vowels within the string.
// this can be change for any letters in the word, the if statment just needs
// to be modified.

char *disemvowel(const char *str) {
  size_t len = strlen(str);
  char* output = (char*) malloc(len +1);
  
  size_t pos = 0;
  for (size_t i = 0; i < len; i++) {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'
            && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            output[pos++] = str[i];
    }
  }
  output[pos] = '\0';
  return output;

}

int main () {
    char input[100]; // Increase the size of input to store a larger string if necessary
    scanf("%s", input);
    printf("%s", disemvowel(input));
    free(disemvowel(input)); // Free memory allocated by disemvowel()
}