// purpose: stats word counts
//
// variables:
//    ch - input character
//    wc - word counts
//    state - input word state
//
// constans:
//    IN      - inside a word
//    OUT     - outside a word
//    NEWLINE - \n
//    BLANK   - ' '
//    TAB     - \t
//
// output: word counts
#include <stdio.h>

#define IN 1
#define OUT 0

#define NEWLINE '\n'
#define BLANK   ' '
#define TAB     '\t'

int main() {

  int ch, wc = 0;
  int state = OUT;

  while((ch = getchar()) != EOF) {
    if(ch == NEWLINE || ch == BLANK || ch == TAB) {
      if(state == IN) {
        wc++;
      }

      state = OUT;
    } else {
      state = IN;
    }
  }

  printf("word counts: %d\n", wc);
  
  // pause any input
  getchar();
  
  return 0;
}