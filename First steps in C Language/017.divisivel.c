/* Programa que lê 2 valores A e B (inteiros) e informa se
A é divisível por B ou não. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	int a, b;
	
	printf("                         NÚMEROS DIVISÍVEIS          \n\n\n\n");
	
	printf("Voê vai atribuir valores para uma variável A e B, respectivamente.");
	printf("\nEm seguida, saberemos se o valor de A e divisível pelo valor de B.\n\n\n");
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("\n\nDigite o valor de B: ");
	scanf("%d", &b);
	
	if(a % b == 0) 
	  printf("\n\n\n%d e divisível por %d\n\n\n", a, b);

	else
	  printf("\n\n\n%d não é divisível por %d\n\n\n", a, b);

	system("pause");
	
	
}