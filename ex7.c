#include <stdio.h>

int main()
{
    float n1,n2,maior;
    printf("Digite um número: \n");
    scanf("%f", &n1);
    printf("Digite outro número: \n");
    scanf("%f", &n2);

    if (n1>n2)
    {
        maior = n1;
        printf("O maior número entre estes é: %f\n", maior);
        return 0;
    }
    
    else
    {
        maior = n2;
        printf("O maior número entre estes é: %f\n", maior);
        return 0;
    }
}