#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,tam=10;
  float dat[10]={6,9,3,1,2,4,7,5,8,10};
  float A[]={0,0,0,0,0,0,0,0,0,0};
  float B[]={0,0,0,0,0,0,0,0,0,0};
  float p=0,antp=0;
  
  printf("\t\t\t\tDatos:\n");
  
  for(i=0;i<tam;i++){
        printf("%.g\t",dat[i]);
  }
  
  for(i=0;i<tam;i++){
        p=dat[i]+antp;
        antp=p;
  }
  p=antp/tam;
  printf("\n\nPromedio: %g",p);
  
  for (i=0;i<tam;i++){
            if (dat[i] >= p){
               A[i]=dat[i];
            }else if (dat[i] < p){
               B[i]=dat[i];
            }else{
            break;}

  }

  printf("\n\nDatos Mayores o Iguales al Promedio:\n");
  for (i=0;i<tam;i++){
      if (A[i] > 0){
          printf("%.g\t",A[i]);
      }
  }
  
  printf("\n\nDatos Menores al Promedio:\n",p);
  for (i=0;i<tam;i++){
      if (B[i] > 0){
          printf("%.g\t",B[i]);
      }
  }

  printf("\n\n");        
  system("PAUSE");	
  return 0;
}
