#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "");

    int cont1 = 100, cont2 = 100, transf;

    printf("Quanto ser� tranferido ? \n");
    scanf("%d", &transf);

    cont1 = cont1 - transf;
    cont2 = cont2 + transf;

    if(transf > 100)
        printf("Valor insuficiente em conta");
    else
        printf("Transferencia de %d.00R$ feita com sucesso, valor atual da conta � %d.00R$\n", transf, cont2);

    return 0;
}
