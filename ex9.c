#include <stdio.h>

int main()
{
    float id, altura, peso;
    printf("Qual seu sexo? Digite 1 para Masculino e 2 Para Feminino\n");
    scanf("%f", &id);
    printf("Qual a sua altura?\n");
    scanf("%f", &altura);

    if (id == 1)
    {
        peso = (72.7*altura-58);
        printf("Seu peso ideal é: %f", peso);
        return 0;
    }
    
    else if (id == 2)
    {
        peso = (62.1*altura - 44.7);
        printf("Seu peso ideal é: %f", peso);
        return 0;
    }
    
    else
    {
        printf("Digite um número sendo 1 ou 2!");
        return 0;
    }

}