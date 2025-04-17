#include <stdio.h>

#define IN 0  // inside word
#define OUT 1 // outside word

/* print one word per line */
int main(int argc, char *argv[])
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state != OUT) // only put \n if coming from a word
                putchar('\n');
            state = OUT;
        }
        else
        {
            state = IN;
            putchar(c);
        }
    }
    return 0;
}