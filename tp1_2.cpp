#include<stdio.h>

int cuadrado(int a);
void cuadradoV(int a, int *cuadrado);
void mostrar(int var);
void invertir(int *a, int *b);
void ordenar (int *a, int *b);

//---------------------------------------
int main(){
	/* Todo esto sirvió para probar que el código de las funciones funcionara correctamente
	int numero = 3, cuad, numero2 = 5;
	
	cuad = cuadrado(numero);
	printf("Usando la funcion cuadrado: %d\n",cuad);
	printf("\n");
	
	cuad = 0;
	cuadradoV(numero,&cuad);
	printf("Usando la funcion cuadrado void: %d\n",cuad);
	printf("\n");
	
	mostrar(numero);
	printf("\n");
	
	printf("Antes de invertir:\nNumero a: %d\nNumero b: %d\n",numero,numero2);
	printf("\n");
	invertir(&numero,&numero2);
	printf("Despues de invertir:\nNumero a: %d\nNumero b: %d\n",numero,numero2);
	printf("\n");
	
	numero = 2; numero2 = -9;
	printf("Antes de ordenar:\nNumero 1: %d\nNumero 2: %d\n",numero,numero2);
	printf("\n");
	ordenar(&numero,&numero2);
	printf("Despues de ordenar:\nNumero 1(menor): %d\nNumero 2(mayor): %d\n",numero,numero2);
	printf("\n");
	*/
	
	printf("Ingrese pares de valores separados por un espacio, si desea finalizar, ingrese ambos como 0\n\n");
	int a,b;
	
	do{
		scanf("%d %d",&a,&b);
		ordenar(&a,&b);
		printf("%d %d\n\n",a,b);
	}while(a != 0 && b != 0); //coloqué una condicion simplemente para que hubiese una forma de terminar el programa
	
	return 0;
}
//---------------------------------------

// punto 3.a
int cuadrado(int a){
	return a*a;
}

// punto 3.b
void cuadradoV(int a, int *cuadrado){
	*cuadrado = a*a;
	//supuse que como era una funcion void querian que se trabajase con punteros
	//sino, seria con un printf
}

// punto 3.c
void mostrar(int var){
	printf("Direccion de la variable: %p\n",&var);
	printf("Contenido de la variable: %d\n",var);
}

// punto 3.d
void invertir(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

// punto 3.e
void ordenar(int *a, int *b){
	//en a debe quedar el menor y en b el mayor
	if(*a > *b){
		invertir(a,b);
	}
}
