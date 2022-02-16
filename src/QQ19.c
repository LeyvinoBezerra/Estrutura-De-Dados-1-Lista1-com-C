#include <stdio.h>
#include <stdlib.h>

int main()
{
	int senha;
	
	scanf("%d", &senha);
	
	do
	{
		printf("senha incorreta");
			scanf("%d", &senha);
	}
	while(senha != 123);
	
	return 0;
}
