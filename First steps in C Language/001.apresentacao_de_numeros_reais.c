/* Programa que lê dois números reais A e B e os
imprime na tela, com o valor da variável A apresentado
com duas casas decimais e o valor da variável B com três casas
decimais. */

#include <stdio.h>
#include <locale.h>

main() {
	
	// Permite o uso de acentuação dos caracteres
	
	setlocale(LC_ALL,"Portuguese"); 
	
	// Declaração das variáveis
	
	float A, B; 
	
	// Imprime o título do programa na tela
	
	printf("                          NÚMEROS REAIS\n\n"); 
	
	// Imprime o subtítulo do programa
	
	printf("Use o ponto para indicar as casas decimais ao invés da vírgula.\n\n\n"); 
	
	// Imprime a primeira operação a ser feita pelo usuário e lê o dado digitado
	
	printf("Digite um número real: "); 
	scanf("%f", &A); 
	
	// Imprime a segunda operação a ser feita pelo usuário e lê o dado digitado
	
	printf("Digite outro número real: "); 
	scanf("%f", &B); 
	
	//Imprime o resultado na tela
	
	printf("\n\nOs números digitados foram, respectivamente, %.2f e %.3f.", A, B); 
	
	// Permite que o programa não feche automaticamente após o segundo dado de entrada ser fornecido pelo usuário, dando possibilidade de visualização dos resultados
	
	getche(); 
	
}
