/* Programa que l� o nome do usu�rio, a idade do
usu�rio, o nome da m�e do usu�rio e a idade da m�e do
usu�rio. Em seguida, imprime na tela quantos anos a
m�e do usu�rio tinha quando ele nasceu. A resposta deve ter
o formato deste exemplo: �Carlos, quando voce nasceu, Dona
Cecilia tinha 27 anos�. */

#include <stdio.h>
#include <locale.h>


int main(){
	
	// Permite a acentua��o de caracteres
	
    setlocale(LC_ALL,"Portuguese");
    
    // Declara��o das vari�veis
    
	char x[20], y[20];
	int a, b, c;
	
	// Imprime o t�tulo do programa
	
	printf("A IDADE DE SUA M�E QUANDO VOC� NASCEU\n\n");
	
	// Pede a entrada de dados referente ao nome do usu�rio e o nome da m�e do usu�rio
	
	printf("Qual o seu nome?\n");
	fflush(stdin);
      gets(x);
  printf("\nQual o nome da sua m�e?\n");
	fflush(stdin);
      gets(y);
	
	// Pede a entrada de dados referente �s idades do usu�rio e da m�e do usu�rio
	
	printf("\n\nQual a sua idade?\n");
	scanf("%d", &a);
	printf("\n\nQual a idade da sua m�e?\n");
	scanf("%d", &b);
	
	// Atribui��o do resultado da subtra��o entre a idade da m�e do usu�rio e a idade do usu�rio � vari�vel C
	
	c = b - a;
	
	// Imprime o resultado na tela
	
	printf("\n\n\n%s, quando voc� nasceu, Dona %s tinha %d anos.\n\n", x, y, c);
	
	// Pausa o sistema antes de encerrar o programa
	
	system("pause");

}

