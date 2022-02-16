#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "");

    int num;

    printf("entre com um numero de um a cinco\n");
    scanf("%d", &num);

    switch(num){
    case 1:
        printf("Um\n");break;
    case 2:
        printf("Dois\n");break;
    case 3:
        printf("Três\n");break;
    case 4:
        printf("Quatro\n");break;
    case 5:
        printf("Cinco\n");break;
    default:
        printf("Valor inválido");
    }

    return 0;
}
