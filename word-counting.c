#include <stdio.h>

#define IN (1)  /* inside a word */
#define OUT (0) /* outside a word */

int main()
{
    int ch, ch_counter, word_counter, line_counter, state;
    ch_counter = word_counter = line_counter = 0;
    state = OUT;

    while ((ch = getchar()) != EOF)
    {
        ++ch_counter;

        if (ch == '\n')
        {
            ++line_counter;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            word_counter++;
        }
    }

    printf("Number of characters: %d\n", ch_counter);
    printf("Number of words: %d\n", word_counter);
    printf("Number of lines: %d\n", line_counter);

    return 0;
}