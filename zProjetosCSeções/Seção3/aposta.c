/*
Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao
valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador
apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido
*/
#include <stdio.h>

int main() {
	float bet1, porcentagem1,  bet2, porcentagem2, bet3, porcentagem3, totalBet, premio, betGanha1, betGanha2, betGanha3, totalBetGanha, totalPorcentagem  = 0;

	printf("Apostador 1, digite sua aposta: ");
	fflush(stdout);
	scanf("%f", &bet1);
	printf("Apostador 2, digite sua aposta: ");
	fflush(stdout);
	scanf("%f", &bet2);
	printf("Apostador 3, digite sua aposta: ");
	fflush(stdout);
	scanf("%f", &bet3);
	printf("Qual o valor do prêmio? ");
	fflush(stdout);
	scanf("%f", &premio);

	totalBet = (float) (bet1 + bet2 + bet3);
	printf("O valor total apostado foi %.2f\n", totalBet);

	porcentagem1 = (float) (bet1 / totalBet);
	porcentagem2 = (float) (bet2 / totalBet);
	porcentagem3 = (float) (bet3 / totalBet);
	totalPorcentagem = (float) (porcentagem1 + porcentagem2 + porcentagem3);
	printf("O total de porcentagens é %.2f\n", totalPorcentagem);

	betGanha1 = (float) (premio * porcentagem1);
	betGanha2 = (float) (premio * porcentagem2);
	betGanha3 = (float) (premio * porcentagem3);
	totalBetGanha = (float) (betGanha1 + betGanha2 + betGanha3);
	printf("O total de aposta ganha é %.2f\n", totalBetGanha);

	printf("Apostador 1 apostou R$%.2f que corresponde %.2f logo deverá ganhar R$%.2f\n", bet1, porcentagem1, betGanha1);
	printf("Apostador 2 apostou R$%.2f que corresponde %.2f logo deverá ganhar R$%.2f\n", bet2, porcentagem2, betGanha2);
	printf("Apostador 3 apostou R$%.2f que corresponde %.2f logo deverá ganhar R$%.2f", bet3, porcentagem3, betGanha3);

	return 0;
}
