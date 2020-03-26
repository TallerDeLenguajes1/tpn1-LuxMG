#include <stdio.h>

int main(){
	int variable = 1;
	int *pVar;
	pVar = &variable;
	
	printf("Contenido del puntero: %d",*pVar);
	printf("Direccion de memoria almacenada por el puntero: %p",pVar);
	printf("Direccion de memoria de la variable: %p",&variable);
	printf("Direccion de memoria del puntero: %p",&pVar);
	printf("Tamaño de memoria usado por la variable: %d bytes",sizeof(variable));
	
	return 0;
}
