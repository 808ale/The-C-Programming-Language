#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
// int main()
// {

//     float fahrenheit, celsius;
//     float lower, upper, step;
//     char f, c;

//     lower = 0;
//     upper = 300;
//     step = 20;
//     c = 'c';
//     f = 'f';

//     printf("%3c\t%6c\n", f, c); // print heading banner
//     fahrenheit = upper;
//     while (fahrenheit >= lower)
//     {
//         celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
//         printf("%3.0f %6.1f\n", fahrenheit, celsius);
//         fahrenheit = fahrenheit - step;
//     }
//     return 0;
// }

// for loop version
// int main()
// {
//     float fahrenheit, celsius;
//     float lower, upper, step;
//     char f, c;

//     lower = 0;
//     upper = 300;
//     step = 20;
//     c = 'c';
//     f = 'f';

//     printf("%3c\t%6c\n", f, c); // print heading banner
//     for (fahrenheit = upper; fahrenheit >= lower; fahrenheit -= step)
//     {
//         celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
//         printf("%3.0f %6.1f\n", fahrenheit, celsius);
//     }

//     return 0;
// }

int main()
{
    float fahrenheit, celsius;
    char f, c;

    f = 'F';
    c = 'C';

    printf("%3c\t%6c\n", f, c); // print heading banner
    for (fahrenheit = UPPER; fahrenheit >= LOWER; fahrenheit -= STEP)
    {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
    }

    return 0;
}