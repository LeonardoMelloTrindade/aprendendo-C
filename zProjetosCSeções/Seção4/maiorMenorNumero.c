#include <stdio.h>

/*
 * Faça um programa que leia 10 números e escreva o maior e o menor valor lido.
*/

int main() {
	float userValue, menorNumero, maiorNumero;

	for(int index = 1; index != 11; index++) {
		printf("\nDigite o %d número: ", index);
		fflush(stdout);
		scanf("%f", &userValue);

		maiorNumero = index == 1 ? userValue : maiorNumero;
		menorNumero = index == 1 ? userValue : menorNumero;

		maiorNumero = userValue > maiorNumero ? userValue : maiorNumero;
		menorNumero = userValue < menorNumero ? userValue : menorNumero;
	}

	printf("\nMaior número digitado: %.1f", maiorNumero);
	printf("\nMenor número digitado: %.1f", menorNumero);

	return 0;
}
