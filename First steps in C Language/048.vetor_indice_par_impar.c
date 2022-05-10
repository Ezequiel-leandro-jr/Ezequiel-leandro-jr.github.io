/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 22 DE ABRIL DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 1, VOLUME 3 */

/* 03. Ler um vetor de n�meros e imprimir os valores armazenados
nas posi��es PARES e, em seguida, os valores armazenados
nas posi��es �MPARES.  */

//RESPOSTA:

//declara��o das bibliotecas
#include <stdio.h>
#include <locale.h>

//declara��o das vari�veis e do vetor como vari�veis globais
int vetor[50], i, continuar, q = 0;

//m�dulo principal
int main(void)
{
	//comando que permite a escrita em portugu�s
	setlocale(LC_ALL, "Portuguese");
	
	//comandos para ler os elementos do vetor, atrav�s de uma estrutura do while
	do
	{
		system("cls"); //limpa tela
		printf("Elementos de �ndices PAR ou �MPAR de um vetor\n\n\n"); //t�tulo do programa
		
		printf("Digite um n�mero inteiro para o elemento %d do vetor: ", q + 1);
		scanf("%d", &vetor[q]);
		
		q++; // o valor de q � acrescido em +1
		
		printf("\n\nDeseja cadastrar outro elemento do vetor <1-Sim 2-N�o>?\nR= ");
		scanf("%d", &continuar);
	} while((continuar == 1) && (q<50));
	
	//RESULTADOS
    system("cls"); //limpa tela
	printf("Elementos de �ndices PAR ou �MPAR de um vetor\n\n\n"); //t�tulo do programa
	
	//comando que ir� imprimir os valores dos elementos em �ndices que s�o PAR
	printf("Os elementos cujos �ndices s�o PARES s�o:");
	for(i = 0; i<q; i++)
	{
		if(i % 2 == 0)
		 printf(" %d ", vetor[i]);	   	
	}
	
	//comando que ir� imprimir os valores dos elementos em �ndices que s�o �MPAR
	printf("\nOs elementos cujos �ndices s�o �MPARES s�o:");
	for(i = 0; i<q; i++)
	{
		if(i % 2 != 0)
		 printf(" %d ", vetor[i]);	   	
	}
	
	getche();
}