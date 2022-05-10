/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 22 DE ABRIL DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 1, VOLUME 3 */

/* 03. Ler um vetor de números e imprimir os valores armazenados
nas posições PARES e, em seguida, os valores armazenados
nas posições ÍMPARES.  */

//RESPOSTA:

//declaração das bibliotecas
#include <stdio.h>
#include <locale.h>

//declaração das variáveis e do vetor como variáveis globais
int vetor[50], i, continuar, q = 0;

//módulo principal
int main(void)
{
	//comando que permite a escrita em português
	setlocale(LC_ALL, "Portuguese");
	
	//comandos para ler os elementos do vetor, através de uma estrutura do while
	do
	{
		system("cls"); //limpa tela
		printf("Elementos de índices PAR ou ÍMPAR de um vetor\n\n\n"); //título do programa
		
		printf("Digite um número inteiro para o elemento %d do vetor: ", q + 1);
		scanf("%d", &vetor[q]);
		
		q++; // o valor de q é acrescido em +1
		
		printf("\n\nDeseja cadastrar outro elemento do vetor <1-Sim 2-Não>?\nR= ");
		scanf("%d", &continuar);
	} while((continuar == 1) && (q<50));
	
	//RESULTADOS
    system("cls"); //limpa tela
	printf("Elementos de índices PAR ou ÍMPAR de um vetor\n\n\n"); //título do programa
	
	//comando que irá imprimir os valores dos elementos em índices que são PAR
	printf("Os elementos cujos índices são PARES são:");
	for(i = 0; i<q; i++)
	{
		if(i % 2 == 0)
		 printf(" %d ", vetor[i]);	   	
	}
	
	//comando que irá imprimir os valores dos elementos em índices que são ÍMPAR
	printf("\nOs elementos cujos índices são ÍMPARES são:");
	for(i = 0; i<q; i++)
	{
		if(i % 2 != 0)
		 printf(" %d ", vetor[i]);	   	
	}
	
	getche();
}