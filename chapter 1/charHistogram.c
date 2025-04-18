#include <stdio.h>

#define TOTAL_CHARS_ASCII 128

int main()
{
    int c, i, j;
    int chars[TOTAL_CHARS_ASCII];

    // empty array
    for (i = 0; i < TOTAL_CHARS_ASCII; ++i)
    {
        chars[i] = 0;
    }

    // read char and increment
    while ((c = getchar()) != EOF)
    {
        ++chars[c];
    }

    // histogram
    for (i = 0; i < TOTAL_CHARS_ASCII; ++i)
    {
        printf("%3d| ", i); // current char

        for (j = 0; j < chars[i]; ++j)
        {
            putchar('X'); // populate histogram
        }
        putchar('\n');
    }

    return 0;
}