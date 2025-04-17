#include <stdio.h>

#define SIZE 10 // max word and max word length
#define IN 1    // inside word
#define OUT 0   // outside word

int main()
{
    // CALCULATION
    int c, wl, i, status;
    int wordLen[SIZE];

    // set to 0
    for (i = 0; i < SIZE; i++)
        wordLen[i] = 0;
    c, wl, i, status = 0;

    while (((c = getchar()) != EOF) && i < 10)
    {
        if (c == '\n' || c == '\t' || c == ' ')
        {
            // end of word
            if (status == IN)
            {
                wordLen[i] = wl;
                wl = 0;
                ++i;
            }
            // consecutive whitespace
            status = OUT;
        }
        else if (wl == SIZE) // max word len reached
        {
            status = OUT;
            wordLen[i] = wl; // record word len
            wl = 0;          // reset
            ++i;
        }
        else
        {
            status = IN;
            ++wl;
        }
    }

    // HISTOGRAM
    printf("------------------------------------\n");
    // iterate array;
    for (i = 0; i < SIZE; i++)
    {
        printf("%d|", i);                    // current number
        for (int y = 0; y < wordLen[i]; y++) // "X" * len
        {
            printf("X");
        }
        putchar('\n');
    }
    printf("------------------------------------\n");
    return 0;
}