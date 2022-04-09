/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 28 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 2, VOLUME 2 */

/* 9. Faça um programa para realizar a totalização dos votos da 
eleição para a prefeitura concorrida entre 3 candidatos. 
Para cada seção são informados o número de votos do candidato A, 
o número de votos do candidato B, o número de votos do 
candidato C, o número de votos brancos e o número de votos 
nulos. A quantidade de seções que serão cadastradas é 
desconhecida. Determine e imprima:
» O número de votantes;
» O total de votos de cada candidato;
» O total de votos brancos e total de votos nulos;
» O total de votos válidos;
» O candidato com maior número de votos;
» Se a eleição foi válida e para isso o total de votos brancos 
mais votos nulos deve ser menor que o total de votos válidos;
» Se haverá segundo turno, para não haver segundo turno 
basta que o total de votos do candidato vencedor seja maior 
que 50% dos votos válidos
» Percentual de votos nulos. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>
#include <string.h>


  int main(void) 
 {  
 //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
 //declaração das variáveis
     int continuar, contador, candidatoA, candidatoB, candidatoC, branco, nulo;
     int totalA, totalB, totalC, totalBranco, totalNulo;
     char maior_candidato[20];
     
     continuar = 0;
     contador = 0;
     candidatoA = 0;
     candidatoB = 0;
     candidatoC = 0;
     branco = 0;
     nulo = 0;
     totalA = 0;
     totalB = 0;
     totalC = 0;
     totalBranco = 0;
     totalNulo = 0;

 //início da estrutura de repetição do/while para processar os dados
     do
     {  
        //comando para limpar a tela a cada seção
        system("cls");
        
        //título do programa
        printf("\tELEIÇÕES PREFEITURA DE ABRAVALÂNDIA\n\n\n");
      
        //acréscimo unitário do contador
     	contador = contador + 1;
     	
     	//comandos que pedem a leitura dos votos dos 3 candidatos, brancos e nulos
     	printf("Digite o número de votos para o CANDIDATO A durante a seção %d.\nResposta: ", contador);
     	scanf("%d", &candidatoA);
     	
     	printf("\nDigite o número de votos para o CANDIDATO B durante a seção %d.\nResposta: ", contador);
     	scanf("%d", &candidatoB);
     	
     	printf("\nDigite o número de votos para o CANDIDATO C durante a seção %d.\nResposta: ", contador);
     	scanf("%d", &candidatoC);
     	
     	printf("\nDigite o número de votos BRANCOS durante a seção %d.\nResposta: ", contador);
     	scanf("%d", &branco);
     	
     	printf("\nDigite o número de votos NULOS durante a seção %d.\nResposta: ", contador);
     	scanf("%d", &nulo);
     	
     	//cálculo do número total de votantes(total de votos válidos), e total de voto dos 3 candidatos, brancos e nulos
     	 totalA = totalA + candidatoA;
     	 totalB = totalB + candidatoB;
     	 totalC = totalC + candidatoC;
     	 totalBranco = totalBranco + branco;
     	 totalNulo = totalNulo + nulo;
		 
		 
		//comando para limpar a tela a cada seção
         system("cls");
     	
     	//título do programa
         printf("\n\n\tELEIÇÕES PREFEITURA DE ABRAVALÂNDIA\n\n\n");
        
     	//impressão dos resultados da seção
     	 printf("\tVOTOS SEÇÃO %d\n\n", contador);
     	 printf("CANDIDATO A.... %d VOTOS", candidatoA);
     	 printf("\nCANDIDATO B.... %d VOTOS", candidatoB);
     	 printf("\nCANDIDATO C.... %d VOTOS", candidatoC);
     	 printf("\nBRANCOS........ %d VOTOS", branco);
     	 printf("\nNULOS.......... %d VOTOS", nulo);
     	 
     	//estrutura de decisão if/else aninhado para determinar o candidato mais votado
         if((totalA>totalB) && (totalA>totalC))
             strcpy(maior_candidato, "CANDIDATO A");
         else
         {  
	     if((totalB>totalA) && (totalB>totalC))
            strcpy(maior_candidato, "CANDIDATO B");
         else
         {
             if((totalC>totalA) && (totalC>totalB))
                 strcpy(maior_candidato, "CANDIDATO C");
         }
         }
         
        //comando para continuar ou não com as seções
     	 printf("\n\nDeseja cadastrar nova seção <1-Sim, 2-Não>?\nResposta: ");
     	 scanf("%d", &continuar);
     	
	 } while(continuar == 1);
  
 //os comandos abaixo trarão os resultados da eleição
     system("cls");
     
 //título do programa
     printf("\n\n\tELEIÇÕES PREFEITURA DE ABRAVALÂNDIA\n\tRESULTADO FINAL\n\n\n");
     
 //impressão do número de votantes, votos dos três candidatos, brancos e nulos e candidato com maior número
     printf("NÚMERO DE VOTANTES......... %d ELEITORES", totalA + totalB + totalC + totalBranco + totalNulo);
     printf("\nCANDIDATO A................ %d VOTOS", totalA);
     printf("\nCANDIDATO B................ %d VOTOS", totalB);
     printf("\nCANDIDATO C................ %d VOTOS", totalC);
     printf("\nBRANCOS.................... %d VOTOS", totalBranco);
     printf("\nNULOS...................... %d VOTOS", totalNulo);
     printf("\nVÁLIDOS.................... %d VOTOS", totalA + totalB + totalC);
     printf("\n\nCANDIDATO COM MAIOR NÚMERO DE VOTOS: %s", maior_candidato);
          
 //estrutura de decisão if/else para determinar se as eleições foram ou não válidas
     if(totalA + totalB + totalC > totalBranco + totalNulo)
         printf("\n\n\tELEIÇÕES VÁLIDAS!!");
     else
         printf("\n\n\tELEIÇÕES INVÁLIDAS! TOTAL DE VÓTOS VÁLIDOS INFEROR À SOMA DE NULOS + BRANCOS!");
         
 //estrutura de decisão if/else para determinar se as eleições terão segundo turno
     if(maior_candidato > ((totalA + totalB + totalC)*50)/100)
         printf("\nNÃO HAVERÁ SEGUNDO TURNO!");
     else
         printf("\nHAVERÁ SEGUNDO TURNO!");
         
     getche();   
     
  }
