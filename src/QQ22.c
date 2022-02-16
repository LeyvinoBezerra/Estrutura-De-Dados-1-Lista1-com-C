#include <stdio.h>
#include <stdlib.h>


int main() {
	
 int Num1,Num2;
 
 printf("Digite para saber se o numero e Primo:");
 scanf("%d",&Num1);
 
 Num2=Num1;
 
 for(; Num2>0; Num2--){
 	
 	if(Num1 % Num2 == 0 && Num1 != Num2||Num1 == 1){
 		printf("o Numero nao e primo ");
 		break;
	 }
    else if (Num2==2){
    	printf("O Numero e Primo");
    	break;
	}
 }
 
 
   return 0;
}
