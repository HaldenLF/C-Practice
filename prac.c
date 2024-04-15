#include <string.h>
#include <ctype.h>

char *accum(const char *source){
  size_t len = strlen(source);
  char ans = '\0'; 
  
  for (size_t i = 0; i < len; i++) {
    if (source[i] == source[0]){
      ans += toupper(source[0]);
    } else {
      ans += source[i] *len -1;
    }
  }
  return ans;
}