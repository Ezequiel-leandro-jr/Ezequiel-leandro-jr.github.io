/* Programa que l� o n�mero total de presta��es de
um cons�rcio, o total de presta��es pagas e o valor atual da
presta��o. Por fim, calcula e apresenta o saldo
devedor atual e a quantidade de presta��es sem pagar. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	float total, pagas, valor, deve, nao;
	
	printf(".............CONSORCIO UNIVERSAL.............\n\n");
	
	printf("Digite o total de prestacoes do consorcio: ");
	scanf("%f", &total);
	
	printf("\nDigite o total de prestacoes pagas: ");
	scanf("%f", &pagas);
	
	printf("\nDigite o valor atual da prestacao: ");
	scanf("%f", &valor);
	
	deve = total * valor - pagas * valor;
	nao = total - pagas;
	
	printf("\n\nSALDO DEVEDOR ATUAL.......R$ %.2f.\n", deve);
	printf("\n\nPRESTACOES NAO PAGAS......%.0f PARCELAS.\n\n", nao);
	
	getche();
}