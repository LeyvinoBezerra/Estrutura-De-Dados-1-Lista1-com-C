#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int ope,fat,n;
float base,expoente,poten,raiz;
printf (" 1 - potenciacao   \n");
printf (" 2 - raiz quadrada \n");
printf (" 3 - fatorial      \n");   
printf (" 0 – sair          \n");

printf("Digite A Operacao:");
scanf("%d",&ope);

   switch ( ope )
  {
     case 1 :
        printf("Digite a base:");
        scanf ("%f",&base);
        
		printf("Digite o indice:");
        scanf ("%f",&expoente);
        
		poten=pow(base,expoente);
        printf("a potencia e:%f /n",poten);
     break;
 
     case 2 :
        printf("Digite a Base:");
        scanf ("%f",&base);
        
	
    	raiz=sqrt(base);
		printf("A raiz e:%f",raiz);
     break;
 
     case 3 :
        
		printf("Insira um valor para o qual deseja calcular seu fatorial: ");
        scanf("%d", &n);
        for(fat = 1; n > 1; n = n - 1)
        fat = fat * n;
        printf("\nFatorial calculado: %d", fat);


    break;
    
     default :
       
    break;
    
    
    
}
    
 system("pause");   
 return 0;   
    

}
