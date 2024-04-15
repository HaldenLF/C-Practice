#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// this program takes a string and makes it upper case

char *makeUpperCase (char *str){
  // assign parameter length to varaible
  // useful for parameters that are 
  // pointers
  size_t len = strlen(str); 
  
  for(size_t i = 0; i < len; i++) {
    str[i] = toupper(str[i]);
  }
  
  
  return str;
}