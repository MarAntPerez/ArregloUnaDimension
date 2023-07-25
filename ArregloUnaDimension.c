#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int TAMANIO_ARREGLO = 5;
	const int INCREMENTO = 1;
	int array[TAMANIO_ARREGLO];
	int i;
	
	for(i = 0; i < TAMANIO_ARREGLO; i++){
		array[i] = i+INCREMENTO;
		//printf("%i", array[i]);
	}
	
	i = 0;
	
	for(i = 0; i < TAMANIO_ARREGLO; i++){
		printf("%i ", array[i]);
	}
	
	return 0;
}
