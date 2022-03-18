/* Programa que lê o número total de prestações de
um consórcio, o total de prestações pagas e o valor atual da
prestação. Por fim, calcula e apresenta o saldo
devedor atual e a quantidade de prestações sem pagar. */

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