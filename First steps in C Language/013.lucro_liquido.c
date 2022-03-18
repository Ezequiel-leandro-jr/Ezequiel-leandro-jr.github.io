/* Programa que calcula e escreve: a m�dia do consumo em km/l
e o lucro (l�quido) do dia. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese"); 
	
	float kmi, kmf, lc, vt;
	#define PRECO 2.59 // Declara��o de constante
	
	// T�tulo do programa
	printf(".......CARRARA T�XI.......\n\n");
	
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
	
	// Imprime a m�dia do consumo do carro e o lucro l�quido do dia
	printf("\n\nM�DIA DO CONSUMO DO CARRO..........%.2f Km/l\n", (kmf-kmi) / lc);
	printf("LUCRO L�QUIDO DO DIA...............R$ %.2f\n", vt - (lc * PRECO));
	
	
	getche();
	
	
}