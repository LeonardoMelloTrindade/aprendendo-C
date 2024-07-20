#include <stdio.h>

int main() {
	float notas[3], media, totalNotas;

	for(int index = 0; index <= 2;index++) {
		printf("Digite a %dª nota: ", index + 1);
		fflush(stdout);
		scanf("%f", &notas[index]);

		totalNotas += notas[index];

		if(index == 2) {
			for(int indexNota = 1; indexNota<= 3;indexNota++){
				media = totalNotas / (index + 1);
			}
		}
	}
	printf("\nA média é %.1f", media);

	return 0;
}
