#include <stdio.h>

/*
 *Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números
maiores que 0.
*/

int main() {

	const int MULTIPLICADOR = 3;

	for(int index = 1; index < 6; index++) {
		int value = index * MULTIPLO;
		printf("%d x %d = %d\n", MULTIPLICADOR, index, value);
	}

	return 0;
}
