/* Programa que lê o nome do usuário e a sua idade e
imprime quantos anos ele tinha em 2020 no formato deste exemplo: 
“Carlos, em 2020 você estava com 45 anos” */

#include <stdio.h>
#include <locale.h>

 main(){
 	
 	// Permite a acentuação dos caracteres
    setlocale(LC_ALL,"Portuguese");
    
    // Declaração das variáveis
    
	int idade, ano, hoje;
	char nome[40];
	
	// Imprime o título do programa
	
	printf("SUA IDADE EM 2020\n\n\n");
	
	// Imprime o pedido de entrada de dados, e faz a leitura do dado fornecido pelo usuário
	
	printf("Qual o seu nome?\n");
	fflush(stdin); // Limpa o cache referente a string de caracteres
	gets(nome); // Lê o dado fornecido pelo usuário
	
	// Imprime o pedido da segunda entrada de dados, e faz a leitura do dado fornecido pelo usuário
	
	printf("\nQuantos anos você completa neste ano?\n");
	scanf("%d", &idade);
	
	// Imprime o pedido da terceira entrada de dados, e faz a leitura do dado fornecido pelo usuário
	
	printf("\nEm que ano estamos?\n");
	scanf("%d", &hoje);
	
	// Atribuição do resultado do processamento dos dados para a variável 'ano'
	
	ano = idade-(hoje-2020);
	
	// Imprime o resultado na tela
	
	printf("\n%s, em 2020 você estava com %d anos.\n\n", nome, ano);
	
	// Pausa no sistema
	
	system("pause");
		
}