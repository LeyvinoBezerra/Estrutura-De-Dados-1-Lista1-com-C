#include<stdio.h>
#include<stdlib.h>


int main(){
	
   float Numerador,Denominador,Div;
   
   printf("Digite um numero: \n");
   scanf("%f",&Numerador);
   
   printf("Digite outro numero: \n");
   scanf("%f",&Denominador);
   
   Div=(Numerador/Denominador);
    if(Denominador==0)
	{
    	printf("\a");
	}
	else
	{
	Printf("A Divisão e:",Div);	
	}
    system("pause");
	return 0;
}
