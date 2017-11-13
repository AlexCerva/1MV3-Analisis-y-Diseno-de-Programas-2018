#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(int argc, char *argv[]) {
	float hr;
	int i,cul,a=0,b=0;
	char sal;	
	
	system("COLOR F0");
	
	camb:
	system("cls");
	
	printf("\t\t\t      Problema de Aplicacion\n");
	printf("\t\t\tControl de humedad en invernadero\n\n");
	printf("Este programa simula la regulacion de la Humedad Relativa (HR) de un invernadero en\n");
	printf("funcion del cultivo presente.\n\n");
	
	printf("\t-----------------------------------------------------------------\n");
	printf("\t|    Humedad Relativa del invernadero en funcion del cultivo    |\n");
	printf("\t|---------------------------------------------------------------|\n");
	printf("\t|\tCultivo\t\t\t|\t\tHR\t\t|\n");
	printf("\t|---------------------------------------------------------------|\n");
	printf("\t|\t1. Tomate\t\t|\t      50 - 60 ó\t |\n");
	printf("\t|\t2. Melon\t\t|\t      60 - 70 ó\t |\n");
	printf("\t|\t3. Pepino\t\t|\t      70 - 90 ó\t |\n");
	printf("\t|\t4. Calabacita\t\t|\t      55 - 80 ó\t |\n");
	printf("\t-----------------------------------------------------------------\n\n");
	
	printf("Ingrese la opcion del cultivo presente en el invernadero: ");
	scanf("%i",&cul);
	
	system("cls");
	here:
	
	switch (cul){
		case 1:
			a=50;
			b=60;
			
			do{
				printf("\n\nCultivo: Tomate\n\n");
				printf("Ingrese el porcentje de Humedad Relativa del Invernadero: ");
				scanf("%f",&hr);
				sleep(10);
				system("cls");
				
				printf("\nHumedad Relativa Anterior: %g ó",hr);
			}while((hr>=a)&&(hr<=b));
			
			do{
				if(hr>b){
					printf("\n\n\t\t\t\tHUMEDAD EXCEDIDA\n\t\t\t\tAbriendo Ventilas");
					hr=hr*0.97;
					sleep(5);
					system("cls");
					printf("\nHumedad Relativa Anterior: %g ó",hr);
				}else if(hr<a){
					printf("\n\n\t\t\t\t   HUMEDAD BAJA\n\t\t\tIniciar Riego en los Cultivos");
					hr=hr*1.04;
					sleep(3);
					system("cls");
					printf("\nHumedad Relativa Anterior: %g ó",hr);
				}
			}while((hr>b)||(hr<a));
		break;
		case 2:
			a=60;
			b=70;
			
			do{
				printf("\nCultivo: Melon\n\n");
				printf("Ingrese el porcentje de Humedad Relativa del Invernadero: ");
				scanf("%f",&hr);
				sleep(10);
				system("cls");
				
				printf("\nHumedad Relativa Anterior: %g ó",hr);
			}while((hr>=a)&&(hr<=b));
			
			do{
				if(hr>b){
					printf("\n\n\t\t\t\tHUMEDAD EXCEDIDA\n\t\t\t\tAbriendo Ventilas");
					hr=hr*0.97;
					sleep(5);
					system("cls");
					printf("\nHumedad Relativa Anterior: %g ó",hr);
				}else if(hr<a){
					printf("\n\n\t\t\t\t   HUMEDAD BAJA\n\t\t\tIniciar Riego en los Cultivos");
					hr=hr*1.04;
					sleep(3);
					system("cls");
					printf("\nHumedad Relativa Anterior: %g ó",hr);
				}
			}while((hr>b)||(hr<a));
		break;
		case 3:
			a=70;
			b=90;
			
			do{
				printf("\nCultivo: Pepino\n\n");
				printf("Ingrese el porcentje de Humedad Relativa del Invernadero: ");
				scanf("%f",&hr);
				sleep(10);
				system("cls");
				printf("\nHumedad Relativa Anterior: %g ó",hr);
			}while((hr>=a)&&(hr<=b));
			
			do{
				if(hr>b){
					printf("\n\n\t\t\t\tHUMEDAD EXCEDIDA\n\t\t\t\tAbriendo Ventilas");
					hr=hr*0.97;
					sleep(5);
					system("cls");
					printf("\nHumedad Relativa Anterior: %g ó",hr);
				}else if(hr<a){
					printf("\n\n\t\t\t\t   HUMEDAD BAJA\n\t\t\tIniciar Riego en los Cultivos");
					hr=hr*1.04;
					sleep(3);
					system("cls");
					printf("\nHumedad Relativa Anterior: %g ó",hr);
				}
			}while((hr>b)||(hr<a));
		break;
		case 4:
			a=55;
			b=80;
			
			do{
				printf("\nCultivo: Calabacita\n\n");
				printf("Ingrese el porcentje de Humedad Relativa del Invernadero: ");
				scanf("%f",&hr);
				sleep(10);
				system("cls");
				printf("\nHumedad Relativa Anterior: %g ó",hr);
			}while((hr>=a)&&(hr<=b));
			
			do{
				if(hr>b){
					printf("\n\n\t\t\t\tHUMEDAD EXCEDIDA\n\t\t\t\tAbriendo Ventilas");
					hr=hr*0.97;
					sleep(5);
					system("cls");
					printf("\nHumedad Relativa Anterior: %g ó",hr);
				}else if(hr<a){
					printf("\n\n\t\t\t\t   HUMEDAD BAJA\n\t\t\tIniciar Riego en los Cultivos");
					hr=hr*1.04;
					sleep(3);
					system("cls");
					printf("\nHumedad Relativa Anterior: %g ó",hr);
				}
			}while((hr>b)||(hr<a));
		break;
		default:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\t\t\t\tDATO INVALIDO\n\t\t   Abra la aplicacion e intente nuevamente.");
		sleep(2);
		goto out;
	}
	
	printf("\n\n\tPresione S o s para salir.\n\tPresione C o c para cambiar de cultivo.\n\tPresione cualquier otra tecla para continuar.\n");
	fflush(stdout);
	sal= getche();
	if((sal=='S')||(sal=='s')){
		goto out;
	}else if((sal=='C')||(sal=='c')){
		goto camb;
	}
	goto here;
	
	out:
	
	sleep(0);
}

