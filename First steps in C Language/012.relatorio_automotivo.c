/* Programa que imprime o seguinte
Relat�rio: dist�ncia percorrida, Valor total gasto e o consumo do
carro(quantos quil�metros percorre com 1 litro de combust�vel). */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	float kmi, kmf, lc, pl;
	
	// T�tulo do programa
	printf(".......RELAT�RIO AUTOMOTIVO.......\n\n");
	
	// Pede a quilometragem inicial
	printf("Quilometragem inicial: ");
	scanf("%f", &kmi);
	
	// Pede a quilometragem final
	printf("Quilometragem final: ");
	scanf("%f", &kmf);
	
	// Pede os litros consumidos
	printf("Litros consumidos: ");
	scanf("%f", &lc);
	
	// Pede o pre�o do litro de combust�vel
	printf("pre�o do litro de combust�vel: ");
	scanf("%f", &pl);
	
	// Imprime: Dist�ncia percorrida, valor total gasto e consumo do carro
	printf("\n\nDIST�NCIA PERCORRIDA......%.2f Km.\n", kmf - kmi);
	printf("VALOR TOTAL GASTO.........R$ %.2f.\n", pl * lc);
	printf("CONSUMO DO CARRO..........%.2f Km/l\n\n", (kmf-kmi) / lc);
	
	getche();
	
	
}