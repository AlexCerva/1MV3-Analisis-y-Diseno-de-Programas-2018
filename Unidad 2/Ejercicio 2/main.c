#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int i,C=0;
  float dat[999];
  float p=0,S=0;
  
  printf("\t\t\t\tPromedios\n");
  printf("Ingrese numeros positivos para ser promediados.\n");
  printf("Cuando termine de ingresar los datos a promediar ingrese cero.\n");  
  for(i=0;i<i+1;i++){
        printf("\nDato %d: ",i+1);
        scanf("%f",&dat[i]);
        if (dat[i]!=0){
              C=C+1;
        }else{
              break;
        }
  }
  
  for(i=0;i<C;i++){
        p=dat[i]+S;
        S=p;
  }

  p=S/C;
  printf("\n\nPromedio: %g",p);
  
  printf("\n\n");        
  system("PAUSE");	
  return 0;
}
