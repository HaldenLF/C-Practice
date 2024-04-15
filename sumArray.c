#include <stddef.h>

int sum_array(const int values[], size_t count){
  size_t sum = 0;
  for (size_t i = 0; i < count; i++){
    sum += values[i];
  }
  return sum;
}

//////////////////////////////////////////////////

int sum_array(const int *values, size_t count) 
{
 int i;
 int sum = 0;
 for(i=0; i<count; i++) {
    sum = sum + values[i];
  }
  return sum;
}