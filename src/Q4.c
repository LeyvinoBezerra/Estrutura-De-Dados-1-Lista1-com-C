#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int Num1,Num2,Soma,Sub,Mult;
	float Div,Resto;
	printf("Digite o primeiro numero:");
	scanf("%d",&Num1);
	
	printf("Digite o segundo numero:");
	scanf("%d",&Num2);

	Soma=Num1+Num2;
	Sub=Num1-Num2;
	Mult=Num1*Num2;
	Div=Num1/Num2;
	Resto=Num1%Num2;
	
	printf("A soma:%d  A subtra��o:%d A multiplica��o:%d A divi��o:%f O Resto da Divis�o:%f",Soma,Sub,Mult,Div,Resto);
	
	system("pause");
	return 0;
}
