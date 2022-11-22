// purpose: read a character and print a character at a time
//
// variables:
//    input - read a character from keyboard
//
// output: print a character from read to screen

#include <stdio.h>

int main() {

  // loop operate
  while(1) {
    int input = getchar();
    // maybe input is \n, must be skipped
    if(input != '\n') {
      printf("input: %c\n", input);
    }
  }

  return 0;
}