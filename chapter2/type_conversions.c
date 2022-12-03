// purpose: When an operator has operands of different types, they are converted to a common type
//          according to a small number of rules
//
// conversion rules:
//          1.In general, the only automatic conversions are those that convert a
//            ``narrower'' operand into a ``wider'' one without losing information
//

#include <stdio.h>

int atoi(char s[]);
int htoi(char s[]);
unsigned long strLen(char s[]);
unsigned long power(int base, int index);

int main(int argc, char const *argv[])
{
    char s[4] = "123";
    char ss[] = "0xffff";
    int atoi_result = atoi(s);
    int htoi_result = htoi(ss);

    printf("atoi result: %d\n", atoi_result);
    printf("s len: %lu\n", strLen(s));
    printf("htoi result: %d\n", htoi_result);
    printf("power value: %lu\n", power(2, 8));
    return 0;
}

int atoi(char s[])
{
    int n = 0;

    for (int i = 0; s[i] >= '0' && s[i] <= '9'; i++)
    {
        n = 10 * n + (s[i] - '0');
    }

    return n;
}

int htoi(char s[])
{
    int n = 0;
    char end = 0;
    unsigned long len = strLen(s);
    unsigned int upper = len - 1;

    if (len == 0)
    {
        return 0;
    }

    if (len >= 3)
    {
        // 0x or 0X is optional, check them first
        if ((s[0] == '0' && s[1] == 'x') || (s[0] == '0' && s[1] == 'X'))
        {
            end = 2;
        }
    }

    for (int from = upper; from >= end; from--)
    {
        if (s[from] >= '0' && s[from] <= '9')
        {
            n = n + ((s[from] - '0') * power(16, upper - from));
        }
        else if (s[from] >= 'a' && s[from] <= 'f')
        {
            n = n + ((10 + s[from] - 'a') * power(16, upper - from));
        }
        else if (s[from] >= 'A' && s[from] <= 'F')
        {
            n = n + ((10 + s[from] - 'A') * power(16, upper - from));
        }
    }

    return n;
}

unsigned long strLen(char s[])
{
    unsigned long n = 0;

    for (unsigned long i = 0; s[i] != '\0'; i++)
    {
        n++;
    }

    return n;
}

unsigned long power(int base, int index)
{
    if (index == 0)
    {
        return 1;
    }

    if (index == 1)
    {
        return base;
    }

    unsigned long int n = base;

    while (index > 1)
    {
        n = n * base;
        index--;
    }

    return n;
}