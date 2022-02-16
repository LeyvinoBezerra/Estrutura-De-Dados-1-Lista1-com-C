#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior, menor, vet[5], i;

    for(i = 0;i < 5;i++)
    {
        printf("Entre com o %d valor do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }

    maior = vet[0];
    menor = vet[0];

    for(i = 1;i < 5;i++)
    {
        if(maior < vet[i])
            maior = vet[i];
    }

    for(i = 1;i < 5;i++)
    {
        if(menor > vet[i])
            menor = vet[i];
    }

    printf("\nO maior valor do vetor e %d: \n", maior);
    printf("O menor valor do vetor e %d: ", menor);

    return 0;
}
