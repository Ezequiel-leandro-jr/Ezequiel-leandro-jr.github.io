/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 28 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 3, VOLUME 2 */

/* 03. Desenvolva uma fun��o que receba tr�s n�meros inteiros como
par�metros e retorne o menor valor. */

//RESPOSTA:

//declara��o das bibliotecas
#include <stdio.h>
#include <locale.h>

//declara��o das vari�veis globais
int numero1, numero2, numero3, menor;

//declara��o do m�dulo 1, que escreve o cabe�alho do programa
void escreva_cabecalho()
{
	system("cls");
	printf("\tO MENOR VALOR ENTRE TR�S N�MEROS INTEIROS\n");
	printf("-----------------------------------------\n\n");
}

//declara��o do m�dulo 2, que calcular� o menor valor e atribuir� a uma vari�vel local m
int calc_menor(int n1, int n2, int n3)
{
	int m;
	if((n1 < n2) && (n1 < n3))
	     m = n1;
	else
	{
		if((n2 < n1) && (n2 < n3))
		     m = n2;
		else
		{
			if((n3 < n1) && (n3 < n2))
			     m = n3;
		}
	}
}

//programa principal
main()
{
  //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");
    
 //declara��o do m�dulo 1 no main()
 escreva_cabecalho();
 
 //comandos que pedem a leitura dos tr�s n�meros inteiros
 printf("Digite o 1� n�mero inteiro: ");
 scanf("%d", &numero1);
 
 printf("Digite o 2� n�mero inteiro: ");
 scanf("%d", &numero2);
 
 printf("Digite o 3� n�mero inteiro: ");
 scanf("%d", &numero3);
 
 //declara��o do m�dulo 2 no main()
 menor = calc_menor(numero1, numero2, numero3);
 
 //impress�o do resultado
 system("cls");
 
 printf("\n\n\tRESULTADO\n\n"); //t�tulo
 printf("O menor n�mero entre %d, %d e %d = %d", numero1, numero2, numero3, menor);
 
 getche();
}