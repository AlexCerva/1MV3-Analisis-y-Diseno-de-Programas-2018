#include <stdio.h>
#include <stdlib.h>

float const pimp=0.25;

int main(int argc, char *argv[]){
  char nom[10];
  char ape[10];
  int hor;
  float imp, pre, ingr, neto;
  
  printf("Ingrese su nombre y primer apellido: ");
  scanf("%s %s",nom,ape);
  printf("\n");
  
  printf("Ingrese las horas: ");
  scanf("%d",&hor);
  printf("\n");
  
  printf("Ingrese el precio: ");
  scanf("%f",&pre);
  printf("\n");
    
  ingr=hor*pre;
  imp=pimp*ingr;
  neto=ingr-imp;
  
  system("cls");  
  printf ("Hola %s %s\n",nom,ape);
  printf("Tu Ingreso es: $%.2f\n",ingr);
  printf("Tu Impuesto es: $%.2f\n",imp);
  printf("El Precio Neto es: $%.2f\n\n",neto);
  system("PAUSE");	
  return 0;
}
