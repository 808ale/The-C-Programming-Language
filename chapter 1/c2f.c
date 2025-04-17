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

    printf("%3c\t%6c\n", c, f); // print heading banner
    while (fahrenheit <= upper)
    {
        fahrenheit = celsius * (9.0 / 5) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
    return 0;
}