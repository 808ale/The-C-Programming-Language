#include <stdio.h>

// int main(int argc, char *argv[])
// {
//     int c;
//     c = getchar();
//     // while string is not EOF
//     while (c != EOF)
//     {
//         // print string
//         putchar(c);
//         // read next character
//         c = getchar();
//     }
//     return 0;
// }

#include <stdio.h>

int main(int argc, char *argv[])
{
    int c;
    char value;
    // printf("%d", EOF);

    while ((c = getchar()) != EOF)
    {
        value = ((c = getchar()) != EOF); // verify expression
        printf("%i\n", value);

        putchar(c);
    }
    return 0;
}