#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5], invet[5];
    int i, j = 0;

    for(i = 0;i < 5;i++)
    {
        printf("entre com o %d valor: ", i+1);
        scanf("%d", &vet[i]);
    }

    for(i = 4;i >= 0;i--)
    {
		invet[j] = vet[i];
		j++;
	}

	printf("Vetor normal: \n ");
	for(i = 0;i < 5;i++)
    {
		printf("\t %d", vet[i]);
	}

    printf("\nVetor inverso: \n ");
	for(i = 0;i < 5;i++)
    {
		printf("\t %d", invet[i]);
	}

    return 0;
}
