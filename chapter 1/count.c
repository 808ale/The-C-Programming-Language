#include <stdio.h>

int countChar()
{
    long nc; // count

    nc = 0;
    while (getchar() != EOF)
    {
        ++nc;
    }
    printf("%ld\n", nc);

    return 0;
}

int countLine()
{
    int c, nl; // count

    nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("%ld\n", nl);

    return 0;
}

int countWhiteSpace()
{
    int c, ws;

    ws = 0; // count

    // long while loop
    // while ((c = getchar()) != EOF)
    // {
    //     if (c == '\n')
    //     {
    //         ws++;
    //     }
    //     else if (c == '\t')
    //     {
    //         ws++;
    //     }
    //     else if (c == ' ')
    //     {
    //         ws++;
    //     }
    //     else if (c == '\v')
    //     {
    //         ws++;
    //     }
    //     else if (c == '\f')
    //     {
    //         ws++;
    //     }
    //     else if (c == '\r')
    //     {
    //         ++ws;
    //     }
    // }

    // compact check
    while ((c = getchar()) != EOF)
    {
        // check and increment using boolean expression
        ws += (c == '\n' ||
               c == '\t' ||
               c == ' ' ||
               c == '\v' ||
               c == '\f' ||
               c == '\r');
    }

    printf("%ld\n", ws);

    return 0;
}

int convertWhitespace()
{
    int c;
    while ((c = getchar()) != EOF) // get char
    {
        if (c == ' ') // if blank
        {
            while ((c = getchar()) == ' ')
                // do nothing until next c is not ' '
                ;
            putchar(' ');

            if (c == EOF) // exit nested loop if EOF
                break;
        }
        putchar(c);
    }
    return 0;
}

int makeTabVisible()
{
    int c;

    // while ((c = getchar()) != EOF)
    // {
    //     if (c == '\t')
    //     {
    //         putchar('\\');
    //         putchar('t');
    //     }
    //     else if (c == '\b')
    //     {
    //         putchar('\\');
    //         putchar('b');
    //     }
    //     else if (c == '\\')
    //     {
    //         putchar('\\');
    //         putchar('\\');
    //     }
    //     else
    //     {
    //         putchar(c);
    //     }
    // }

    // switch solution
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\t':
            putchar('\\');
            putchar('t');
            break;
        case '\b':
            putchar('\\');
            putchar('b');
            break;
        case '\\':
            putchar('\\');
            putchar('\\');
            break;
        }
        putchar(c);
    }

    return 0;
}

int main()
{
    // countChar();
    // countLine();
    // countWhiteSpace();
    // convertWhitespace();
    makeTabVisible();

    return 0;
}