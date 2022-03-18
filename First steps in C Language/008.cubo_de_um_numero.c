/* programa que lê um número qualquer e imprime o seu cubo. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int Num, C;
	  
	printf("CUBO DE UM NUMERO\n\n"); 
	printf("Digite o numero: ");
	scanf("%d",&Num);
	
	C=Num*Num*Num;
	
	printf("\nCubo de %d = %d\n\n",Num,C);
	
	system("pause");
}