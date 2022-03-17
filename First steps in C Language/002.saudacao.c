/* Programa que lê o nome do usuário e escreve uma
frase de saudação, desejando um bom dia de trabalho para
o mesmo. O programa faz soar um sinal sonoro (beep) durante a saudação. */

#include <stdio.h>
#include <locale.h>

main() {
	
	// Libera o uso de acentuação nos caracteres
	
	setlocale(LC_ALL,"Portuguese");
	
	// Declaração das variáveis
	
	char nome[40];
	
	// Imprime o pedido da entrada de dados ao usuário
	
	printf("Qual o seu nome?\n\n");
	fflush(stdin); // Limpa o cache referente a strings de caracteres
	gets(nome); // Lê o dado fornecido pelo usuário
	
	// Imprime na tela o resultado
	
	printf("\n\nOlá, %s, tenha um ótimo dia de trabalho!\a\n\n", nome); 
	
	// Pausa o sistema para que o usuário visualize o resultado do processamento feito pelo programa
	
	system("pause"); 
}
