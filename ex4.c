#include <stdio.h>

int main()
{
    int paredes;
    float largura, area_total, altura, custo_tinta, custo_m_o, total;
    printf("Qual número de paredes a ser pintada?");
    scanf("%d", &paredes);
    printf("Qual a largura das paredes?");
    scanf("%f", &largura);
    printf("Qual a altura das paredes?");
    scanf("%f", &altura);

    area_total = paredes*(largura*altura);

    custo_tinta = (20*area_total)/5;

    custo_m_o = (area_total/10)*30;

    total = custo_m_o + custo_tinta;

    printf("O orçamento total do projeto é de: %2f\nR$", total);

    return 0;


}