#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, soma;
	
	printf("Entre com dois valores \n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	while(a <= b)
	{
		soma += a;
		a++;
	}
	
	printf("%d", soma);
	
	return 0;
}
