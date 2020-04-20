#include <stdio.h>
#include <stdlib.h>
#include "calculadoraCalorias.h"

/*TODO: add random number to calorias array indexes 4, 15
 * 		length functions working only leaving length for the elements inside the array of pointers 
 * 		use sizeof(pointerarray) / sizeof(*ponterarray); 
 * 		
 * 	DONE.Remember:Increse array size by 1 for '\0' to exist otherwise it seems to create a conflict for length function*/

int main(){
	double calorias[19] = {178, 258, 150, 130, 150, 108, 249, 255, 314, 363, 270, 378, 315, 325, 210, 300, 250, 261, 93};
	char* ejercicios[] = {"Aerobic", "Baloncesto", "Bicicleta", "Bailar", "Jardineria", "Golf", "Hockey", "Montar Caballo", "Patinar sobre hielo", "Judo", "Montanierismo", "Remar", "Patinar Sobre Ruedas", "Correr", "Bajar Escaleras", "Subir Escaleras", "Nadar", "Tenis", "Voleibol", 0};
	char* dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo", 0};	
	char* diasElegidos[8];
	double quemadas = 0;
	int diasELen, lenrd;			
	int rutinaE[19];
	int duracion[19];
	//int semanas[4];
	//valores inicializados en calorias/minuto
	initCal(calorias);
		
	diasELen = diasConRutina(dias, diasElegidos);
	
	lenrd = obtenerRutina(diasElegidos,ejercicios, rutinaE, duracion,diasELen);
	
	calcularCalorias(calorias, rutinaE, duracion, lenrd, &quemadas);
	
	//CambiarRutinaSemanal();
	
	printf("Quemaras %.2lf calorias con esa rutina\n", quemadas);
	
	return 0;
}
