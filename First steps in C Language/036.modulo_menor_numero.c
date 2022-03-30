/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 28 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 3, VOLUME 2 */

/* 03. Desenvolva uma função que receba três números inteiros como
parâmetros e retorne o menor valor. */

//RESPOSTA:

//declaração das bibliotecas
#include <stdio.h>
#include <locale.h>

//declaração das variáveis globais
int numero1, numero2, numero3, menor;

//declaração do módulo 1, que escreve o cabeçalho do programa
void escreva_cabecalho()
{
	system("cls");
	printf("\tO MENOR VALOR ENTRE TRÊS NÚMEROS INTEIROS\n");
	printf("-----------------------------------------\n\n");
}

//declaração do módulo 2, que calculará o menor valor e atribuirá a uma variável local m
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
  //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
 //declaração do módulo 1 no main()
 escreva_cabecalho();
 
 //comandos que pedem a leitura dos três números inteiros
 printf("Digite o 1º número inteiro: ");
 scanf("%d", &numero1);
 
 printf("Digite o 2º número inteiro: ");
 scanf("%d", &numero2);
 
 printf("Digite o 3º número inteiro: ");
 scanf("%d", &numero3);
 
 //declaração do módulo 2 no main()
 menor = calc_menor(numero1, numero2, numero3);
 
 //impressão do resultado
 system("cls");
 
 printf("\n\n\tRESULTADO\n\n"); //título
 printf("O menor número entre %d, %d e %d = %d", numero1, numero2, numero3, menor);
 
 getche();
}