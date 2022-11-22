#include <stdio.h>

int main() {
  //octal、decimal、hex each convert
  int d = 31;
  int o = 037;
  int h = 0x1f;

  printf("d == o: %d\n", d == o);
  printf("d == h: %d\n", d == h);
  return 0;
}