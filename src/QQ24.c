#include<stdio.h>
#include<stdlib.h>

int main(){
	
  int vetor[10];
  int i;
  int y;
  printf("Digite para compor o vetor:");
  
  for(i=1;i<=10;i++){
  
   scanf("%d",&vetor[i]); 	
  	
  }
	
for(y=1;y<=10;y++){
	
	printf("%d\n\n",vetor[y]);
}	
	
	
	system("pause");
	return 0;
}
