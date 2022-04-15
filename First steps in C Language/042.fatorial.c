/*
Algoritmo "Fatorial"
Descri��o   : Calcula o fatorial de um n�mero
Autor    : Ezequiel Leandro Jr
Data: 15/04/2022
*/

#include <stdio.h>
#include <locale.h>

//declara��o de vari�veis globais
int fatorial;

//declara��o do m�dulo que escreve o cabe�alho do programa
void escreva_cabecalho()
{
	system("cls");
	printf("\tC�LCULO FATORIAL\n");
	printf("-----------------------------------------\n\n");
}

//declara��o do m�dulo para c�lculo fatorial
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
	//declara��o de vari�veis do main
	int repetir;
	
 	//comando para acentua��o
	setlocale(LC_ALL, "Portuguese");
	
	//estrutura de repeti��o do while
	do
	{
		//comando para limpar tela
		system("cls");
		
		//declara��o do m�dulo cabe�alho
	    escreva_cabecalho();
 	
 	    //comando que pede um n�mero inteiro ao usu�rio
 	    printf("Digite um n�mero inteiro: ");
 	    scanf("%d", &fatorial);
 	    
 	    //chamada do m�dulo para c�lculo fatorial
 	    fatorial = calculo_fatorial(fatorial);
 	    
 	    //comando para impress�o do resultado
 	    printf("\n\nO resultado � = %d", fatorial);
 	    
 	    //comando para repetir a opera��o ou fechar o programa
 	    printf("\n\nDeseja repetir a opera��o <1-Sim / 2-N�o>?\n\t");
 	    scanf("%d", &repetir);
 	    
	} while(repetir == 1);
	
	printf("\n\nClique em qualquer tecla para encerrar o programa...");
	
	getche ();
	
}
