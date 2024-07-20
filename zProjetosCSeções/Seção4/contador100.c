#include <stdio.h>

/*
Escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo
seu valor na tela, até que seu valor seja 100000 (cem mil).
*/

int main() {
	int contador =0;

	do{
		printf("Contador = %d\n", contador);
		contador += 100;
	} while(contador <= 100000);

	return 0;
}
