#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
 float funcaoDelta (float ,float ,float );

 int main(){
  float a,b,c,X1,X2,delta,x1, x1f, x2, x2f, Xv, Yv;
  
  printf ("\n\n\nInforme o valor de A: ");
  scanf ("%f", &a);
  
  printf ("Informe o valor de B: ");
  scanf ("%f", &b);

  printf ("Informe o valor de C: ");
  scanf ("%f", &c);
    
  printf("O Delta E:%.2f",funcaoDelta(a,b,c));
  
  delta=funcaoDelta(a,b,c);
  
  if (delta<0)

{

printf ("\n\nDelta Negativo, impossivel calcular.\n\n");

}

else

{

printf ("\nDelta e igual a %.2f\n", delta);

x1=((-b)+sqrt(delta))/(2*a);

x2=((-b)-sqrt(delta))/(2*a);

printf ("\nO x1=%.2f e o x2=%.2f\n\n", x1, x2);

Xv=-b/(2*a);

Yv=-(delta)/(4*a);

printf ("\nO Xv=%.2f e o Yv=%.2f\n\n", Xv, Yv);

}
   system("pause");
   return 0;
}

 float funcaoDelta (float A,float B,float C){
   float Delta;	
   
   Delta=pow(B,2)-4*A*C;
   
   return Delta; 
}


