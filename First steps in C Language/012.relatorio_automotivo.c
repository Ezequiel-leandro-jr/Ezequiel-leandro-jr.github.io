/* Programa que imprime o seguinte
Relatório: distância percorrida, Valor total gasto e o consumo do
carro(quantos quilômetros percorre com 1 litro de combustível). */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	float kmi, kmf, lc, pl;
	
	// Título do programa
	printf(".......RELATÓRIO AUTOMOTIVO.......\n\n");
	
	// Pede a quilometragem inicial
	printf("Quilometragem inicial: ");
	scanf("%f", &kmi);
	
	// Pede a quilometragem final
	printf("Quilometragem final: ");
	scanf("%f", &kmf);
	
	// Pede os litros consumidos
	printf("Litros consumidos: ");
	scanf("%f", &lc);
	
	// Pede o preço do litro de combustível
	printf("preço do litro de combustível: ");
	scanf("%f", &pl);
	
	// Imprime: Distância percorrida, valor total gasto e consumo do carro
	printf("\n\nDISTÂNCIA PERCORRIDA......%.2f Km.\n", kmf - kmi);
	printf("VALOR TOTAL GASTO.........R$ %.2f.\n", pl * lc);
	printf("CONSUMO DO CARRO..........%.2f Km/l\n\n", (kmf-kmi) / lc);
	
	getche();
	
	
}