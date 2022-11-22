// purpose: stats each digit、(blank、tab、newline) and other character counts.
//
// variables:
//    digits - array, store 0-9 counts
//    nc     - int, blank、tab、newline counts
//    os     - int, other character counts
//    ch     - input char
//
// constants:
//    BLANK   - ' '
//    NEWLINE - '\n'
//    TAB     - '\t'
//
// output: digit、(blank、tab、newline) and other character counts

#include <stdio.h>

#define BLANK   ' '
#define NEWLINE '\n'
#define TAB     '\t'

int main() {
  int nc = 0;
  int os = 0;
  int ch;
  int digits[10] = {0};

  while((ch = getchar()) != EOF) {
    if(ch >= 48 && ch <= 57) {
      digits[ch-48]++;
    } else if(ch == BLANK || ch == NEWLINE || ch == TAB) {
      nc++;
    } else {
      os++;
    } 
  }

  for(int i = 0; i < 10; i++) {
    printf("%d conts: %d\n", i, digits[i]);
  }

  printf("blank tab newline counts: %d\n", nc);
  printf("other character counts: %d\n", os);
  getchar();
  
  return 0;
}