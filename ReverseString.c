// this function will reverse each word in the string 
// the words in the string will stay in the same order
// as they were entered though

#include <stdlib.h>
#include <string.h>

char* reverseWords(const char* text) {

  int len = strlen(text);
  char* reverse = malloc(len + 1);
  
  int t = 0;
  for (int i = 0; i <= len; i++) {
    if (text[i] == ' ' || text[i] == '\0') {
      int u = i - 1;
      for (int j = u; j >= t; j--) {
        *reverse++ = text[j];
      }
      *reverse++ = ' ';
      t = i + 1;
    }
  }
  *(reverse - 1) = '\0';
  
  return reverse - len - 1;
}