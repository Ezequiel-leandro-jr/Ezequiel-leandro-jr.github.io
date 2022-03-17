/* Programa que l� dois n�meros reais A e B e os
imprime na tela, com o valor da vari�vel A apresentado
com duas casas decimais e o valor da vari�vel B com tr�s casas
decimais. */

#include <stdio.h>
#include <locale.h>

main() {
	
	// Permite o uso de acentua��o dos caracteres
	
	setlocale(LC_ALL,"Portuguese"); 
	
	// Declara��o das vari�veis
	
	float A, B; 
	
	// Imprime o t�tulo do programa na tela
	
	printf("                          N�MEROS REAIS\n\n"); 
	
	// Imprime o subt�tulo do programa
	
	printf("Use o ponto para indicar as casas decimais ao inv�s da v�rgula.\n\n\n"); 
	
	// Imprime a primeira opera��o a ser feita pelo usu�rio e l� o dado digitado
	
	printf("Digite um n�mero real: "); 
	scanf("%f", &A); 
	
	// Imprime a segunda opera��o a ser feita pelo usu�rio e l� o dado digitado
	
	printf("Digite outro n�mero real: "); 
	scanf("%f", &B); 
	
	//Imprime o resultado na tela
	
	printf("\n\nOs n�meros digitados foram, respectivamente, %.2f e %.3f.", A, B); 
	
	// Permite que o programa n�o feche automaticamente ap�s o segundo dado de entrada ser fornecido pelo usu�rio, dando possibilidade de visualiza��o dos resultados
	
	getche(); 
	
}
