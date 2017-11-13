#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float num1=0,num2,total=0;
	char operador,sal;
	
	system("COLOR F0");
	
	printf("\t\t\t\tEjercicio 5\n\n");
	printf("\t\t\tCalculadora de Dos Numeros");

	here:
	printf("\n\nPresione S o s para salir o cualquier otra tecla para repetir");
	fflush(stdout);
	sal= getche();
	system("cls");
	if((sal=='S')||(sal=='s')){
		goto out;
	}
	
	printf("\nIngrese una operacion basica que desee resolver entre dos numeros\n\n");
	printf("Ejemplo:\t\t2+5\n\n");
	printf("Presione Enter para resolver la operacion\n\n");
	
	
	printf("Operacion: ");
	scanf ("%f%c%f",&num1,&operador,&num2);
	switch (operador){
		case '+':
			total=num1+num2;
		break;
		case '-':
			total=num1-num2;
		break;
		case '*':
			total=num1*num2;
		break;
		case '/':
			total=num1/num2;
		break;
	}
	scanf("%c",&sal);
		
	printf("\n\nTotal: %g",total);
	printf("\n\n");
	
	goto here;
	
	out:
	return 0;
}
