/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 28 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 3, VOLUME 2 */

/* 04. Desenvolva uma fun��o que recebe o ano de nascimento do
usu�rio e retorna a sua idade. Fa�a o c�lculo usando o ano
atual. */

//RESPOSTA:

//declara��o das bibliotecas
#include <stdio.h>
#include <locale.h>

//declara��o das vari�veis globais
int idade, nascimento, atual;

//declara��o do m�dulo 1, que escreve o cabe�alho do programa
void escreva_cabecalho()
{
	system("cls");
	printf("\tDESCOBRINDO A IDADE ATRAV�S DO ANO DE NASCIMENTO\n");
	printf("-----------------------------------------\n\n");
}

//declara��o do m�dulo 2, que calcular� a idade atual
int calc_idade(n1, n2)
{
	int i;
	i = n1 - n2;
	return i;
}

//programa principal
main()
{
  //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");
    
 //declara��o do m�dulo 1 no main()
 escreva_cabecalho();
 
 //comandos que pedem a leitura do ano atual e o ano de nascimento
 printf("Qual � o ano em que estamos?\nResposta: ");
 scanf("%d", &atual);
 
 printf("Qual foi o seu ano de nascimento?\nResposta: ");
 scanf("%d", &nascimento);
 
 //declara��o do m�dulo 2 no main()
 idade = calc_idade(atual, nascimento);
 
 //impress�o dos resultados
 system("cls");
 
 printf("\n\n\tRESULTADO\n\n"); //t�tulo
 printf("Este ano voc� tem ou completar� %d anos de vida.", idade);
 
 getche();
}