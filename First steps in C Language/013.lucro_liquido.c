/* Programa que calcula e escreve: a média do consumo em km/l
e o lucro (líquido) do dia. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese"); 
	
	float kmi, kmf, lc, vt;
	#define PRECO 2.59 // Declaração de constante
	
	// Título do programa
	printf(".......CARRARA TÁXI.......\n\n");
	
	// Pede a quilometragem inicial
	printf("Quilometragem inicial: ");
	scanf("%f", &kmi);
	
	// Pede a quilometragem final
	printf("Quilometragem final: ");
	scanf("%f", &kmf);
	
	// Pede litros consumidos
	printf("Litros consumidos: ");
	scanf("%f", &lc);
	
	// Pede valor total arrecadado
	printf("Valor total arrecadado: ");
	scanf("%f", &vt);
	
	// Imprime a média do consumo do carro e o lucro líquido do dia
	printf("\n\nMÉDIA DO CONSUMO DO CARRO..........%.2f Km/l\n", (kmf-kmi) / lc);
	printf("LUCRO LÍQUIDO DO DIA...............R$ %.2f\n", vt - (lc * PRECO));
	
	
	getche();
	
	
}