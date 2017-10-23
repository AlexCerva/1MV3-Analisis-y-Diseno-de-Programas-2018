#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  float pies=0,pulgadas,yardas,centimetros,metros;
  
  system("COLOR F0");
  
  printf("\t\t\t\tEjercicio 2\n");
  printf("\t\tEquivalencias de una longitud dada en pies(ft)\n\n");
  printf("Ingrese la magnitud en pies para obtener su equivalenca en pulgadas, yardas,\n");
  printf("centimetros y metros.\n\n");
  
  printf("Longitud (ft): ");
  scanf("%f",&pies);
  
  pulgadas=pies*12;
  yardas=pies/3;
  centimetros=pulgadas*2.54;
  metros=centimetros/100;

  printf("\n\nLas Equivalencias son:");
  printf("\n\tPulgadas:\t%g in",pulgadas);
  printf("\n\tYardas:\t\t%g yd",yardas);
  printf("\n\tCentimetros:\t%g cm",centimetros);
  printf("\n\tMetros:\t\t%g m",metros);
  
  printf("\n\n");        
  system("PAUSE");	
  return 0;
}
