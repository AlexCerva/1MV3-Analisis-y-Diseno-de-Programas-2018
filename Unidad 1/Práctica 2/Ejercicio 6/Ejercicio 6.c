#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x=0,fx=0;
	char operador,sal;
	
	system("COLOR F0");
	
	printf("\t\t\t\tEjercicio 6\n\n");
	printf("\t\t\tAplicaciónde ciclo for");
	printf("\n\nEste programa muestra los valores de la funcion: f(x)=sen(2x)-x");
	printf("\n\n\t   x\t| f(x) = sen(2x)-x");
	printf("\n\t---------------------------");
	
	for (x=0;x<=10;x+=0.5){
		fx=sin(2*x)-x;
		printf("\n\t  %g\t|    %g",x,fx);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
