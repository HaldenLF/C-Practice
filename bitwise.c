#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  int max_And = 0;
  int max_Or = 0;
  int max_Xor = 0;
  
  for (int i = 1; i < n; i++) {
      for (int j = i + 1; j <= n; j++) {
        if (((i&j) > max_And) && ((i&j) < k)) {
            max_And = i&j;
        }
        if (((i|j) > max_Or) && ((i|j) < k)) {
            max_Or = i|j;
        }
        if (((i^j) > max_Xor) && ((i^j) < k)){
            max_Xor = i^j;
        }
      }
  }
  printf("%d\n%d\n%d\n", max_And, max_Or, max_Xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}