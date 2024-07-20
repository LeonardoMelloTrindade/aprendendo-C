#include <stdio.h>

int main() {
	const float LIMITE_CREDITO_INICIAL = 1000, FATURA_CREDITO_INICIAL = 0, VALOR_POUPANCA_SALDO_INICIAL = 0;
	float saldoConta, compra, poupanca, inserirValorConta = VALOR_POUPANCA_SALDO_INICIAL, inserirValorPoupanca = VALOR_POUPANCA_SALDO_INICIAL, faturaCredito = FATURA_CREDITO_INICIAL, limiteCreditoDisponivel = LIMITE_CREDITO_INICIAL;
	int encerrarPrograma = 1, operacao;
	char nome[30];

	printf("===== PREENCHA OS DADOS ABAIXO: ");
	printf("\nQual seu nome? ");
	fflush(stdout);
	gets(nome);
	printf("\nQual o saldo inicial da conta? ");
	fflush(stdout);
	scanf("%f", &saldoConta);

	while(encerrarPrograma != 0) {
		printf("\nAs seguintes operações são disponíveis: "
				"\nVer saldo: 1"
				"\nVer fatura de crédito: 2"
				"\nVer limite de crédito: 3"
				"\nCompra usando débito: 4"
				"\nCompra usando crédito: 5"
				"\nPagar fatura: 6"
				"\nGuardar dinheiro na poupança: 7"
				"\nColocar dinheiro na conta: 8"
				"\nEncerrar programa: 0"
				"\nQual operação deseja? ");
		fflush(stdout);
		scanf("%d",  &operacao);

		switch(operacao) {
			case 0:
				encerrarPrograma = 0;
				break;

			case 1:
				printf("\nO saldo da conta é R$%.2f\n", saldoConta);
				break;

			case 2:
				printf("\nA fatura de crédito da conta é R$%.2f\n", faturaCredito);
				break;

			case 3:
				printf("\nO limite total de crédito da conta de %s é %.2f\n", nome, limiteCreditoDisponivel);
				break;

			case 4:
				printf("\nQual o valor da compra? ");
				fflush(stdout);
				scanf("%f", &compra);

				if (saldoConta >= compra) {
					saldoConta = saldoConta - compra;
					limiteCreditoDisponivel += (limiteCreditoDisponivel * (100 / compra));
					printf("\nCompra de R$%.2f foi efetuada com sucesso.\n", compra);
				} else {
					printf("\nVocê não tem saldo suficiente para fazer a compra."
							"\nSaldo: R$%.2f"
							"\nCompra: R$%.2f\n", saldoConta, compra);
				}
				break;

			case 5:
				printf("\nQual o valor da compra? ");
				fflush(stdout);
				scanf("%f", &compra);

				if (limiteCreditoDisponivel >= compra) {
					faturaCredito = faturaCredito + compra;
					limiteCreditoDisponivel = limiteCreditoDisponivel - compra;
					printf("\nCompra de R$%.2f foi efetuada com sucesso.\n", compra);
				} else {
					printf("\nVocê não tem saldo suficiente para fazer a compra."
					"\nCrédito disponível: R$%.2f"
					"\nCompra: R$%.2f\n", limiteCreditoDisponivel, compra);
				}
				break;

			case 6:
				if (saldoConta >= faturaCredito) {
					saldoConta -= faturaCredito;
					faturaCredito = FATURA_CREDITO_INICIAL;
					limiteCreditoDisponivel = LIMITE_CREDITO_INICIAL;
					printf("\nFatura paga com sucesso!!\n");
				} else {
					printf("\nVocê não tem saldo suficiente para pagar a fatura.\n");
				}
				break;

			case 7:
				printf("\nQuanto você deseja guarda na poupança? ");
				fflush(stdout);
				scanf("%f", &inserirValorPoupanca);

				if(saldoConta <= inserirValorPoupanca) {
					poupanca += inserirValorPoupanca;
				} else {
					printf("\nVocê não tem saldo suficiente.\n");
				}
				break;

			case 8:
				printf("\nQual valor você vai colocar na conta? ");
				fflush(stdout);
				scanf("%f", &inserirValorConta);

				printf("O valor de R$.2f foi adionada ao saldo da sua conta.");
				saldoConta += inserirValorConta;
				break;
		}

	}

	return 0;
}
