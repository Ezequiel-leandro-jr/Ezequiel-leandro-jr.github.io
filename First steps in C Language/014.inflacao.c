/* Programa que lê os preços de uma mercadoria em
abril e maio e calcula a taxa de inflação. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	float pa, pm, valor;
	
	// Título do programa
	printf("......TAXA DE INFLAÇÃO......\n\n");
	
	// Subtítulo
	printf("OBS: você deverá usar o ponto ao invés da vírgula para digitar os preços!\n\n");
	
	// Pede o preço da mercadoria em Abril
	printf("Digite o preço da mercadoria em Abril: ");
	scanf("%f", &pa);
	
	// Pede o preço da mercadoria em Maio
	printf("\nDigite o preço da mercadoria em Maio: ");
	scanf("%f", &pm);
	
	// Cálculo referente à taxa da inflação
	valor = (pm * 100) / pa;
	
	// Imprime a taxa de inflação
	printf("\n\nA taxa de inflação foi de %.2f %%", valor - 100);
	
	getche();
	
	
	
}