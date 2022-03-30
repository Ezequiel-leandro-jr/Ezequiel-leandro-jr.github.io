/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 28 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 3, VOLUME 2 */

/* 04. Desenvolva uma função que recebe o ano de nascimento do
usuário e retorna a sua idade. Faça o cálculo usando o ano
atual. */

//RESPOSTA:

//declaração das bibliotecas
#include <stdio.h>
#include <locale.h>

//declaração das variáveis globais
int idade, nascimento, atual;

//declaração do módulo 1, que escreve o cabeçalho do programa
void escreva_cabecalho()
{
	system("cls");
	printf("\tDESCOBRINDO A IDADE ATRAVÉS DO ANO DE NASCIMENTO\n");
	printf("-----------------------------------------\n\n");
}

//declaração do módulo 2, que calculará a idade atual
int calc_idade(n1, n2)
{
	int i;
	i = n1 - n2;
	return i;
}

//programa principal
main()
{
  //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
 //declaração do módulo 1 no main()
 escreva_cabecalho();
 
 //comandos que pedem a leitura do ano atual e o ano de nascimento
 printf("Qual é o ano em que estamos?\nResposta: ");
 scanf("%d", &atual);
 
 printf("Qual foi o seu ano de nascimento?\nResposta: ");
 scanf("%d", &nascimento);
 
 //declaração do módulo 2 no main()
 idade = calc_idade(atual, nascimento);
 
 //impressão dos resultados
 system("cls");
 
 printf("\n\n\tRESULTADO\n\n"); //título
 printf("Este ano você tem ou completará %d anos de vida.", idade);
 
 getche();
}