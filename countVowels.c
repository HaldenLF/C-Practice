#include <stddef.h>
#include <string.h>

size_t get_count(const char *s)
{
  int ans = 0;
  size_t len = strlen(s);
  const char* vowel = "aeiouAEIOU";
  for (size_t i = 0; i < len; i++) {
    const char* p = strchr(vowel, s[i]);
    if(p != NULL) {
      ans++;
    } 
  }
  return ans;
}