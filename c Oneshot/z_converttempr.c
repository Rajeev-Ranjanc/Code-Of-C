// convert tempreture fahrenheit from celcius
#include <stdio.h>
float convert_celcius_to_fahrenheit(float celc);
float convert_fahrenheit_to_celcius(float fahr);
int main()
{
    float celcius, fahrenheit;
    printf("\ncelcius:");
    scanf("%f", &celcius);
    printf("\n%.2fcelcius in fahrenheit is:%.2f", celcius, convert_celcius_to_fahrenheit(celcius));
    printf("\nfahrenheit:");
    scanf("%f", &fahrenheit);
    printf("\n%.2f fahrenheit in celcius is:%.2f", fahrenheit, convert_fahrenheit_to_celcius(fahrenheit));
    return 0;
}
float convert_celcius_to_fahrenheit(float celc)
{
    return (celc * 9 / 5) + 32;
}
float convert_fahrenheit_to_celcius(float fahr)
{
    return (fahr - 32) * 5 / 9;
}