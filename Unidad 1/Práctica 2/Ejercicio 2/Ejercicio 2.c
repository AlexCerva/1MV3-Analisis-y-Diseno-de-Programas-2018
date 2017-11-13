#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  float sum=0,calif;
  int cant=0;
  
  system("COLOR F0");
  
  printf("\t\t\t\tEjercicio 2\n");
  printf("\t\tAprobacion de un Alumno dadas sus Calificaciones\n\n");
  printf("Ingrese sus cinco calificaciones para ser promediados y determinar si esta\n");
  printf("aprobado o no.\n");
  
  for (cant=0;cant<5;cant++){
      printf("\nCalificacion %i: ",cant+1);
      scanf("%f",&calif);
      sum=sum+calif;
  }
  
  calif=sum/5;

  printf("\n\nPromedio: %g",calif);
  
  if (calif<6){
     printf("\nNo Aprobado");
  }else{
     printf("\nAprobado");
  }
  
  printf("\n\n");        
  system("PAUSE");	
  return 0;
}
