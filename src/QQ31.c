#include <stdio.h>
#include <stdlib.h>

int main()
{

    char frase[100];
    printf("Entre com uma frase: ");
    fgets(frase, 100, stdin);
    int i, tam = strlen(frase) ;
    for(i = tam- 1;i >= 0;i--)
    {
        printf("%c", frase[i]);
    }

	return 0;
}
