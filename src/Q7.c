#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "");

    const double pRefri = 1.5, pFatia = 3.0, taxa = 0.1;
    int refri, pizza, pessoas;
    double tot_CT, tot_ST, ratio;

    printf("Quantos refrigerantes? \n");
    scanf("%d", &refri);

    printf("Quantas fatias de pizza? \n");
    scanf("%d", &pizza);

    printf("Quantas pessoas na mesa? \n");
    scanf("%d", &pessoas);

    tot_ST = refri * pRefri + pizza * pFatia;
    tot_CT = tot_ST * taxa + tot_ST;
    ratio = tot_CT / pessoas;

    printf("Total sem taxas:%.2f \n", tot_ST);
    printf("Total com taxas:%.2f \n", tot_CT);
    printf("Rateio por pessoa:%.2f \n", ratio);

    return 0;
}
