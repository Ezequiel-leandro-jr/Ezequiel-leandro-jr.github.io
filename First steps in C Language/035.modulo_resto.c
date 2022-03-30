/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 28 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 3, VOLUME 2 */

/* 02. Desenvolva uma fun��o que recebe dois n�meros inteiros como
par�metro, e retorna o resto da divis�o do primeiro par�metro
pelo segundo. */

//RESPOSTA:

//declara��o das bibliotecas
#include <stdio.h>
#include <locale.h>

//declara��o das vari�veis globais
int numero1, numero2, resto;

//declara��o do m�dulo 1, que escreve o cabe�alho do programa
void escreva_cabecalho()
{
	system("cls");
	printf("\tRESTO DA DIVIS�O ENTRE DOIS N�MEROS INTEIROS\n");
	printf("-----------------------------------------\n\n");
}

//declara��o do m�dulo 2, que realiza a divis�o entre dois n�meros inteiros, salvando seu resto
int calc_resto(int n1, int n2)
{
	int r;
	r = n1 % n2;
	return r;
}

//programa principal
main()
{
  //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");
    
 //declara��o do m�dulo 1 no main()
 escreva_cabecalho();
 
 //comando que pede a leitura de dois n�meros inteiros
 printf("Digite o primeiro n�mero inteiro: ");
 scanf("%d", &numero1);
 
 printf("Digite o segundo n�mero inteiro: ");
 scanf("%d", &numero2);
 
 //declara��o do m�dulo 2 no main()
 resto = calc_resto(numero1, numero2);
 
 //impress�o do resultado
 system("cls");
 printf("\n\n\tRESULTADO\n\n"); //t�tulo
 
 printf("O resto da divis�o de %d por %d = %d", numero1, numero2, resto);
 
 getche();
}
