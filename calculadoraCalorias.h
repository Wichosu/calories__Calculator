#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initCal(double calorias[]){
	int i;
	for(i = 0; calorias[i] ; i++)
		calorias[i] = calorias[i] / 30;
}

void showArray(char* s[], int len){
	int i;
	for(i = 0; i < len; i++){
		printf("%d.- %s\n", i + 1, s[i]);
	}
}

int diasConRutina(char* dias[], char* diasElegidos[]){
	int i = 1, x = 0;
	printf("Selecciona los dias de la semana en los que realizas la actividad\npresiona 0 para ir a las actividades\n");
	showArray(dias,7);
	while(i > 0){
		scanf("%d",&i);
		//possible change in while structure if i != 0 do everything below scanf
		if(i == 0){
			break;
		}
		diasElegidos[x] = dias[i-1];
		if(*diasElegidos[x] != '\0'){
			printf("Dias Elegidos: %s\n", diasElegidos[x++]);
		}
	}
	return x--;
}
//Get the input for time and name of the exercise for each day. len - 1
int obtenerRutina(char* dia[], char* ejercicios[],int rutina[], int tiempo[], int dialen){
	int x = 0, rutinaux;
	int i;
	for(i = 0; i < dialen; i++){
		rutinaux = 1;
		printf("Selecciona los ejercios que realices el dia %s\n", dia[i]);
		while(rutinaux > 0){
			showArray(ejercicios, 19); //Linea problematica segment fault core dumped
			printf("Para indicar que terminaste tu seleccion ingresa 0\n");
			scanf("%d", &rutinaux);
			if(rutinaux > 0){
				rutina[x] = rutinaux - 1;
				printf("Ejercicio Seleccionado: %s\n", ejercicios[rutinaux-1]); // ejercicios es problematico
				printf("Por cuantos minutos va a realizar el ejercicio:\n");
				scanf("%d", &tiempo[x]);
				printf("Tiempo: %d minutos\n", tiempo[x++]);
			}
		}	
	}
	return x;
}

void calcularCalorias(double calorias[], int rutina[], int tiempo[], int len, double* quemadas){
	int i;
	for(i = 0; i < len; i++){
		*quemadas += (calorias[rutina[i]] * tiempo[i]);
	}
	*quemadas *= 4;
}
