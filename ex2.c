#include <stdio.h>

int main()
{
    printf("Digite uma temperatura em Celsius: ");
    float celsius;
    scanf("%f", &celsius);
    float fahrenheit = (celsius * 9) / 5 + 32;
    printf("Esta temperatura na escala Fahrenheit é: %2f\n", fahrenheit);
    return 0;
}