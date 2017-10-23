#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float const pi=3.1416;

int main(int argc, char *argv[]){
  float radio,altura,g,V,A;
  
  system("COLOR F0");
  
  printf("\t\t\t\tEjercicio 3\n");
  printf("\t\tCalculo de Volumen y area de un cono\n\n");
  printf("Ingrese los parametros que se solicitan para obtener el volumeny el area\n");
  printf("del cono.\n");
  
  printf("\nRadio de la base (cm): ");
  scanf("%f",&radio);
  printf("\nAltura (cm): ");
  scanf("%f",&altura);
  
  g=sqrt((pow(radio,2))+(pow(altura,2)));
   printf("\n%g",g);
  V=(pi*altura*(pow(radio,2)))/3;
  A=(pi*radio*g)+(pi*(pow(radio,2)));
  
  
  printf("\n\n\tVolumen:\t%g cm^3",V);
  printf("\n\tArea:\t\t%g cm^2",A);
  
  printf("\n\n");        
  system("PAUSE");	
  return 0;
}
