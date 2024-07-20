
/*
 * Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos
*/
#include <stdio.h>

int potenciarValores(int valor) {
	return valor * valor;
}

int lerValoresUser(const char* ordem) {
	int valorLocal;
	printf("Digite o %s valor: ", ordem);
	fflush(stdout);
	scanf("%d", &valorLocal);

	return valorLocal;
}

int main() {
	int valor1, valor2, valor3, recebeValor1, recebeValor2, recebeValor3, somaAoQuadrado;

	printf("Digite 3 números para ver a soma deles ao quadrado!!\n\n");

	valor1 = lerValoresUser("primeiro");
	valor2 = lerValoresUser("segundo");
	valor3 = lerValoresUser("terceiro");


	recebeValor1 = potenciarValores(valor1);
	recebeValor2 = potenciarValores(valor2);
	recebeValor3 = potenciarValores(valor3);

	somaAoQuadrado = recebeValor1 + recebeValor2 + recebeValor3;

	printf("A soma dos valores ao quadrado é %d.", somaAoQuadrado);


	return 0;
}
