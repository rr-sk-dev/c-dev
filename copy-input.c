#include <stdio.h>

int main()
{

    int ch;

    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }

    printf("EOF!\n"); // control + d

    return 0;
}