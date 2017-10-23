#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float grados, c, f;
	char letra;
	
	system("COLOR F0");
	
  	printf("\t\t\t\tEjercicio 5\n");
  	printf("\t\tCaonversor de temperatura (C - F)\n\n");
  	printf("Ingrese la temperatura que dese convertir.\n");
  	printf("# F para grados farenheit\n# C para grados celsius");
	printf("\nTemperatura:");
  	scanf("%f %C",&grados, &letra);
	printf("\n");
  	f=(grados*9/5)+32;
  	c=(grados-32)*5/9;
  	
	((letra=='F')||(letra=='f')?(grados=c):0);
	((letra=='C')||(letra=='c')?(grados=f):0);
	
	printf("Equivalencia: %g",grados);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
