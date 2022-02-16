#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, i;
	
	printf("Entre com dois valores \n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	for(i = a;a <= b; a++)
		printf("%d ", a);
	
	return 0;
}
