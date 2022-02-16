#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
	char nome[15];
	int idade;
	char sexo;
	double peso;
	double altura;
	double imc;
}pessoa;

int main()
{
	int i;
	pessoa vetPessoa[3];
	for(i = 0;i < 3;i++)
	{
		printf("Nome: ");
		fgets(vetPessoa[i].nome, sizeof(vetPessoa[i].nome), stdin);

		printf("Idade: ");
		scanf("%d", &vetPessoa[i].idade);

		printf("Sexo F/M: ");
		scanf(" %c", &vetPessoa[i].sexo);

		printf("Peso: ");
		scanf("%lf", &vetPessoa[i].peso);

		printf("Altura: ");
		scanf("%lf", &vetPessoa[i].altura);

		vetPessoa[i].imc = vetPessoa[i].peso/(vetPessoa[i].altura * vetPessoa[i].altura);
        fflush(stdin);
	}

	for (i=0;i<3;i++)
    {
       printf("Nome: %s \n Idade: %d \n Sexo: %c \n Peso: %lf \n Altura: %lf \n IMC: %lf\n",vetPessoa[i].nome,vetPessoa[i].idade,vetPessoa[i].sexo,vetPessoa[i].peso,vetPessoa[i].altura,vetPessoa[i].imc);
    }

	return 0;
}
