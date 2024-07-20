/*
 Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/

#include <stdio.h>

int readInputUser(char order[20]) {
	int score;
	printf("Digite a %s nota: ", order);
	fflush(stdout);
	scanf("%d", &score);

	return score;
}

int main() {
	int score1, score2, score3, score4;
	float rate;
	const float SCORE_DIVISER = 4;

	score1 = readInputUser("primeira");
	score2 = readInputUser("segunda");
	score3 = readInputUser("terceira");
	score4 = readInputUser("quarta");
	rate = (score1 + score2 + score3 + score4) / SCORE_DIVISER;

	if (rate >= 60) {
		printf("Aprovado(a) com média %.1f!!", rate);
	} else {
		printf("Reprovado(a) com média %.1f!!", rate);
	}

	return 0;
}
