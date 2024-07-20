/*
 * Leia um número e imprima o resultado do quadrado deste número.
 */

#include <stdio.h>

int main(){
	int valor1, valorAoQuadrado;

	printf("Digite um valor: ");
	fflush(stdout);
	scanf("%d", &valor1);
	//valorAoQuadrado = pow(valor1, 2);
	valorAoQuadrado = valor1 * valor1;
	printf("O quadrado de %d é %d.", valor1, valorAoQuadrado);

	return 0;
}

