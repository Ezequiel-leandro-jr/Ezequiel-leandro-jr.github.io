/*
Algoritmo "Fatorial"
Descrição   : Calcula o fatorial de um número
Autor    : Ezequiel Leandro Jr
Data: 15/04/2022
*/

#include <stdio.h>
#include <locale.h>

//declaração de variáveis globais
int fatorial;

//declaração do módulo que escreve o cabeçalho do programa
void escreva_cabecalho()
{
	system("cls");
	printf("\tCÁLCULO FATORIAL\n");
	printf("-----------------------------------------\n\n");
}

//declaração do módulo para cálculo fatorial
int calculo_fatorial (int n1)
{
	int f, n2;
	n2 = n1;
	do 
	{
	 n1 = n1*(n2 - 1);
	 n2 = n2 - 1;
	} while(n2 > 1);
	
	f = n1;	
	return f;
}

int main(void) 
{
	//declaração de variáveis do main
	int repetir;
	
 	//comando para acentuação
	setlocale(LC_ALL, "Portuguese");
	
	//estrutura de repetição do while
	do
	{
		//comando para limpar tela
		system("cls");
		
		//declaração do módulo cabeçalho
	    escreva_cabecalho();
 	
 	    //comando que pede um número inteiro ao usuário
 	    printf("Digite um número inteiro: ");
 	    scanf("%d", &fatorial);
 	    
 	    //chamada do módulo para cálculo fatorial
 	    fatorial = calculo_fatorial(fatorial);
 	    
 	    //comando para impressão do resultado
 	    printf("\n\nO resultado é = %d", fatorial);
 	    
 	    //comando para repetir a operação ou fechar o programa
 	    printf("\n\nDeseja repetir a operação <1-Sim / 2-Não>?\n\t");
 	    scanf("%d", &repetir);
 	    
	} while(repetir == 1);
	
	printf("\n\nClique em qualquer tecla para encerrar o programa...");
	
	getche ();
	
}
