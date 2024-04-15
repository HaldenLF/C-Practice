#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *accum(const char *source){
  size_t len = strlen(source);
  char* ans = (char*)malloc(sizeof(char) * (len * 10)); 
  
  size_t x = 1;
  for (size_t i = 1; i < len; i++) {
    ans [0] = toupper(source[0]);
    ans[x++] = '-';
    ans[x++] = toupper(source[i]);
    
    for (size_t j = 1; j <= i; j++) {
      ans[x++] = tolower(source[i]);
    }
  }
  ans[x] = '\0';
  return ans;
}

///////////////////////////////////////////////////////

#include <malloc.h>
#include <string.h>
#include <ctype.h>

char *accum(const char *source) {
	int len = strlen(source);
	char *str = (char*)malloc(len * (len + 1));
	int i = 0;

	for (int j = 0; j < len; j++, i++) {
		for (int k = 0; k < (j + 1); k++, i++) str[i] = !k ? toupper(source[j]) : tolower(source[j]);
		str[i] = '-';
	}
	str[i-1] = '\0';
	return str;
}