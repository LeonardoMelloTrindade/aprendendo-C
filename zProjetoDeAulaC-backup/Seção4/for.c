#include <stdio.h>

float userTypeNota(int  indexNota) {
	float somadorLocal;
	printf("Digite a %d nota (0 - 10): ", indexNota);
	fflush(stdout);
	scanf("%f", &somadorLocal);
	return somadorLocal;
};

int main() {
	float notas = 0, media;
	const int DIVISOR_NOTAS = 3;

	for(int index = 1; index != 4; index++) {
		float nota = userTypeNota(index);
		notas = notas + nota;

		if (index == 3) {
			media = notas / DIVISOR_NOTAS;
		}
	}
	printf("\nA média é %.1f", media);

	return  0;
}
