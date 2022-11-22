// purpose: counting character from input
//
// variables:
//    nc - counts of input character, except:\n、EOF etc.
//    ch - input character from keyboard
//
// output: counts of input
#include <stdio.h>

int main() {

  int ch,nc = 0;

  while((ch = getchar()) != EOF) {
    if(ch != '\n') {
      nc++;
    }   
  }

  printf("count of input: %d\n", nc);

  return 0;
}