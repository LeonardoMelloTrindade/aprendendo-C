#include <stdio.h>

int main() {
	int vetor[10];

	for(int index = 0; index < 10; index++) {
		printf("\nDigite o %d° valor: ", index + 1);
		fflush(stdout);
		scanf("%d",&vetor[index]);

		if(vetor[index] < 0) {
			vetor[index] = 0;
		}
	}

	for(int index = 0; index < 10; index++) {
		printf("\nPosição %d: %d", index, vetor[index]);
	}


	return 0;
}
