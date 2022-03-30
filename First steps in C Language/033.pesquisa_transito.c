/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 26 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 2, VOLUME 2 */

/* 7.Foi feita uma pesquisa estatística nas 50 principais cidades de
quatro Estados para coletar dados sobre acidentes de trânsito.
Foram obtidos os seguintes dados:
» Código da cidade
» Estado (1-PE, 2-PB, 3-RN, 4-CE)
» Número de veículos de passeio (em 2008)
» Número de acidentes de trânsito com vítimas (em 2008)
Deseja-se saber:
» qual o maior e o menor índice de acidentes de trânsito e a
que cidades pertencem;
» qual a média de veículos nas cidades;
» qual a média de acidentes com vítimas entre as cidades do
Estado de Pernambuco. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>
#include <string.h>


  int main(void) 
 {  
 //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
 //declaração das variáveis
     int contador, estado, num_veiculo, num_acidente; 
     int maior_acidente, menor_acidente, acidente;
     float soma_veiculo, soma_acidente;
     char codigo[20], maior_cidade[20], menor_cidade[20];
     
     soma_acidente = 0;
     acidente = 0;
     
 //estrutura de repetição for
     for (contador = 1; contador<=50; contador++) //enquanto o contador for menor ou igual ao valor 50, realizará os comandos
	 {                                            
	 	system("cls");
     	
     	//título
     	printf("\n\n\n\tPESQUISA DE TRANSITO\nPesquisa entre as 50 principais cidades de 4 estados do nordeste\n\n");
     	
     	/*comandos que pedem o código da cidade, o estado, o número de veículos de passeio na cidade
		  e o número de acidentes de trânsito com vítima na cidade*/
     	printf("Digite o código da cidade %d\nResposta: ", contador);
     	fflush(stdin);
     	gets(codigo);
     	
     	printf("\nQual o estado da cidade?\n<1-PE,2-PB,3-RN,4-CE>\nResposta: ");
     	scanf("%d", &estado);
     	
     	printf("\nQual o número de veículos de passeio da cidade?\nResposta: ");
     	scanf("%d", &num_veiculo);
     	
     	printf("\nQual o número de acidentes de trânsito com vítima na cidade?\nResposta: ");
     	scanf("%d", &num_acidente);
     	
     	//estrutura de seleção if para somar os números de acidentes com vítimas do estado de pernambuco
     	if(estado == 1)
     	{
		     soma_acidente = soma_acidente + num_acidente;
     	     acidente++;
        }
     	
     	//soma dos números de veículos de todas as cidades
		soma_veiculo = soma_veiculo + num_veiculo;
     	
     	//estruturas de seleção if e de if-else aninhado para determinar as cidades com maior e menor números de acidentes com vítimas  
		if(contador == 1)
		{
			 maior_acidente = num_acidente;
		     strcpy(maior_cidade, codigo);
		}
		         
		if((contador == 2) && (num_acidente>maior_acidente))
		{
			 menor_acidente = maior_acidente;
		     maior_acidente = num_acidente;
			 strcpy (menor_cidade, maior_cidade);
			 strcpy (maior_cidade, codigo);	     
		} else
		    {
		         if((contador == 2) && (num_acidente<maior_acidente))
		         {
		         	menor_acidente = num_acidente;
					strcpy (menor_cidade, codigo);	
				 }
			}
				
		if((contador > 2) && (num_acidente>maior_acidente))
		 {
		     maior_acidente = num_acidente;
			 strcpy (maior_cidade, codigo);	   
		 }else
		    {
		      if((contador > 2) && (num_acidente<menor_acidente))
		         menor_acidente = num_acidente;
				 strcpy (menor_cidade, codigo);     
			}
		
	 }
	 system("cls"); //limpa a tela para mostrar novos resultados
     
     // Resultado da maior e menor número de acidentes e as respectivas cidades
     printf("\n\n\tO MAIOR NÚMERO DE ACIDENTES COM VÍTIMAS É %d, DA CIDADE %s.", maior_acidente, maior_cidade);
	 printf("\n\tO MENOR NÚMERO DE ACIDENTES COM VÍTIMAS É %d, DA CIDADE %s.", menor_acidente, menor_cidade);
	 
     // Resultado da média de veículos nas cidades e da média de acidentes no estado de Pernambuco
     printf("\n\n\tA MÉDIA DE VEÍCULOS NAS CIDADES É DE %.2f", soma_veiculo/(contador-1));
     printf("\n\tA MÉDIA DE ACIDENTES FATAIS ENTRE AS CIDADES DE PERNAMBUCO É DE %.2f", soma_acidente/acidente);
     
    getche(); 
 }