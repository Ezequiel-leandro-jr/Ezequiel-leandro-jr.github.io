/* Programa que l� 2 valores A e B (inteiros) e informa se
A � divis�vel por B ou n�o. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	int a, b;
	
	printf("                         N�MEROS DIVIS�VEIS          \n\n\n\n");
	
	printf("Vo� vai atribuir valores para uma vari�vel A e B, respectivamente.");
	printf("\nEm seguida, saberemos se o valor de A e divis�vel pelo valor de B.\n\n\n");
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("\n\nDigite o valor de B: ");
	scanf("%d", &b);
	
	if(a % b == 0) 
	  printf("\n\n\n%d e divis�vel por %d\n\n\n", a, b);

	else
	  printf("\n\n\n%d n�o � divis�vel por %d\n\n\n", a, b);

	system("pause");
	
	
}