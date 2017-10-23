#include <stdio.h>
#include <stdlib.h>
float const g=9.81, pi=3.1416, dena=1000, dend=820;

int main(int argc, char *argv[]) {
	float vol,r,h;
	float dia,pre;
	char letra;
	
	system("COLOR F0");

	printf("\t\t\t\tProblema de Aplicación\n");
	printf("\t\tVolumen de un fluido\n\n");
	printf("\nIngrese el tipo de fluido(A=Agua, D=Disel): ");
	scanf("%C",&letra);
	printf("\nIngrese el diametro del contenedor cilindrico(metros): ");
	scanf("%f",&dia);
	printf("\nIngrese la presion medida por el sensor(bares): ");
	scanf("%f",&pre);
	
	r=(dia*10)/2;
	
	((letra=='A')||(letra=='a')?(h=(pre*10)/(dena*g)):0);
	((letra=='D')||(letra=='d')?(h=(pre*10)/(dend*g)):0);
	
	vol=h*pi*r*r;
	
	printf("\n\nEl Volumen del Fluido es: %g litros",vol);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
