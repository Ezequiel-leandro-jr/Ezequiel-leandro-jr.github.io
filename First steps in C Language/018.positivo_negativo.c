/* Programa que l� um n�mero inteiro e mostra uma
mensagem indicando se este n�mero � par ou �mpar, e se �
positivo ou negativo. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	int a;
	
	// T�tulo do programa
	printf("                         CARACTERIZA��O DE UM N�MERO INTEIRO\n\n\n\n");
	
	// Subt�tulo
	printf("Voce ira digitar um numero inteiro e o programa dira se ele e par ou impar, positivo ou negativo.\n\n\n");
	
	// Pede um n�mero inteiro
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	
	// Imprime o n�mero digitado pelo usu�rio
	printf("\n\n\nO numero que voce escolheu foi o %d, ", a);
	
	// Sequ�ncia de if else que determina se o n�mero � positivo ou negativo, �mpar ou par
	if (a % 2 == 0) 
	  printf("um numero par e ");
	else
	  printf("um numero impar e ");
	
	if (a < 0) 
	  printf("negativo.");
	else
	  printf("positivo.");
	
	getche();
	
}

