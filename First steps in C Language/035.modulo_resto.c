/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 28 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 3, VOLUME 2 */

/* 02. Desenvolva uma função que recebe dois números inteiros como
parâmetro, e retorna o resto da divisão do primeiro parâmetro
pelo segundo. */

//RESPOSTA:

//declaração das bibliotecas
#include <stdio.h>
#include <locale.h>

//declaração das variáveis globais
int numero1, numero2, resto;

//declaração do módulo 1, que escreve o cabeçalho do programa
void escreva_cabecalho()
{
	system("cls");
	printf("\tRESTO DA DIVISÃO ENTRE DOIS NÚMEROS INTEIROS\n");
	printf("-----------------------------------------\n\n");
}

//declaração do módulo 2, que realiza a divisão entre dois números inteiros, salvando seu resto
int calc_resto(int n1, int n2)
{
	int r;
	r = n1 % n2;
	return r;
}

//programa principal
main()
{
  //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
 //declaração do módulo 1 no main()
 escreva_cabecalho();
 
 //comando que pede a leitura de dois números inteiros
 printf("Digite o primeiro número inteiro: ");
 scanf("%d", &numero1);
 
 printf("Digite o segundo número inteiro: ");
 scanf("%d", &numero2);
 
 //declaração do módulo 2 no main()
 resto = calc_resto(numero1, numero2);
 
 //impressão do resultado
 system("cls");
 printf("\n\n\tRESULTADO\n\n"); //título
 
 printf("O resto da divisão de %d por %d = %d", numero1, numero2, resto);
 
 getche();
}
