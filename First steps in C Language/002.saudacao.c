/* Programa que l� o nome do usu�rio e escreve uma
frase de sauda��o, desejando um bom dia de trabalho para
o mesmo. O programa faz soar um sinal sonoro (beep) durante a sauda��o. */

#include <stdio.h>
#include <locale.h>

main() {
	
	// Libera o uso de acentua��o nos caracteres
	
	setlocale(LC_ALL,"Portuguese");
	
	// Declara��o das vari�veis
	
	char nome[40];
	
	// Imprime o pedido da entrada de dados ao usu�rio
	
	printf("Qual o seu nome?\n\n");
	fflush(stdin); // Limpa o cache referente a strings de caracteres
	gets(nome); // L� o dado fornecido pelo usu�rio
	
	// Imprime na tela o resultado
	
	printf("\n\nOl�, %s, tenha um �timo dia de trabalho!\a\n\n", nome); 
	
	// Pausa o sistema para que o usu�rio visualize o resultado do processamento feito pelo programa
	
	system("pause"); 
}
