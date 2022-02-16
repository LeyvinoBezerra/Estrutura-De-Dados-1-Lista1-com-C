#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	
	printf("Entre com dois valores \n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	while(a <= b)
	{
		if(a%2 != 0)
			printf("%d ", a);
		a++;
	}
	return 0;
}
