/* Programa que lê um número inteiro e mostra uma
mensagem indicando se este número é par ou ímpar, e se é
positivo ou negativo. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	int a;
	
	// Título do programa
	printf("                         CARACTERIZAÇÃO DE UM NÚMERO INTEIRO\n\n\n\n");
	
	// Subtítulo
	printf("Voce ira digitar um numero inteiro e o programa dira se ele e par ou impar, positivo ou negativo.\n\n\n");
	
	// Pede um número inteiro
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	
	// Imprime o número digitado pelo usuário
	printf("\n\n\nO numero que voce escolheu foi o %d, ", a);
	
	// Sequência de if else que determina se o número é positivo ou negativo, ímpar ou par
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

