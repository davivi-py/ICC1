#include <stdio.h>

int main()
{
    float n1,n2,n3,media;
    printf("Qual a nota da prova 1?\n");
    scanf("%f", &n1);
    printf("Qual a nota da prova 2?\n");
    scanf("%f", &n2);
    printf("Qual a nota da prova 3?");
    scanf("%f", &n3);


    media = (n1+n2+n3)/3;
    
    if (media >= 5)
    {
        printf("Você foi aprovado!");
        return 0;
    }
    
    else
    {
        printf("Você foi reprovado!");
        return 0;
    }
}