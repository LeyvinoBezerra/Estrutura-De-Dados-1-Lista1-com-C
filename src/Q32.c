#include <stdio.h>
#include <stdlib.h>

int main()
{

    char frase[100], fraseinvertida[100];
    printf("Entre com uma frase: ");
    fgets(frase, 100, stdin);
    int i, j, tam = strlen(frase);

    for(i = tam - 1,j = 0;i >= 0;i--, j++)
    {
        fraseinvertida[j] = frase[i];
    }

    printf("\nFrase invertida \n");
    for(i = 0; i < tam; i++)
    {
        printf("%c", fraseinvertida[i]);
    }

	return 0;
}
