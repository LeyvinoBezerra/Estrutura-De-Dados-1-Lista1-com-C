#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
#include<Math.h>

int main(){
	float Area,Raio;
    
    printf("Digite o Raio: \n");
    scanf("%f",&Raio);
    
    Area=(pi*(pow(Raio,2)));
    
    printf("A Area do Circulo:%f\n",Area);
	
	system("pause");
	return 0;
}
