#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  float x,y,a,b,res=0;
  
  system("COLOR F0");
  
  printf("\t\t\t\tEjercicio 1\n");
  printf("Resolver la ecuacion res=(x+y)^2(a-b)\n\n");
  printf("Ingrese los valores de las incognitas correspondientes.");  

  printf("\nx: ");
  scanf("%f",&x);
  printf("\ny: ");
  scanf("%f",&y);
  printf("\na: ");
  scanf("%f",&a);
  printf("\nb: ");
  scanf("%f",&b);      

  res=(x+y)*(x+y)*(a-b);

  printf("\n\nEl resultado es: %g",res);
  
  printf("\n\n");        
  system("PAUSE");	
  return 0;
}
