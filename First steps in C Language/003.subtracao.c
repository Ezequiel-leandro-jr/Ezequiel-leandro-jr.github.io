/* Programa que lê dois números inteiros A e B e
imprime o resultado da subtração de A por B sob o seguinte formato: 
“6 – 2 = 4”. */

#include <stdio.h>
#include <locale.h>

main(){
	
	// Permite a acentuação dos caracteres
	
	setlocale(LC_ALL,"Portuguese");
	
	// Declaração das variáveis
	
	int A , B, R;
	
	// Imprime o título do programa
	
	printf("SUBTRAÇÃO ENTRE DOIS NÚMEROS INTEIROS\n\n\n");
	
	// Imprime o pedido da entrada de dados e lê o dado fornecido pelo usuário
	
	printf("Digite o primeiro número inteiro: ");
	scanf("%d", &A);
	
	// Imprime o próximo pedido da entrada de dados e lê o dado fornecido pelo usuário
	
	printf("Digite o segundo número inteiro: ");
	scanf("%d", &B);
	
	// Atribuição do resultado da subtração entre as variáveis A e B na variável R
	
	R = A - B;
	
	// Imprime o resultado na tela
	
	printf("\n%d - %d = %d\n\n", A, B, R);
	
	// Pausa do sistema
	
	system("pause");
}   