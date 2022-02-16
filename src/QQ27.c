#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int linhas, colunas;
	int i, j;
	
	printf("Digite a quantidade de linhas: ");
	scanf("%d", &linhas);
	
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &colunas);
	
	int ** matriz = (int**) malloc(linhas*sizeof(int*));
	
	for(i = 0; i < linhas; i++){
		matriz[i] = (int*) malloc (colunas*sizeof(int));
		for(j = 0; j < colunas; j++){
			printf("Digite o valor %d %d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf(" %d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	//Liberar memoria
	
	system("pause");
	return 0;
}
