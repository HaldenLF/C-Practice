#include <string.h>

// this function removes the first and last character
// of a given string.
// bottom one is better.

char* remove_char(char* dst, const char* src)
{

  size_t i;
  for ( i = 0; i < strlen(src); i++) {
    if (src[i] == 0) {
      continue;
    }
    if (src[i + 1] == '\0') {
      break; 
    }
    dst [i] = src[i + 1];
  }
  dst[i - 1] = '\0';
  return dst;
}


#include <string.h>

char* remove_char(char* dst, const char* src)
{
    strcpy(dst, src + 1);
    dst[strlen(dst) - 1] = '\0';
    return dst;
}