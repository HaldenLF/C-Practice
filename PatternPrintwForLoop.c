#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);

  	for (int i = 1; i <= n * 2 - 1; i++ ) {

        for (int j = 1; j <= n * 2 - 1; j++){
            int x_axis = abs(n - i);
            int y_axis = abs(n - j);
            int pos = x_axis > y_axis ? x_axis : y_axis;

            printf("%d ", pos + 1);

        }
        printf("\n");
    }

    return 0;
}