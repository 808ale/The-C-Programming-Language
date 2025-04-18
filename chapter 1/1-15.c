#include <stdio.h>

/*
    print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version
*/
void convert(float fahrenheit, int upper, float celsius, int step);

int main()
{

    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahrenheit = lower;

    convert(fahrenheit, upper, celsius, step);

    return 0;
}

void convert(float fahrenheit, int upper, float celsius, int step)
{
    printf("%3c\t%6c\n", 'F', 'C'); // print heading banner
    while (fahrenheit <= upper)
    {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}
