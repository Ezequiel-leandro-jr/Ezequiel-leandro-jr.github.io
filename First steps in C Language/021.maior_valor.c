/* programa que lê três números inteiros diferentes
e informa qual é o maior valor. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	int x, y, z;
	
	// Título do programa
	printf("...............COMPARANDO VARIÁVEIS...............\n\n\n");
	
	// Pede para atribuir um valor à variável X
	printf("Atribua um valor a X: ");
	scanf("%d", &x);
	
	// Pede para atribuir um valor à variável Y
	printf("\n\nAtribua um valor a Y: ");
	scanf("%d", &y);
	
	// Pede para atribuir um valor à variável Z
	printf("\n\nAtribua um valor a Z: ");
	scanf("%d", &z);
	
	// Sequência de if else aninhado que determinam e imprimem o maior valor entre as três variáveis
	if ((x > y) && (x > z)) {
	
		printf("\n\n\n%d é o maior número!", x);
	}
	else {
	
	    if ((y > x) && (y > z))
	      printf("\n\n\n%d é o maior número!", y);
	      
	    else {
	
	    if ((z > x) && (z > y))
	      printf("\n\n\n%d é o maior número!", z);
	      
	        }
	  }
	    
	getche();
	
	
	
}