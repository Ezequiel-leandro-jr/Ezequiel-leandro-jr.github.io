/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 15 DE ABRIL DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR

/*Programa que simula uma calculadora simples*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

  int main(void) 
 { 
     //declaração das variáveis
     int num1, num2, continuar;
     char OP[1]; 

     //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");

     //estrutura de repetição do while
     do
	 {
	 	//título do programa
	 	system("cls");
	 	
	 	printf("\t CALCULADORA\n\n\n");
	 	
	 	//comandos que pedem o primeiro número ao usuário, a operação a ser realizada e o segundo número
	 	printf("Digite o primeiro número inteiro: ");
	 	scanf("%d", &num1);
	 	
	 	system("cls");
	 	
	 	printf("\t CALCULADORA\n\n\n");
	 	
	 	printf("Escolha uma operação:\n  + para SOMA\n  - para SUBTRAÇÃO\n  * para MULTIPLICAÇÃO\n  / para DIVISÃO\nR: ");
	 	fflush(stdin);
	 	gets(OP);
	 	
	 	system("cls");
	 	
	 	printf("\t CALCULADORA\n\n\n");
	 	
	 	printf("Digite o segundo número inteiro: ");
	 	scanf("%d", &num2);
	 	
	 	system("cls");
	 	
	 	printf("\t CALCULADORA\n\n\n");
	 	
	 	//estrutura de decisão switch case
	 	if(strcmp(OP, "+") == 0)
	 	     printf("O resultado de %d + %d = %d", num1, num2, num1+num2 );
	 	else if(strcmp(OP, "-") == 0)
	 		 printf("O resultado de %d - %d = %d", num1, num2, num1-num2 );
	 	else if(strcmp(OP, "*") == 0)
	 		 printf("O resultado de %d * %d = %d", num1, num2, num1*num2 );
	 	else if(strcmp(OP, "/") == 0)
	 		 printf("O resultado de %d / %d = %d", num1, num2, num1/num2 );
	 	else if((strcmp(OP, "+") != 0) || (strcmp(OP, "-") != 0) || (strcmp(OP, "*") != 0) || (strcmp(OP, "/") != 0))
	 		 printf("Operação inválida!!");
	 		 
	 printf("\n\nDeseja realizar nova operação <1- Sim 2-Não>?\nR: ");
	 scanf("%d", &continuar);
	 
	 } while(continuar == 1);
	 
	 printf("\n\nClique em qualquer tecla para encerrar o programa...");
	 getche();
	 		 	
}

 