#include<stdio.h>
#include<stdlib.h>


int main(){
	int idade;
    float altura;
    double peso;
    char letra;    
	char nome[100];
    
	
		printf("Sua idade: ");
	scanf("%d", &idade);
	printf("Idade = %d \n\n", idade);

	printf("Sua altura: ");
	scanf("%f", &altura);
	printf("Altura = %f \n", altura);
    printf("Altura = %.2f \n\n", altura);
	
	printf("Seu peso: ");
	scanf("%lf", &peso);
	printf("Peso = %lf \n", peso);
    printf("Peso = %.2lf \n\n", peso);
    fflush(stdin);  

	printf("Primeira letra do seu nome: ");
	scanf("%c", &letra); 
	printf("Letra = %c \n\n", letra);
    fflush(stdin);                       


	printf("Seu nome: ");
	scanf("%s", &nome);                    
	printf("Nome = %s \n\n", nome);
    fflush(stdin); 
	
	printf("Seu nome: ");
	fgets(nome, 99, stdin);             	
	printf("Nome = %s \n\n", nome);


	printf("Idade = %d  Altura = %f  Peso = %lf  Letra = %c  Nome = %s \n\n", idade, altura, peso, letra, nome);                        
	
	
	
	
	system("pause");
	return 0;
	
}
