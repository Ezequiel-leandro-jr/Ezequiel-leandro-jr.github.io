/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 25 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 2, VOLUME 2 */

/* 1.Uma empresa deseja aumentar seus preços em 20%. Faça um
programa que leia o código e o preço de custo de cada produto
e calcule o preço novo. Calcule, também, a média dos preços
com e sem aumento. Mostre o código e o preço novo de cada
produto e, no final, as médias. A quantidade de dados que serão
cadastrados é desconhecida. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>

  int main(void) 
 {  
 //comando que permite o uso de acentuação
    setlocale(LC_ALL, "Portuguese");
    
//declaração das variáveis
    int codigo, contador, adicionar;
    float preco, soma;
    
//atribuição do valor da variável contador e da variável soma
    contador = 1;
    soma = 0;
    
//estrutura de repetição do/while   
   do
	{
	  system("cls");
	  
	  //título do programa
      printf("\tEMPRESA TEM-DE-TUDO\n\n\tReajuste de preços em 20%%\n\n\n");
      
      //leitura do código do produto
      printf("Digite o código do produto %d: ", contador);
      scanf("%d", &codigo);
      
      //leitura do preço do produto
      printf("\nDigite o preço do produto %d: ", contador);
      scanf("%f", &preco);
      
      //atribuição do valor da variável soma
      soma = soma + preco;
      
      //impressão do código do produto, seu preço antigo e seu novo preço reajustado em 20% de aumento
      printf("\n\nProduto %d:\nPreço antigo.....R$ %.2f\nNovo Preço......R$ %.2f", codigo, preco, preco*1.2);
      
      //acréscimo de uma unidade ao contador
      contador++;
      
      //comando para saber se o usuário deseja repetir a operação
      printf("\n\nDeseja adicionar um novo produto (1-Sim, 2-Não)?\n");
      scanf("%d", &adicionar);
 
	} while(adicionar == 1);
	
	//apresentação dos resultados
	printf("\n\n\n\tMÉDIA DOS PREÇOS\n\n");
	
	//impressão da quantidade de produtos, a média dos preços antigos e a média dos novos preços reajustados
	printf("Quantidade de produtos: %d", contador);
	printf("\nMédia dos preços antigos......R$ %.2f", soma/contador);
	printf("\nMédia dos novos preços........R$ %.2f", (soma*1.2)/contador);
	
	getche();
	  
    
}
