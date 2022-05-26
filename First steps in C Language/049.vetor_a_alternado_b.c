/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 22 DE ABRIL DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 1, VOLUME 3 */

/* 04. Ler dois vetores e caso tenham tamanhos iguais, armazene seus
elementos alternadamente em um terceiro vetor.  */

//RESPOSTA:

//declara��o das bibliotecas
#include <stdio.h>
#include <locale.h>

//declara��o das vari�veis e do vetor como vari�veis globais
int A[50], B[50], C[50], i, continuar, a=0, b=0;

//m�dulo principal
int main(void)
{
	//comando que permite a escrita em portugu�s
	setlocale(LC_ALL, "Portuguese");
	
	//comandos para ler elementos do vetor A
	do
	{
		system("cls"); //limpa tela
		
		printf("Digite um n�mero inteiro como elemento %d do vetor A: ", a + 1);
		scanf("%d", &A[a]);
		
		a++; //acresce o valor de a em +1
		
		printf("\n\nDeseja cadastrar outro elemento ao vetor A? <1-Sim 2-N�o>\nR= ");
		scanf("%d", &continuar);
	} while(continuar == 1);
	
	//comandos para ler elementos do vetor B
	do
	{
		system("cls"); //limpa tela
		
		printf("Digite um n�mero inteiro como elemento %d do vetor B: ", b + 1);
		scanf("%d", &B[b]);
		
		b++; //acresce o valor de b em +1
		
		printf("\n\nDeseja cadastrar outro elemento ao vetor B? <1-Sim 2-N�o>\nR= ");
		scanf("%d", &continuar);
	} while(continuar == 1);
	
	//RESULTADOS
	
	system("cls"); //limpa tela
	
	//comando que imprime os valores do vetor A
	printf("Os elementos do vetor A=");
	for(i = 0; i < a; i++)
	{
		printf(" %d ", A[i]);
	}
	
	//comando que imprime os valores do vetor B
	printf("\nOs elementos do vetor B=");
	for(i = 0; i < b; i++)
	{
		printf(" %d ", B[i]);
	}
	
	//comando que atrela aos �ndices do vetor C os elementos correspondentes do vetor A e B alternadamente
	for(i = 0; i < a + b; i++)
	{
		if((i % 2 == 0) && (i < a + b))
		{
			C[i] = A[i - (i / 2)];
			C[i + 1] = B[i - (i / 2)];
		} 
	}
	
	//comando que imprime os elementos do vetor C
	printf("\n\nAlternado os elementos de A e B, os valores de C=");
	
	for(i = 0; i < a + b; i++)
	{
		printf(" %d ", C[i]);
	}
	
	getche();
}