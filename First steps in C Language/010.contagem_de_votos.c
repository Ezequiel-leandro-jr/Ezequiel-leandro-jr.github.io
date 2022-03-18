/* Programa para ler o número de votos brancos, nulos
e válidos de uma eleição. Ao fim, calcula e escreve o percentual que
cada um representa em relação ao total de eleitores. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese"); 
	
	float total_eleitores, votos_validos, votos_brancos, votos_nulos;
	
	printf("PORCENTAGEM DE VOTOS\n\n");
	
	printf("Digite o número total de eleitores: ");
	scanf("%f", &total_eleitores);
	
	printf("\nDigite o total de VOTOS VÁLIDOS: ");
	scanf("%f", &votos_validos);
	
	printf("\nDigite o total de VOTOS BRANCOS: ");
	scanf("%f", &votos_brancos);
	
	printf("\nDigite o total de VOTOS NULOS: ");
	scanf("%f", &votos_nulos);
	
	printf("\n\nO percentual de VOTOS VÁLIDOS foi de %.2f %%.\n\n", votos_validos * 100 / total_eleitores);
	printf("\n\nO percentual de VOTOS BRANCOS foi de %.2f %%.\n\n", votos_brancos * 100 / total_eleitores);
	printf("\n\nO percentual de VOTOS NULOS foi de %.2f %%.\n\n", votos_nulos * 100 / total_eleitores);
	
	getche();
	
	
	
}