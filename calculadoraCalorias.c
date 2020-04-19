#include <stdio.h>
#include <stdlib.h>
#include "calculadoraCalorias.h"

/*TODO: add random number to calorias array indexes 4, 15
 * 		length functions working only leaving length for the elements inside the array of pointers 
 * 		use sizeof(pointerarray) / sizeof(*ponterarray); 
 * 		DONE.Remember:Increse array size by 1 for '\0' to exist otherwise it seems to create a conflict for length function*/

int main(){
	//double calorias[19] = {178, 258, 150, 130, 150, 108, 249, 255, 314, 363, 270, 378, 315, 325, 210, 300, 250, 261, 93}, quemadas;
	//char* ejercicios[19] = {"Aerobic", "Baloncesto", "Bicicleta", "Bailar", "Jardineria", "Golf", "Hockey", "Montar Caballo", "Patinar sobre hielo", "Judo", "Montanierismo", "Remar",
							//"Patinar Sobre Ruedas", "Correr", "Bajar Escaleras", "Subir Escaleras", "Nadar", "Tenis", "Voleibol"};
	char* dias[8] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};	
	char* diasElegidos[8];			
	//int rutinaE[19], duracion[19], semanas[4];
	
	printf("Length: %d\n", length(dias));
	
	diasConRutina(dias, diasElegidos);
	
	for(int i = 0; i < (length(diasElegidos)); i++){
		printf("Length: %d\n", length(diasElegidos));
		printf("%s\n", diasElegidos[i]);
	}
	
	printf("Lenght: %d\n", length(diasElegidos));
	
	//obtenerRutina();
	
	//calcularCalorias();
	
	//CambiarRutinaSemanal();
	
	//printf("Quemaras %lf calorias con esa rutina\n", quemadas);
	
	return 0;
}
