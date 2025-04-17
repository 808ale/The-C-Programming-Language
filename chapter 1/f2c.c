// #include <stdio.h>

// // print Fahrenheit to Celsius table
// int main(int argc, char *argv[])
// {
//     int fahrenheit, celsius;
//     int lower, upper, step;
//     char F, C;

//     F = 'F';
//     C = 'C';
//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahrenheit = lower;
//     printf("%3c\t%6c\n", F, C); // indenting for characters and numbers
//     while (fahrenheit <= upper)
//     {
//         celsius = 5 * (fahrenheit - 32) / 9;
//         printf("%3d\t%6d\n", fahrenheit, celsius);
//         fahrenheit = fahrenheit + step;
//     }

//     return 0;
// }

#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
int main()
{

    float fahrenheit, celsius;
    float lower, upper, step;
    char f, c;

    lower = 0;
    upper = 300;
    step = 20;
    c = 'c';
    f = 'f';

    fahrenheit = lower;

    printf("%3c\t%6c\n", f, c); // print heading banner
    while (fahrenheit <= upper)
    {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
    return 0;
}