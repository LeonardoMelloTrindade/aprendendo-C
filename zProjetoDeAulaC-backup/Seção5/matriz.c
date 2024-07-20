#include <stdio.h>

int main() {

	float notasAlunos[2][3], acumulador[2] = {0, 0}, media[2];

	printf("\nNOTAS DE 1 A 10, VALENDO 1 CASA DECIMAL\n\n");
	for(int index = 0; index < 2; index++) {
		for(int indexNota = 0; indexNota < 3; indexNota++) {
			printf("\nDigite a %dª nota do %d° aluno: ", indexNota + 1, index + 1);
			fflush(stdout);
			scanf("%f", &notasAlunos[index][indexNota]);

			acumulador[index] = acumulador[index] + notasAlunos[index][indexNota];
		}
	}

	for(int index = 0; index < 2; index++) {
		media[index] = acumulador[index] / 3;
		printf("\n\nMédia aluno %d: %.1f", index + 1, media[index]);
		if(media[index] < 6) {
			printf("\nREPROVADOO ANIMAL!!");
		} else {
			printf("\nAPROVADOOO !!!");
		}
	}

	return 0;
}
