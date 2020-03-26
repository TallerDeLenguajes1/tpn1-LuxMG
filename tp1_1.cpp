#include <stdio.h>

int main(){
	int variable = 1;
	int *pVar;
	pVar = &variable;
	
	printf("Contenido del puntero: %d",*pVar);
	printf("\nDireccion de memoria almacenada por el puntero: %p",pVar);
	printf("\nDireccion de memoria de la variable: %p",&variable);
	printf("\nDireccion de memoria del puntero: %p",&pVar);
	printf("\nTamaño de memoria usado por la variable: %d bytes",sizeof(variable));
	
	return 0;
}
