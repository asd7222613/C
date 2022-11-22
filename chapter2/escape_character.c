// purpose: print different escape character
//
// output: different escape character

#include <stdio.h>

int main() {

  //null char
  printf("null char dec: %c, octal: %c, hex: %c\n", '\0','\000', '\x0');
  //! char
  printf("! char dec: %c, octal: %c, hex: %c\n", '!', '\041', '\x21');
  return 0;
}