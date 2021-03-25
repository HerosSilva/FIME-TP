#include <stdio.h>
#include<windows.h>

int main(){
	int repetir, repetir_orden, platillo, bebida, cantidad_platillo, cantidad_bebida;
	float precio_platillo, precio_bebida, IVA, suma_platillo = 0,suma_bebida = 0, precio_final;
	char nombre_cliente[50];
	const float IVA_const = 0.1379310344827586;
	
	do{
		system("cls");
		
		printf("----Restaurante La Toscana----\n");
		printf("Le atiende Heros Silva \n");
		
		printf("----Menu de Platillos---- \n");
		printf("1. Pizza estilo italiana... $90 \n");
		printf("2. Lasagna... $120 \n");
		printf("3. Spaghetti... $40 \n");
		printf("4. Risotto... $150 \n");
		printf("5. Caprese... $120 \n");
		
		printf("\n");
		
		printf("----Menu de Bebidas---- \n");
		printf("1. Coca Cola... $15 \n");
		printf("2. Fanta... $15 \n");
		printf("3. Tecate... $25 \n");
		printf("4. Amstel Ultra... $30 \n");
		printf("5. Limonada... $12 \n");
		
		printf("\n");
		
		printf("Ingrese su nombre... \n");
		scanf("%[^\n]", &nombre_cliente);
		
		do{

			printf("Ingrese el platillo deseado (1-5)... \n");
			scanf("%i", &platillo);
			printf("Escriba la cantidad deseada del platillo... \n");
			scanf("%i", &cantidad_platillo);
			printf("Ingrese la bebida deseada (1-5)... \n");
			scanf("%i", &bebida);
			printf("Escriba la cantidad deseada de la bebida... \n");
			scanf("%i", &cantidad_bebida);
			
			//platillos
		
		
			switch(platillo){
				case 1:
					suma_platillo = suma_platillo + 90 * cantidad_platillo;
					printf("Pizza estilo italiana\n");
					break;
					
				case 2:
					suma_platillo = suma_platillo + 120 * cantidad_platillo;
					printf("Lasagna\n");
					break;
					
				case 3:
					suma_platillo = suma_platillo + 40 * cantidad_platillo;
					printf("Spaghetti\n");
					break;
					
				case 4:
					suma_platillo = suma_platillo + 150 * cantidad_platillo;
					printf("Risotto\n");
					break;
					
				case 5:
					suma_platillo = suma_platillo + 120 * cantidad_platillo;
					printf("Caprese\n");
					break;
					
				default:
					printf("No existe el platillo solicitado\n");
					break;	
			}
		
			//bebidas
			switch(bebida){
				case 1:
					suma_bebida = suma_bebida + 15 * cantidad_bebida;
					printf("Coca Cola\n");
					break;
					
				case 2:
					suma_bebida = suma_bebida + 15 * cantidad_bebida;
					printf("Fanta\n");
					break;
					
				case 3:
					suma_bebida = suma_bebida + 25 * cantidad_bebida;
					printf("Tecate\n");
					break;
					
				case 4:
					suma_bebida = suma_bebida + 30 * cantidad_bebida;
					printf("Amstel Ultra\n");
					break;
					
				case 5:
					suma_bebida = suma_bebida + 12 * cantidad_bebida;
					printf("Limonada\n");
					break;
					
				default:
					printf("No existe la bebida solicitada \n");
					break;
			}
			
			printf("Desea ordenar otro platillo? 1. Si 2. No\n");
			scanf("%i", &repetir_orden);
			
		}while(repetir_orden == 1);
		
		precio_final = suma_platillo + suma_bebida;
		IVA = precio_final * IVA_const;
		
		printf("Cliente: %s \n", nombre_cliente);
		printf("Total a pagar: %.2f \n", precio_final);
		printf("IVA: %.2f \n", IVA);
		
		printf("Tomar otra orden? 1. Si 2. No \n");
		scanf("%i", &repetir);
	}while(repetir == 1);
}
