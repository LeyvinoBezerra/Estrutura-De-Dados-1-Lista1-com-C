#include<stdio.h>
#include<stdlib.h>


int main(){
	
	float Num1,Num2,Num3, MediaAri;
	

	printf("Digite o primeiro numero:");
	scanf("%f",&Num1);
	
	printf("Digite o segundo numero:");
	scanf("%f",&Num2);

    printf("Digite o terceiro numero:");
	scanf("%f",&Num3);
    
    MediaAri=((Num1+Num2+Num3)/3);
	
    printf("A media e: %.2f \n\n",MediaAri);
	
	system("pause");
	return 0;
}
