/* programa que l� tr�s n�meros inteiros diferentes
e informa qual � o maior valor. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	int x, y, z;
	
	// T�tulo do programa
	printf("...............COMPARANDO VARI�VEIS...............\n\n\n");
	
	// Pede para atribuir um valor � vari�vel X
	printf("Atribua um valor a X: ");
	scanf("%d", &x);
	
	// Pede para atribuir um valor � vari�vel Y
	printf("\n\nAtribua um valor a Y: ");
	scanf("%d", &y);
	
	// Pede para atribuir um valor � vari�vel Z
	printf("\n\nAtribua um valor a Z: ");
	scanf("%d", &z);
	
	// Sequ�ncia de if else aninhado que determinam e imprimem o maior valor entre as tr�s vari�veis
	if ((x > y) && (x > z)) {
	
		printf("\n\n\n%d � o maior n�mero!", x);
	}
	else {
	
	    if ((y > x) && (y > z))
	      printf("\n\n\n%d � o maior n�mero!", y);
	      
	    else {
	
	    if ((z > x) && (z > y))
	      printf("\n\n\n%d � o maior n�mero!", z);
	      
	        }
	  }
	    
	getche();
	
	
	
}