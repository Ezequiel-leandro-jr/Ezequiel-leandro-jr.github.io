/* Programa que analisa express�es relacionais e l�gicas */

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
	if (A == D) { // Se o valor de A for igual a D, o comando abaixo � realizado
		printf("a) A express�o relacional A==D � VERDADEIRA.\n\n");
	}
	else { // Sen�o, o comando abaixo � realizado
		printf("a) A express�o relacional A==D � FALSA.\n\n");
	}
	
	//b)
	if ((A > B) && (C == D)) { // O s�mbolo && significa o operador l�gico 'e'. Basta apenas uma express�o relacional estar falsa entre essas duas para toda a express�o l�gica ser falsa		printf("b) A expressao logica (A > B) && (C == D) e VERDADEIRA.\n\n");
	}
	else {
		printf("b) A express�o l�gica (A > B) && (C == D) � FALSA.\n\n");
	}
	
	//c)
	if ((E + 2 < B + C) && (A == 10)) {
		printf("c) A express�o l�gica (E + 2 < B + C) && (A == 10) � VERDADEIRA.\n\n");
	}
	else{
		printf("c) A express�o l�gica (E + 2 < B + C) && (A == 10) � FALSA.\n\n");
	}

    //d)
    if ((D * E > 100) || (B < 5)) { // O s�mbolo || significa 'ou'. Basta apenas uma express�o relacional estar verdadeira para que essa express�o l�gica seja verdadeira
    	printf("d) A express�o l�gica (D * E > 100) || (B < 5) � VERDADEIRA.\n\n");
	}
	else {
		printf("d) A express�o l�gica (D * E > 100) || (B < 5) � FALSA.\n\n");
	}
	
	//e)
	if ((E == 25) && (A > B + C + D) && (C < B)) {
		printf("e) A express�o l�gica (E == 25) && (A > B + C + D) && (C < B) � VERDADEIRA.\n\n");
	}
	else {
		printf("e) A express�o l�gica (E == 25) && (A > B + C + D) && (C < B) � FALSA.\n\n");
	}
	
	//f)
	if ( !(A < 15) && (B >= 3)) { // O s�mbolo ! significa 'n�o', e serve para inverter o resultado da express�o relacional. Se ela for verdadeira, se torna falsa
		printf("f) A express�o l�gica !(A < 15) && (B > = 3) � VERDADEIRA.\n\n");
	}
	else {
		printf("f) A express�o l�gica !(A < 15) && (B > = 3) � FALSA.\n\n");
	}
	
	//g)
	if((D > 2) || (C == 7) && (E > 20)){
		printf("g) A express�o l�gica  (D>2) || (C == 7) && (E > 20) � VERDADEIRA.\n\n");
	}
	else {
		printf("g) A express�o l�gica  (D>2) || (C == 7) && (E > 20) � FALSA.\n\n");
	}

    
	getche();
}
