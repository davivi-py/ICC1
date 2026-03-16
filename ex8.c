#include <stdio.h>

int main()
{
    float salario, salario_new;
    printf("Qual seu salário atual?");
    scanf("%f", &salario);

    if (salario <= 500)
    {
        salario_new = 1.2*salario;
        printf("Seu novo salário é de: %f \n", salario_new);
        return 0;
    }
    
    else
    {
        salario_new = 1.1*salario;
        printf("Seu novo salário é de: %f \n", salario_new);
        return 0;
    }

}