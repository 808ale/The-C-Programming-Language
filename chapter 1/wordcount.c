#include <stdio.h>
#define IN 0  // inside a word
#define OUT 1 // outside a word

/* count lines, words, and characters in input */
int main(int argc, char *argv[])
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc; // new char
        if (c == '\n')
        {
            ++nl; // new line
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT; // end word
        }
        else if (state == OUT)
        {
            state = IN; // start word
            ++nw;       // new word
        }
    }
    printf("Lines %d Words %d Characters %d\n", nl, nw, nc);

    return 0;
}