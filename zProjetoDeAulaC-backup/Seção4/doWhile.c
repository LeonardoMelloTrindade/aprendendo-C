#include <stdio.h>

int userTypeSomador() {
	int somadorLocal;
	printf("Digitar o valor 0 interromperá o programa.\n");
	printf("Digite um valor para ser somado: ");
	fflush(stdout);
	scanf("%d", &somadorLocal);
	return somadorLocal;
};

int main() {
	int somador, soma = 0;

	do {
		somador = userTypeSomador();

		if(somador == 0) {
			printf("\nO valor digitado foi 0, o programa será encerrado.");
		} else {
			soma = soma + somador;
			printf("aq");
		}
	}
	while(somador != 0);
	printf("\nO somador total foi %d.", soma);

	return  0;
}
