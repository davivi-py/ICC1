#include <stdio.h> 

int main()
{
    printf("Quantos dias o encanador vai trabalhar?");
    int dias;
    scanf("%d", &dias);
    float valor_liquido = 0.64*(200*dias);
    printf("O valor líquido a ser pago é: %2f\n",valor_liquido);
    return 0;
}   