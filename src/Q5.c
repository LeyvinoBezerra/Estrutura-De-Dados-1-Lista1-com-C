#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int Num1,Num2,Num3;
	float MediaAri;

	printf("Digite o primeiro numero:");
	scanf("%d",&Num1);
	
	printf("Digite o segundo numero:");
	scanf("%d",&Num2);

    printf("Digite o terceiro numero:");
	scanf("%d",&Num3);
    
    MediaAri=((Num1+Num2+Num3)/3);
	
    printf("A media E: %f \n\n",MediaAri);
	
	system("pause");
	return 0;
}
