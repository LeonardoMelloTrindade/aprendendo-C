#include <stdio.h>

int main() {
	int idade;
	float renda;

	printf("Qual a sua idade? ");
	fflush(stdout);
	scanf("%d", &idade);

	printf("Qual sua renda mensal? ");
	fflush(stdout);
	scanf("%f", &renda);

	/*
	if (idade > 18 && renda > 5000) {
		printf("Parabéns, você é um burguês esforçado");
	} else if (idade > 18 && renda < 2000) {
		printf("Opa, você pode melhorar");
	} else if (idade < 18 && renda > 5000) {
		printf("Poha, nasceu de cu pra Lua");
	} else if (idade < 18 && renda < 2000) {
		printf("Vai ter que trabalhar meno.");
	} else {
		printf("Tente novamente.");
	}
	*/

	if (idade >= 20) {
		if (renda < 2500) {
			printf("Opa, você pode melhorar.");
		} else if (renda >= 2500 ) {
			printf("Parabéns, você é um burguês esforçado.");
		} else {
			printf("Tente novamente. Erro bloco >= 20.");
		}
	} else if (idade < 20) {
		if (renda < 2500) {
			printf("Vai ter que ralar meno.");
		} else if (renda >= 2500 ) {
			printf("Poha, nasceu de cu pra Lua.");
		} else {
			printf("Tente novamente. Erro bloco < 20.");
		}
	} else {
		printf("Tente novamente.");
	}

	return 0;
}
