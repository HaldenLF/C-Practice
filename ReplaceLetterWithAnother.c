#include <stdlib.h>
#include <string.h>

// this functions reads an input string 
// and changes a letter for another. 
// in this case if the letter 'T' is in
// the string it gets replaces with 'U'.
// bottom one is better than top.

char *dna_to_rna(const char *dna)
{
  size_t len = strlen(dna);
  char *rna = malloc(len + 1);

  for (size_t i = 0; i < len; i++) {
    if( dna[i] == 'T') {
      rna[i] = 'U';
    } else {  // you dont need this dumb dumb
              // just equal rna[i] to dna[i]
      switch(dna[i]) {
        case 'G': rna[i] = 'G'; 
          break;
        case 'C': rna[i] = 'C'; 
          break;
        case 'A': rna[i] = 'A'; 
          break;
        default: rna[i] = dna[i]; 
          break;
      }
    }
  }
  
  // returned pointer must point to a freeable buffer
  rna[len] = '\0';
  return rna;
}





#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna) {
  size_t len = strlen(dna);
  char *res = malloc(len + 1);
  for (size_t i = 0; i < len; i++)
    res[i] = dna[i] == 'T' ? 'U' : dna[i];
  res[len] = '\0';
  return res;
}