/* Programa que determina o peso ideal, utilizando as seguintes f�rmulas:
� para homens: (72.7*altura)-58
� para mulheres: (62.1*altura)-44.7 */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	float altura, peso;
	int genero;
	
	printf("PESO IDEAL\n\n\n\n");
	
	
	printf("Digite sua altura, em m, usando o ponto ao inv�s da v�rgula: ");
	scanf("%f", &altura);
	
	printf("\n\nSe voc� for homem, digite 1; se for mulher, digite 2\n");
	scanf("%d", &genero);
	
	switch (genero) {
		case 1: peso = (altura*72.7)-58; break;
		case 2: peso = (altura*62.1)-44.7; break;
		default: printf("\n\n\nG�nero inv�lido!"); break;
	}
	
	if ((genero>=1) && (genero<=2)) {
		printf("Seu peso ideal = %.1f", peso);
	}
	
	getche();
}
	
