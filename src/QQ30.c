#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5], i, troca;

    for(i = 0;i < 5;i++)
    {
        printf("Entre com o %d valor do vetor ", i+1);
        scanf("%d", &vet[i]);
    }

    for(i = 4;i > 0;i--)
    {
        troca = vet[i - 1];
        vet[i - 1] = vet[i];
        vet[i] = troca;
    }

    for(i = 0; i < 5; i++)
    {
        printf("\t %d", vet[i]);
    }

    return 0;
}
