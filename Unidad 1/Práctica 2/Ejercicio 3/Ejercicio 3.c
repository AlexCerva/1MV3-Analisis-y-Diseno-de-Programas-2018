#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	float kwh,costo=0;
  
	system("COLOR F0");
 
	printf("\t\t\t\tEjercicio 3\n");
	printf("\t\tCalculo de Tarifa por KWh Consumidos\n\n");
	printf("Ingrese la cantidad de KWh consumidos para calcular la tarifa requerida.\n");
 
	printf("\nKWh Consumidos: ");
	scanf("%f",&kwh);
  
	if (kwh<=50){
		costo=(kwh*2.288)+52.84;
	}else if (kwh<=100){
		costo=(50*2.288)+((kwh-50)*2.762)+52.84;
	}else if (kwh>100){
		costo=(50*2.288)+(50*2.762)+((kwh-100)*3.042)+52.84;
	}
	
	printf("\n\n\tCosto Total:\t$ %g",costo);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
