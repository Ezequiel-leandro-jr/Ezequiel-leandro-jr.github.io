/* Programa que lê o nome do usuário, a idade do
usuário, o nome da mãe do usuário e a idade da mãe do
usuário. Em seguida, imprime na tela quantos anos a
mãe do usuário tinha quando ele nasceu. A resposta deve ter
o formato deste exemplo: “Carlos, quando voce nasceu, Dona
Cecilia tinha 27 anos”. */

#include <stdio.h>
#include <locale.h>


int main(){
	
	// Permite a acentuação de caracteres
	
    setlocale(LC_ALL,"Portuguese");
    
    // Declaração das variáveis
    
	char x[20], y[20];
	int a, b, c;
	
	// Imprime o título do programa
	
	printf("A IDADE DE SUA MÃE QUANDO VOCÊ NASCEU\n\n");
	
	// Pede a entrada de dados referente ao nome do usuário e o nome da mãe do usuário
	
	printf("Qual o seu nome?\n");
	fflush(stdin);
      gets(x);
  printf("\nQual o nome da sua mãe?\n");
	fflush(stdin);
      gets(y);
	
	// Pede a entrada de dados referente às idades do usuário e da mãe do usuário
	
	printf("\n\nQual a sua idade?\n");
	scanf("%d", &a);
	printf("\n\nQual a idade da sua mãe?\n");
	scanf("%d", &b);
	
	// Atribuição do resultado da subtração entre a idade da mãe do usuário e a idade do usuário à variável C
	
	c = b - a;
	
	// Imprime o resultado na tela
	
	printf("\n\n\n%s, quando você nasceu, Dona %s tinha %d anos.\n\n", x, y, c);
	
	// Pausa o sistema antes de encerrar o programa
	
	system("pause");

}

