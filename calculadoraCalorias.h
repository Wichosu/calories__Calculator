#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char* s[]){
	int i;
	for(i = 0; *s++; i++);
	return i;
}

void showArray(char* s[], int len){
	for(int i = 0; i < len; i++)
		printf("%d.- %s\n", i + 1, s[i]);
}

void eraseString(char* str[], int len, int position){
	int i;
	for(i = position; i < len - 1; i++)
		str[i] = str[i+1];
	str[i] = 0;
}

int diasConRutina(char* dias[], char* diasElegidos[]){
	int i = 1, x = 0;
	printf("Selecciona los dias de la semana en los que realizas la actividad\npresiona 0 para ir a las actividades\n");
	showArray(dias,7);
	while(i > 0){
		scanf("%d",&i);
		if(i == 0){
			break;
		}
		diasElegidos[x] = dias[i-1];
		if(*diasElegidos[x] != '\0'){
			printf("El Valor de x es %d\n", x);
			printf("Dias Elegidos: %s\n", diasElegidos[x++]);
		}
	}
	return x--;
}
//Get the input for time and name of the exercise for each day. len - 1
void obtenerRutina(char* dia[], char* ejercicios[], int tiempo[], int dialen){
	printf("Si llego");
	for(int i = 0; i < dialen; i++){
		printf("Selecciona los ejercios que realices el dia %s\n", dia[i]);
		showArray(ejercicios, 19);
	}
}

