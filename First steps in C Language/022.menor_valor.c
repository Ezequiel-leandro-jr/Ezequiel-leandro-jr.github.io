/* Programa que lê quatro inteiros diferentes e
informa qual é o menor valor. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	int a, b, c, d;
	
	// Título do programa
	printf("...............COMPARANDO VARIAVEIS...............\n\n\n");
	
	// Pede para atribuir um valor à variável A
	printf("Atribua um valor a A: ");
	scanf("%d", &a);
	
	// Pede para atribuir um valor à variável B
	printf("\n\nAtribua um valor a B: ");
	scanf("%d", &b);
	
	// Pede para atribuir um valor à variável C
	printf("\n\nAtribua um valor a C: ");
	scanf("%d", &c);
	
	// Pede para atribuir um valor à variável D
	printf("\n\nAtribua um valor a D: ");
	scanf("%d", &d);
	
	// Sequência de if else aninhado que determina o menor valor entre as quatro variáveis, e imprime o resultado
	if ((a < b) && (a < c) && (a < d)) {
	
		printf("\n\n\n%d e o menor numero!", a);
	}
	else {
	
	    if ((b < a) && (b < c) && (b < d))
	      printf("\n\n\n%d e o menor numero!", b);
	      
	    else {
	
	    if ((c < a) && (c < b) && (c < d))
	      printf("\n\n\n%d e o menor numero!", c);
	    
	    else {
	    	if ((d < a) && (d < b) && (d < c))
	         printf("\n\n\n%d e o menor numero!", d);
		}
	      
	        }
	  }
	    
	getche();
	
	
	
}
