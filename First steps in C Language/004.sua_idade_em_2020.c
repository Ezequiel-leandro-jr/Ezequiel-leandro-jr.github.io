/* Programa que l� o nome do usu�rio e a sua idade e
imprime quantos anos ele tinha em 2020 no formato deste exemplo: 
�Carlos, em 2020 voc� estava com 45 anos� */

#include <stdio.h>
#include <locale.h>

 main(){
 	
 	// Permite a acentua��o dos caracteres
    setlocale(LC_ALL,"Portuguese");
    
    // Declara��o das vari�veis
    
	int idade, ano, hoje;
	char nome[40];
	
	// Imprime o t�tulo do programa
	
	printf("SUA IDADE EM 2020\n\n\n");
	
	// Imprime o pedido de entrada de dados, e faz a leitura do dado fornecido pelo usu�rio
	
	printf("Qual o seu nome?\n");
	fflush(stdin); // Limpa o cache referente a string de caracteres
	gets(nome); // L� o dado fornecido pelo usu�rio
	
	// Imprime o pedido da segunda entrada de dados, e faz a leitura do dado fornecido pelo usu�rio
	
	printf("\nQuantos anos voc� completa neste ano?\n");
	scanf("%d", &idade);
	
	// Imprime o pedido da terceira entrada de dados, e faz a leitura do dado fornecido pelo usu�rio
	
	printf("\nEm que ano estamos?\n");
	scanf("%d", &hoje);
	
	// Atribui��o do resultado do processamento dos dados para a vari�vel 'ano'
	
	ano = idade-(hoje-2020);
	
	// Imprime o resultado na tela
	
	printf("\n%s, em 2020 voc� estava com %d anos.\n\n", nome, ano);
	
	// Pausa no sistema
	
	system("pause");
		
}