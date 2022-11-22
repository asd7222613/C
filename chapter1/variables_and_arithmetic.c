#include <stdio.h>

// purpose: implements temperatures formula C = (5/9)(F-32)
// variables:
//    F - 0,20,40,60,...,300
// output:
//    C - temperatures
int main() {

  for(int lower = 0; lower <= 300; lower += 20) {
    int temperature = (5.0 / 9.0) * (lower - 32);
    printf("temperature: %d\n", temperature);
  }
  printf("==================================================\n");
  // ouput keep one decimal place
  for(int lower = 0; lower <= 300; lower += 20) {
    float temperature = (5.0 / 9.0) * (lower - 32);
    printf("temperature: %.1f\n", temperature);
  }
  printf("==================================================\n");
  // print F and C table
  printf("F\tC\n");
  for(int lower = 0; lower <= 300; lower += 20) {
    float temperature = (5.0 / 9.0) * (lower - 32);
    printf("%d\t%.1f\n", lower, temperature);
  }

  return 0;
}