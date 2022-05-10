/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 22 DE ABRIL DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 1, VOLUME 3 */

/* 02. Ler o tamanho e os elementos de dois vetores e, em seguida,
caso os vetores tenham o mesmo tamanho, gere e imprima o
vetor SOMA, onde seus elementos serão formados pela soma
dos elementos de mesmos índices dos dois vetores lidos. */

//RESPOSTA:

//declaração das bibliotecas
#include <stdio.h>
#include <locale.h>

//declaração das variáveis e do vetor como variáveis globais
int A[5], B[5], SOMA[5];
int i=0;

//módulo principal
int main(void)
{
	//comando que permite a escrita acentuada
	setlocale(LC_ALL, "Portuguese");
	
	//título do programa
	printf("\tSOMA ENTRE ÍNDICES DE DOIS VETORES\n\n\n");
	
	//comando que pede para ler os 5 valores do vetor A dentro da estrutura de repetição for
	for(i = 0; i < 5; i++)
	{
		printf("\tSOMA ENTRE ÍNDICES DE DOIS VETORES\n\n\n"); //título do programa
		printf("Digite o %dº valor inteiro do vetor A: ", i+1);
		scanf("%d", &A[i]);
		system("cls"); //comando que limpa a tela
	}
	
	//comando que pede para ler os 5 valores do vetor B dentro da estrutura de repetição for
	for(i = 0; i < 5; i++)
	{
		printf("\tSOMA ENTRE ÍNDICES DE DOIS VETORES\n\n\n"); //título do programa
		printf("Digite o %dº valor inteiro do vetor B: ", i+1);
		scanf("%d", &B[i]);
		system("cls"); //comando que limpa a tela
	}
	
	//RESULTADOS
	//comando que escreve os 5 valores do vetor A na tela, dentro da estrutura de repetição for
	printf("\tSOMA ENTRE ÍNDICES DE DOIS VETORES\n\n\n"); //título do programa
	printf("Os valores do vetor A =");
	
	for(i = 0; i < 5; i++)
	{
		printf(" %d ", A[i]);
	}
	
	//comando que escreve os 5 valores do vetor B na tela, dentro da estrutura de repetição for
	printf("\nOs valores do vetor B =");
	
	for(i = 0; i < 5; i++)
	{
		printf(" %d ", B[i]);
	}
	
	//comando que realiza a soma entre os índices dos vetores A e B e aloca no vetor SOMA
	for(i = 0; i < 5; i++)
	{
		SOMA[i] = A[i] + B[i];
	}
	
	//comando que escreve os 5 valores do vetor SOMA na tela, dentro da estrutura de repetição for
	printf("\n\nA soma entre os índices de A e B = C, cujos valores são:\n");
	
	for(i = 0; i < 5; i++)
	{
		printf(" %d ", SOMA[i]);
	}
	
	getche();	
	
}