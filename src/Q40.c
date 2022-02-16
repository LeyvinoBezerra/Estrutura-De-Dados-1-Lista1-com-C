#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b)
{
    int i, soma = 0;
    if(a < b)
    {
        for(i = a+1;i < b;i++)
            soma += i;
    }else
    {
        for(i = b+1;i < a;i++)
            soma += i;
    }
    return soma;
}

int somaRec(int a, int b)
{
    int soma = 0;
    if(a == b)
    {
        printf("\n");
    }else
    {
        soma = a + somaRec(a+1, b);
    }
    return soma;
}


int main()
{
    int a, b, res;
    printf("Valor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);

    res = soma(a, b);
    printf("%d \n", res);

    res = somaRec(a+1, b);
    printf("%d", res);

    return 0;
}
