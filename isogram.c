#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

// this function checks if the word is an 
// isogram ( a word where letters are used once)

bool IsIsogram (const char *str) {
  int count[30] = {0};
  
  size_t len = strlen(str);
  
  for (size_t i = 0; i < len; i++) {
    if (!isalpha(str[i])) {
      continue;
    }
    
    int index = tolower(str[i]) -'a';
    
    if (count[index] > 0) {
      return false;
    }
    count[index]++;
  }
  return true;
}