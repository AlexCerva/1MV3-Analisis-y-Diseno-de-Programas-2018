#include <iostream>
#include <stdio.h>

extern char D[];
int fun_mod7 (int);

int main(){
    int intDia, intMes, intAnio, intAnionis, intSiglo, intSuma;
    
    printf("\t\t\t\tCALCULO DE LA FECHA\n\n\n");
    printf("Introduzca la fecha non el siguiente formato:\n\n");
    printf("\t\t\t\t00-00-0000\n\n");
    
    
    intDia = fun_mod7(16);
    intMes = 2;
    intAnio = 18+18/4;
    intAnionis = 0;
    intSiglo = 0;
    intSuma = intDia+intMes+intAnio+intAnionis+intSiglo;
    
    printf("Hoy es %c \n",D[fun_mod7(intSuma)]);
    
    system("PAUSE");
    return 0;
}
