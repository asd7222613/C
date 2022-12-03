// purpose: enum constant is list of integer values
//          the integer value will auto incr from first element
#include <stdio.h>

enum months
{
    JAN = 1,
    FEB
};

enum boolean
{
    NO,
    YES
};

enum escapes
{
    BELL = '\a',
    BACKSPACE
};

int main(int argc, char const *argv[])
{

    printf("months: %d\n", JAN);
    printf("months: %d\n", FEB);
    printf("boolean: %d\n", NO);
    printf("boolean: %d\n", YES);
    printf("escapes: %d\n", BELL);
    printf("escapes: %d\n", BACKSPACE);
    return 0;
}
