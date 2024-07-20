/*
 * Peça ao usuário para digitar três valores inteiros e imprima a soma deles
 */

#include <stdio.h>

int main() {
	int valor1, valor2, valor3, somaAll;

	//Pegando o primeiro valor
	printf("Digite o primeiro valor: ");
	fflush(stdout);
	scanf("%d", &valor1);

	//Pegando o segundo valor
	printf("Digite o segundo valor: ");
	fflush(stdout);
	scanf("%d", &valor2);

	//Pegando o terceiro valor
	printf("Digite o terceiro valor: ");
	fflush(stdout);
	scanf("%d", &valor3);

	//Somando os 3 valores
	somaAll = valor1 + valor2 + valor3;

	printf("\nA soma de (%d + %d + %d) é igual a %d.", valor1, valor2, valor3, somaAll);

	return 0;
}
