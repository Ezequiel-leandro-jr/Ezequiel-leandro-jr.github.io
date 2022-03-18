/* Programa que analisa expressões relacionais e lógicas */

#include <stdio.h>
#include <locale.h>

main() {
	
	
	setlocale(LC_ALL,"Portuguese"); 
	
	int A, B, C, D, E;
	
	A = 10;
	B = 3;
	C = 2;
	D = 2;
	E = 25;
	
	//a)
	if (A == D) { // Se o valor de A for igual a D, o comando abaixo é realizado
		printf("a) A expressão relacional A==D é VERDADEIRA.\n\n");
	}
	else { // Senão, o comando abaixo é realizado
		printf("a) A expressão relacional A==D é FALSA.\n\n");
	}
	
	//b)
	if ((A > B) && (C == D)) { // O símbolo && significa o operador lógico 'e'. Basta apenas uma expressão relacional estar falsa entre essas duas para toda a expressão lógica ser falsa		printf("b) A expressao logica (A > B) && (C == D) e VERDADEIRA.\n\n");
	}
	else {
		printf("b) A expressão lógica (A > B) && (C == D) é FALSA.\n\n");
	}
	
	//c)
	if ((E + 2 < B + C) && (A == 10)) {
		printf("c) A expressão lógica (E + 2 < B + C) && (A == 10) é VERDADEIRA.\n\n");
	}
	else{
		printf("c) A expressão lógica (E + 2 < B + C) && (A == 10) é FALSA.\n\n");
	}

    //d)
    if ((D * E > 100) || (B < 5)) { // O símbolo || significa 'ou'. Basta apenas uma expressão relacional estar verdadeira para que essa expressão lógica seja verdadeira
    	printf("d) A expressão lógica (D * E > 100) || (B < 5) é VERDADEIRA.\n\n");
	}
	else {
		printf("d) A expressão lógica (D * E > 100) || (B < 5) é FALSA.\n\n");
	}
	
	//e)
	if ((E == 25) && (A > B + C + D) && (C < B)) {
		printf("e) A expressão lógica (E == 25) && (A > B + C + D) && (C < B) é VERDADEIRA.\n\n");
	}
	else {
		printf("e) A expressão lógica (E == 25) && (A > B + C + D) && (C < B) é FALSA.\n\n");
	}
	
	//f)
	if ( !(A < 15) && (B >= 3)) { // O símbolo ! significa 'não', e serve para inverter o resultado da expressão relacional. Se ela for verdadeira, se torna falsa
		printf("f) A expressão lógica !(A < 15) && (B > = 3) é VERDADEIRA.\n\n");
	}
	else {
		printf("f) A expressão lógica !(A < 15) && (B > = 3) é FALSA.\n\n");
	}
	
	//g)
	if((D > 2) || (C == 7) && (E > 20)){
		printf("g) A expressão lógica  (D>2) || (C == 7) && (E > 20) é VERDADEIRA.\n\n");
	}
	else {
		printf("g) A expressão lógica  (D>2) || (C == 7) && (E > 20) é FALSA.\n\n");
	}

    
	getche();
}
