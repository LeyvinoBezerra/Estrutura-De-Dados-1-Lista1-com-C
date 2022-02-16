#include <stdio.h>
#include <stdlib.h>
int main()
{
    float altura,peso,IMC;
    char k;
    printf("Este Programa calcula o seu Indice de Massa Corporea - (IMC)\t\n\n");
    do{
    printf("Entre com a sua altura:");
   do{ scanf("%f",&altura);
   }while(altura<=0);   
    printf("Entre com o seu peso:");
   do{ scanf("%f",&peso);
   }while(peso<=0);   
    IMC=((peso))/((altura*altura));
    if(IMC<=18.50)
    printf("Deficit de peso\n");
    else
    {
      if(IMC<25.00)
      printf("Peso Normal\n");
      else
      {
        if(IMC<30.00)
        printf("Excesso de Peso\n");
        else
        {
          if(IMC>=30.00)
          printf("Obesidade\n");
        }
      }
    }
    printf("Seu IMC e' %.2f\n",IMC);
    printf("Deseja calcular outro IMC. (S)/(N):");
    scanf("%s",&k);
    }while(k=='S'||k=='s');
system("pause");
}                
