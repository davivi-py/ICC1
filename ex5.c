#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,raiz1,raiz2,delta;
    printf("Qual o valor do coeficiente A da equação de segundo grau?");
    scanf("%f",&a);
    if (a == 0)
    {
        printf("Essa equação não é quadrática!");
        return 0;
    }
    printf("Qual o valor do coeficiente B da equação de segundo grau?");
    scanf("%f",&b);
    printf("Qual o valor do coeficiente C da equação de segundo grau?");
    scanf("%f",&c);
    delta = (b*b)-(4*a*c);
    if(delta == 0){
        raiz1 = -b / (2*a);
        printf("A única raiz dessa equação é: %f", raiz1);
        return 0;
    }
    else if(delta < 0)
    {
        printf("Essa equação quadrática não admite raízes reais");
        return 0;
    }
    else
    {
        raiz1 = (-b + sqrt(delta))/(2*a);
        raiz2 = (-b - sqrt(delta))/(2*a);
        printf("As raízes dessa equação são: %f e %f", raiz1, raiz2);
        return 0;
    }
}
