/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 28 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 3, VOLUME 2 */

/* 05. Desenvolva uma fun��o que recebe como par�metro o m�s
atual e retorna quantos meses faltam para o final do ano. */

//RESPOSTA:

//declara��o das bibliotecas
#include <stdio.h>
#include <locale.h>

//declara��o das vari�veis globais
int mes, faltam;

//declara��o do m�dulo 1, que escreve o cabe�alho do programa
void escreva_cabecalho()
{
	system("cls");
	printf("\tQUANTIDADE DE MESES PARA O FIM DO ANO\n");
	printf("-----------------------------------------\n\n");
}

//declara��o do m�dulo 2, para calcular quantos meses faltam para o ano acabar
int calc_fim(n1)
{
	int f;
	f = 12 - n1;
	return f;
}

//programa principal
main()
{
  //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");
    
 //declara��o do m�dulo 1 no main()
 escreva_cabecalho();
 
 //comandos de entrada de dados
 printf("Digite o valor referente ao m�s atual:\n\n");
 printf("1-Janeiro\n2-Fevereiro\n3-Mar�o\n4-Abril\n5-Maio\n6-Junho\n7-Julho\n8-Agosto\n9-Setembro\n10-Outubro\n11-Novembro\n12-Dezembro\n\nResposta: ");
 scanf("%d", &mes);
 
 //declara��o do m�dulo 2 no main()
 faltam = calc_fim(mes);
 
 //impress�o dos resultados
 system("cls");
 
 printf("\n\n\tRESULTADO\n\n"); //t�tulo
 printf("A quantidade de m�s(es) que falta(m) para o final do ano = %d.", faltam);
 
 getche();
}