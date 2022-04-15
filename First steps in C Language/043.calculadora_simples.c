/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 15 DE ABRIL DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR

/*Programa que simula uma calculadora simples*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

  int main(void) 
 { 
     //declara��o das vari�veis
     int num1, num2, continuar;
     char OP[1]; 

     //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");

     //estrutura de repeti��o do while
     do
	 {
	 	//t�tulo do programa
	 	system("cls");
	 	
	 	printf("\t CALCULADORA\n\n\n");
	 	
	 	//comandos que pedem o primeiro n�mero ao usu�rio, a opera��o a ser realizada e o segundo n�mero
	 	printf("Digite o primeiro n�mero inteiro: ");
	 	scanf("%d", &num1);
	 	
	 	system("cls");
	 	
	 	printf("\t CALCULADORA\n\n\n");
	 	
	 	printf("Escolha uma opera��o:\n  + para SOMA\n  - para SUBTRA��O\n  * para MULTIPLICA��O\n  / para DIVIS�O\nR: ");
	 	fflush(stdin);
	 	gets(OP);
	 	
	 	system("cls");
	 	
	 	printf("\t CALCULADORA\n\n\n");
	 	
	 	printf("Digite o segundo n�mero inteiro: ");
	 	scanf("%d", &num2);
	 	
	 	system("cls");
	 	
	 	printf("\t CALCULADORA\n\n\n");
	 	
	 	//estrutura de decis�o switch case
	 	if(strcmp(OP, "+") == 0)
	 	     printf("O resultado de %d + %d = %d", num1, num2, num1+num2 );
	 	else if(strcmp(OP, "-") == 0)
	 		 printf("O resultado de %d - %d = %d", num1, num2, num1-num2 );
	 	else if(strcmp(OP, "*") == 0)
	 		 printf("O resultado de %d * %d = %d", num1, num2, num1*num2 );
	 	else if(strcmp(OP, "/") == 0)
	 		 printf("O resultado de %d / %d = %d", num1, num2, num1/num2 );
	 	else if((strcmp(OP, "+") != 0) || (strcmp(OP, "-") != 0) || (strcmp(OP, "*") != 0) || (strcmp(OP, "/") != 0))
	 		 printf("Opera��o inv�lida!!");
	 		 
	 printf("\n\nDeseja realizar nova opera��o <1- Sim 2-N�o>?\nR: ");
	 scanf("%d", &continuar);
	 
	 } while(continuar == 1);
	 
	 printf("\n\nClique em qualquer tecla para encerrar o programa...");
	 getche();
	 		 	
}

 