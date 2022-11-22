#include <stdio.h>

// purpose: implements temperatures formula C = (5/9)(F-32)
//
// constant:
//    F - initial temprature value
//    STEP - step temprature value
//    UPPER_T - upper temprature value
// output:
//    C - temperatures

#define F 0
#define STEP 20
#define UPPER_T 300

int main() {

  for(int lower = F; lower <= UPPER_T; lower += STEP) {
    float temperature = (5.0 / 9.0) * (lower - 32);
    printf("temperature value: %.1f\n", temperature);
  }

  return 0;
}