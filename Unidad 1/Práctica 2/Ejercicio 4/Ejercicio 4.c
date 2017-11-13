#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num_productos,seleccion,i;
	float total=0;
	char letra;
	
	system("COLOR F0");
	
	printf("\t\t\t\tEjercicio 4\n\n");
	printf("\t\t\t     Menu de Cafeteria\n\n");
	system("PAUSE");
	system("cls");
	
	printf("MENU:\n");
	printf("---------------------------------------------------------------------------\n\n");
	printf("    1. Hamburguesa chica con papas y refresco\t\t\t\t$20\n");
	printf("    2. Hotdog y refresco\t\t\t\t\t\t$18\n");
	printf("    3. Ensalada rusa\t\t\t\t\t\t\t$15\n\n\n");
	
	printf("Ingrese la cantidad de productos que quiera comprar: ");
	scanf ("%d",&num_productos);
	printf("\n");
	
	for(i=0;i<num_productos;i=i){
		printf("\nIngrese el numero del producto %d que desea comprar: ",(i+1));
		scanf ("%d",&seleccion);
		switch (seleccion){
			case 1:
				total=total+20;
				i++;
			break;
			case 2:
				total=total+18;
				i++;
			break;
			case 3:
				total=total+15;
				i++;
			break;
		}
	}
		
	printf("\n\nTotal: $%.2f",total);

	printf("\n\n");
	system("PAUSE");
	return 0;
}
