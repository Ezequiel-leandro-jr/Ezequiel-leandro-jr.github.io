/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 25 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 2, VOLUME 2 */

/* 1.Uma empresa deseja aumentar seus pre�os em 20%. Fa�a um
programa que leia o c�digo e o pre�o de custo de cada produto
e calcule o pre�o novo. Calcule, tamb�m, a m�dia dos pre�os
com e sem aumento. Mostre o c�digo e o pre�o novo de cada
produto e, no final, as m�dias. A quantidade de dados que ser�o
cadastrados � desconhecida. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>

  int main(void) 
 {  
 //comando que permite o uso de acentua��o
    setlocale(LC_ALL, "Portuguese");
    
//declara��o das vari�veis
    int codigo, contador, adicionar;
    float preco, soma;
    
//atribui��o do valor da vari�vel contador e da vari�vel soma
    contador = 1;
    soma = 0;
    
//estrutura de repeti��o do/while   
   do
	{
	  system("cls");
	  
	  //t�tulo do programa
      printf("\tEMPRESA TEM-DE-TUDO\n\n\tReajuste de pre�os em 20%%\n\n\n");
      
      //leitura do c�digo do produto
      printf("Digite o c�digo do produto %d: ", contador);
      scanf("%d", &codigo);
      
      //leitura do pre�o do produto
      printf("\nDigite o pre�o do produto %d: ", contador);
      scanf("%f", &preco);
      
      //atribui��o do valor da vari�vel soma
      soma = soma + preco;
      
      //impress�o do c�digo do produto, seu pre�o antigo e seu novo pre�o reajustado em 20% de aumento
      printf("\n\nProduto %d:\nPre�o antigo.....R$ %.2f\nNovo Pre�o......R$ %.2f", codigo, preco, preco*1.2);
      
      //acr�scimo de uma unidade ao contador
      contador++;
      
      //comando para saber se o usu�rio deseja repetir a opera��o
      printf("\n\nDeseja adicionar um novo produto (1-Sim, 2-N�o)?\n");
      scanf("%d", &adicionar);
 
	} while(adicionar == 1);
	
	//apresenta��o dos resultados
	printf("\n\n\n\tM�DIA DOS PRE�OS\n\n");
	
	//impress�o da quantidade de produtos, a m�dia dos pre�os antigos e a m�dia dos novos pre�os reajustados
	printf("Quantidade de produtos: %d", contador);
	printf("\nM�dia dos pre�os antigos......R$ %.2f", soma/contador);
	printf("\nM�dia dos novos pre�os........R$ %.2f", (soma*1.2)/contador);
	
	getche();
	  
    
}
