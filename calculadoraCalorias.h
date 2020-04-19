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

void diasConRutina(char* dias[], char* diasElegidos[]){
	char auxString[14];
	int i = 0;
	printf("Selecciona los dias de la semana en los que realizas la actividad\n");
	printf("Ejemplo: 1,5,7 asegurate de separarlos con una ',' y no dejar espacios\n");
	mostrarDias(dias);
	scanf("%s",auxString);
	char* tok = strtok(auxString, ",");
	while(tok != NULL){
		diasElegidos[i++] = dias[atoi(tok)-1];
		tok = strtok(NULL, ",");
	}
}

