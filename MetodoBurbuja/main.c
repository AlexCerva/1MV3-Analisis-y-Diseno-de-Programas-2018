#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i,j,temp;
    int tam=10;
    int lista[10]={6,9,3,1,2,4,7,5,8,10};

    for (i=1;i<tam;i++){
        for (j=0; j < tam-i ;j++){
            if (lista[j] > lista[j+1]){
               temp=lista[j];
               lista[j]=lista[j+1];
               lista[j+1]=temp;
            }
        }
    }
    for (j=0; j < tam ;j++){
        printf("%d\t",lista[j]);
    }
    
    printf("\n\n",lista[j]);

    for (i=1;i<tam;i++){
        for (j=0; j < tam-i ;j++){
            if (lista[j] < lista[j+1]){
               temp=lista[j];
               lista[j]=lista[j+1];
               lista[j+1]=temp;
            }
        }
    }
    for (j=0; j < tam ;j++){
        printf("%d\t",lista[j]);
    }
  system("PAUSE");	
  return 0;
}
