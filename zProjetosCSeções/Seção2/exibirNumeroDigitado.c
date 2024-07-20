/*
 *  Faça um programa que leia um número inteiro e o imprima
 */

#include <stdio.h>

int main() {
	int numero1;
	printf("Digite um número: ");
	fflush(stdout);
	scanf("%d", &numero1);
	printf("O número digitado foi %d!!", numero1);
}
