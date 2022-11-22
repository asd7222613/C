// purpose: print each data type range limit
//
// output: each data type range limit
#include <stdio.h>
#include <limits.h>

int main() {

  // char
  printf("signed char max: %d, min: %d\n", SCHAR_MAX, SCHAR_MIN);
  printf("unsigned char max: %d\n", UCHAR_MAX);
  // short
  printf("signed short max: %d, min: %d\n", SHRT_MAX, SHRT_MIN);
  printf("unsigned short max: %d\n", USHRT_MAX);
  // int
  printf("signed int max: %d, min: %d\n", INT_MAX, INT_MIN);
  printf("unsigned int max: %u\n", UINT_MAX);
  // long
  printf("signed long max: %ld, min: %d\n", LONG_MAX, LONG_MIN);
  printf("unsigned long max: %lu\n", ULONG_MAX);
  // long long
  printf("signed long long max: %+lld, min: %+lld\n", LLONG_MAX, LLONG_MIN);
  printf("unsigned long long max: %llu\n", ULLONG_MAX);

  return 0;
}