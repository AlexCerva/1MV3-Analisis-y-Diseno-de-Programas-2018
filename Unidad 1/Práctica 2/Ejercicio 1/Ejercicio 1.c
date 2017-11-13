#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  float x,fx=0;
  
  system("COLOR F0");
  
  printf("\t\t\t\tEjercicio 1\n");
  printf("\t\tDado un valor x, imprimir el valor de una Funcion\n\n");
  printf("Ingrese el valor de x para obtener el valor de la funcion segun su intervalo.\n");
  printf("f(x)=x^2-x\t si x<=0\n");
  printf("f(x)=-x^2+3x\t si x>0\n");
    
  printf("x: ");
  scanf("%f",&x);
  
  if (x<=0){
     fx=x*(x-1);
  }else{
     fx=x*(3-x);
  }

  printf("\n\nf(x) = %g",fx);
  
  printf("\n\n");        
  system("PAUSE");	
  return 0;
}
