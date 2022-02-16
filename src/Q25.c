#include<stdio.h>
#include<stdlib.h>

int main(){
 
 int tamVet,i,y;
 int *p;
 	
 printf("Digite o tamanho do vetor: "); 
 scanf("%d",&tamVet);
 
 p=(int*) calloc(tamVet,sizeof(int));
 

 for(i=0;i<tamVet;i++){
 	
	 scanf("%d",&p[i]);
 	
 }
 for(y=0;y<tamVet;y++){
 
 	printf("%d",p[y]);
 }
 free(p);	
	
	system("pause");
	return 0;
}
