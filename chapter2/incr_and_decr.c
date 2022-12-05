// purpose: Increment and Decrement Operators
#include <stdio.h>

// squeeze: delete all c from s
void squeeze(char s[], int c);

int main(int argc, char const *argv[])
{
    char s[20] = "Hello ";
    char t[] = "World";

    // squeeze(s, 'l');
    printf("squeeze string: %s\n", s);

    return 0;
}

void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}