#include<stdio.h>
#include<stdlib.h>

int main(){
	float N1,N2,N3, MediaParcial,P4;
	
	printf("Digite a primeira nota: \n");
	scanf("%f",&N1);
	
	printf("Digite a Segunda nota: \n");
	scanf("%f",&N2);
	
	printf("Digite a segunda nota: \n");
	scanf("%f",&N3);
	
	MediaParcial=(2*N1+3*N2+4*N3)/9;



	printf("A Media e:%f \n",MediaParcial);
	
	if(MediaParcial>= 0 && MediaParcial<=3.5){
		printf("Reprovado: \n ");
	}
	if(MediaParcial>3.5 && MediaParcial<7){
		printf("Quarta Prova: \n ");
	
	}
	if(MediaParcial>= 7){
		printf("Aprovado:\n");
	}
	system("pause");
	return 0;
}
