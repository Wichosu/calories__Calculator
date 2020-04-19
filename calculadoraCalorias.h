#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char* s[]){
	int i;
	for(i = 0; *s++; i++);
	return i;
}

void mostrarDias(char* dias[]){
	for(int i = 0; i < 7; i++)
		printf("%d.- %s\n", i + 1, dias[i]);
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
	mostrarDias(dias);
	while(i > 0){
		scanf("%d",&i);
		diasElegidos[x] = dias[i-1];
		if(*diasElegidos[x] != '\0'){
			printf("Dias Elegidos: %s\n", diasElegidos[x++]);
		}
	}
	return x--;
}

