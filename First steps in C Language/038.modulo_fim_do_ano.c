/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 28 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 3, VOLUME 2 */

/* 05. Desenvolva uma função que recebe como parâmetro o mês
atual e retorna quantos meses faltam para o final do ano. */

//RESPOSTA:

//declaração das bibliotecas
#include <stdio.h>
#include <locale.h>

//declaração das variáveis globais
int mes, faltam;

//declaração do módulo 1, que escreve o cabeçalho do programa
void escreva_cabecalho()
{
	system("cls");
	printf("\tQUANTIDADE DE MESES PARA O FIM DO ANO\n");
	printf("-----------------------------------------\n\n");
}

//declaração do módulo 2, para calcular quantos meses faltam para o ano acabar
int calc_fim(n1)
{
	int f;
	f = 12 - n1;
	return f;
}

//programa principal
main()
{
  //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
 //declaração do módulo 1 no main()
 escreva_cabecalho();
 
 //comandos de entrada de dados
 printf("Digite o valor referente ao mês atual:\n\n");
 printf("1-Janeiro\n2-Fevereiro\n3-Março\n4-Abril\n5-Maio\n6-Junho\n7-Julho\n8-Agosto\n9-Setembro\n10-Outubro\n11-Novembro\n12-Dezembro\n\nResposta: ");
 scanf("%d", &mes);
 
 //declaração do módulo 2 no main()
 faltam = calc_fim(mes);
 
 //impressão dos resultados
 system("cls");
 
 printf("\n\n\tRESULTADO\n\n"); //título
 printf("A quantidade de mês(es) que falta(m) para o final do ano = %d.", faltam);
 
 getche();
}