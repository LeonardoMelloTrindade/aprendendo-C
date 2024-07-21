#include <stdio.h>

/*
 * 1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa
deve executar os seguintes passos:
a) Atribula os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
b) Armazene em uma variável inteira simples a soma entre os valores das posições A[0], A[1] e A[5] do vetor
e mostre na tela esta soma;
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100;
d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

int main() {
	int vetor[6] = {1, 0, 5, -2, -5, 7}, acumulador = 0;

	for(int index = 0; index < 6; index++) {
		if(index == 0 || index == 1 || index == 4) {
			acumulador += vetor[index];
		}
	}
	printf("A soma entre as posicões 0, 1 e 5 do vetor é %d\n", acumulador);

	vetor[4] = 100;

	for(int index = 0; index < 6; index++) {
		printf("Posição %d do vetor vale %d\n", index, vetor[index]);
	}

	return 0;
}
