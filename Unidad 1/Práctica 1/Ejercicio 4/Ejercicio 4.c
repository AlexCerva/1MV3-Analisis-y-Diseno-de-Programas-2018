#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int segundos_totales,horas, minutos, segundos,a,b;
	system("COLOR F0");
	
  	printf("\t\t\t\tEjercicio 4\n");
  	printf("\t\tCalculo del tiempo equivalente\n\n");
  	printf("Ingrese los segundos totales de un tiempo para ser convertidos en su\n");
  	printf("equivalente en horas, minutos y segundos.\n");
  
  	printf("\nSegundos Totales (Enteros): ");
  	scanf("%d",&segundos_totales);
	
	horas=segundos_totales/3600;
	a=segundos_totales%3600;
	minutos=(a>=60?a/60:0);
	segundos=(a>=60?a%60:a);
	
	printf("\n\nTiempo:\t%dhrs\t%dmin\t%dseg",horas,minutos,segundos);
	
	printf("\n\n");        
  	system("PAUSE");	
  	return 0;
}
