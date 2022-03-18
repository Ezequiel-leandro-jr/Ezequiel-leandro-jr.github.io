/* Programa para um caixa eletrônico, que lê o valor
que o cliente quer sacar e calcula o menor número possível de
notas de 100,00, 50, 20 e 10 reais em que o valor lido pode ser
decomposto. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int valor, duz, cem, cin, vin, dez, resto1, resto2, resto3, resto4;
	
	// Título do programa
	printf(".................. CAIXA ELETRONICO ..................\n\n");
	
	// Pede o valor do saque
	printf("Digite o valor que deseja sacar\nAtencao! digite apenas numeros multiplos de 10.\n");
	scanf("%d", &valor);
	
	// Imprime o valor do saque
	printf("\n\nVALOR DO SAQUE: R$ %d", valor);
	
	// Cálculos da quantidade de notas a serem sacadas
	duz = valor / 200;
	resto1 = valor % 200;
	cem = resto1 / 100;
	resto2 = resto1 % 100;
	cin = resto2 / 50;
	resto3 = resto2 % 50;
	vin = resto3 / 20;
	resto4 = resto3 % 20;
	dez = resto4 / 10;
	
	// Imprime os resultados das notas
	printf("\nNOTAS DE R$ 200,00: %d", duz);
	printf("\nNOTAS DE R$ 100,00: %d", cem);
	printf("\nNOTAS DE R$ 50,00: %d", cin);
	printf("\nNOTAS DE R$ 20,00: %d", vin);
	printf("\nNOTAS DE R$ 10,00: %d", dez);
	
	getche();
	
}