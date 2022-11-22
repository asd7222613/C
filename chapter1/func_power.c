// purpose: implements math power function
//
// variables:
//    x - base number
//    y - index number
//
// functions:
//    power - math power function
//  
// output: power result

#include <stdio.h>

int power(int x, int y);

int main() {

  int x = 2;
  int y = 4;

  int ret = power(x, y);
  printf("power result: %d\n", ret);
  return 0;
}

int power(int x, int y) {
  return x << (y-1);
}