#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int idade;
    float altura;
    char letra;    
	char nome[100];
	char nomeCompleto[100];
	
	printf("Sua Idade:");
	scanf("%d",&idade);
	
	printf("Sua Altura:");
	scanf("%f",&altura);
	fflush(stdin);
	
	printf("primeira letra do nome:");
	scanf("&c",&letra);
	fflush(stdin);
	 
	printf("Seu nome: ");
	scanf("%s", &nome);  
	fflush(stdin);
	
	printf("Seu nome completo: ");
	gets(nomeCompleto);  
	fflush(stdin);                          
	
	printf("Idade = %d  Altura = %.2f Letra = %c  Nome = %s Nome Completo = %s \n\n", idade, altura,letra, nome,nomeCompleto);
	
	system("pause");
	return 0;
}
