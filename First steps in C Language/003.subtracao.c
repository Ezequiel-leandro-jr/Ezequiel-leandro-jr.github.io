/* Programa que l� dois n�meros inteiros A e B e
imprime o resultado da subtra��o de A por B sob o seguinte formato: 
�6 � 2 = 4�. */

#include <stdio.h>
#include <locale.h>

main(){
	
	// Permite a acentua��o dos caracteres
	
	setlocale(LC_ALL,"Portuguese");
	
	// Declara��o das vari�veis
	
	int A , B, R;
	
	// Imprime o t�tulo do programa
	
	printf("SUBTRA��O ENTRE DOIS N�MEROS INTEIROS\n\n\n");
	
	// Imprime o pedido da entrada de dados e l� o dado fornecido pelo usu�rio
	
	printf("Digite o primeiro n�mero inteiro: ");
	scanf("%d", &A);
	
	// Imprime o pr�ximo pedido da entrada de dados e l� o dado fornecido pelo usu�rio
	
	printf("Digite o segundo n�mero inteiro: ");
	scanf("%d", &B);
	
	// Atribui��o do resultado da subtra��o entre as vari�veis A e B na vari�vel R
	
	R = A - B;
	
	// Imprime o resultado na tela
	
	printf("\n%d - %d = %d\n\n", A, B, R);
	
	// Pausa do sistema
	
	system("pause");
}   