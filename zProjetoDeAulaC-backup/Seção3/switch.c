#include <stdio.h>

int main() {
	int valueUser;

	printf("Qual sua avaliação de (1 a 5) para o jogo Red Dead Redemption 2? ");
	fflush(stdout);
	scanf("%d", &valueUser);

	switch(valueUser) {
		case 1:
			printf("PROCURE UM MÉDICO");
			break;
		case 2:
			printf("Pelo menos não foi 1, mas mesmo assim, tu tem problema?");
			break;
		case 3:
			printf("Beleza, você tem gostos estranhos para dar 3.");
			break;
		case 4:
			printf("Muito bom, um pouco questionável mas sei que gostou");
			break;
		case 5:
			printf("Você entende dos games poha!!!");
			break;
		default:
			printf("Se você avaliou RDR2 com mais de 5, você é pica!!");
	}

	return 0;
}
