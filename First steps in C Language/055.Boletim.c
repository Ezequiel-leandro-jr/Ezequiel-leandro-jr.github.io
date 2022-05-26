#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main(void)
{   //comando para escrever com acentuação
	setlocale(LC_ALL, "Portuguese");
	
	//criação do novo tipo de variável (registro): boletim
	typedef struct {
		
		int matricula;
		char nome[20], disciplina [10], situacao[10];
		float media;
		
		
	} tipo_boletim;
	
	//declaração do vetor "alunos" do tipo boletim e demais variáveis
	tipo_boletim alunos[100];
	int continuar, opcao, numero, alterar, excluir, ie, q = 0, i = 0;

	//estrutura de comando para preencher os 50 boletins, alterá-los, visualizá-los ou sair do programa
	do
	{   
	    system("cls");
	    
		printf("MENU\n\n1. Preencher novo boletim\n2. Alterar boletim\n3. Visualizar Boletins\n4. Excluir Boletim\n5. Sair\n\n");
	    scanf("%d", &opcao);
	    
	     switch(opcao)
	     {
		     case 1:  
	                 system("cls");
	             
	                 q++;
	             
		             printf("Digite o número de matrícula do Aluno %d (até 9 números): ", q);
		             scanf("%d", &alunos[q-1].matricula);
		         
		             printf("\nDigite o nome do Aluno (até 20 caracteres): ");
		             fflush(stdin);
		             gets(alunos[q-1].nome);
		         
		             printf("\nDigite o nome da disciplina (até 9 caracteres): ");
		             fflush(stdin);
		             gets(alunos[q-1].disciplina);
		         
		             printf("\nDigite a média do Aluno: ");
		             scanf("%f", &alunos[q-1].media);
		             
		             if(alunos[q-1].media >= 7)
		             {  
		                fflush(stdin);
		             	strcpy(alunos[q-1].situacao, "APROVADO"); 
					 } else if(alunos[q-1].media < 7)
					   {     
					         fflush(stdin);
					   	     strcpy(alunos[q-1].situacao, "REPROVADO");
					   }
		             
		             fflush(stdin);
		             
	                 break;
	        
	         case 2:
	    	         system("cls");
	    	     
	    	         printf("Qual boletim você deseja alterar?\n\n");
	    	     
	    	         for(i = 0; i < q; i++)
	    	         {
	    	     	     printf("%d.%s\n", i+1, alunos[i].nome);
				     }
				     
				     scanf("%d", &numero);
				     
				     numero = numero - 1;
				 
				     if(numero >= q)
				     {
				 	     printf("\n\nBoletim Inexistente!");
				 	
				     } else
				       {
				   	         do
						     {
				   	    
				   	             system("cls");
				 
				                 printf("\nO que você deseja alterar no boletim de %s?\n", alunos[numero].nome);
				                 printf("1. Matrícula\n2. Nome\n3. Disciplina\n4. Média\n5. Sair\n\n");
						         scanf("%d", &alterar);						 
						 
						         switch(alterar)
						         {
						 	         case 1:
						 		             system("cls");
						 		   
						 		             printf("Digite o novo número de matrícula de %s: ", alunos[numero].nome);
						 		             scanf("%d", &alunos[numero].matricula);
						 		             break;
						 	
						 	         case 2:
						 		             system("cls");
						 		   
						 		             printf("Digite o novo nome da matrícula %d: ", alunos[numero].matricula);
						 		             fflush(stdin);
						 		             gets(alunos[numero].nome);
						 		             fflush(stdin);
						 		             break;
						 		   
						 	         case 3:
						 		             system("cls");
						 		   
						 		             printf("Digite o novo nome da disciplina do boletim %d: ", numero + 1);
						 		             fflush(stdin);
						 		             gets(alunos[numero].disciplina);
						 		             fflush(stdin);
						 		             break;
						 		   
						 	         case 4:
						 		             system("cls");
						 		   
						 		             printf("Digite a nova média de %s: ", alunos[numero].nome);
						 		             scanf("%f", &alunos[numero].media);
						 		             
						 		             if(alunos[numero].media >= 7)
		                                     {  
		                                         fflush(stdin);
		             	                         strcpy(alunos[numero].situacao, "APROVADO"); 
					                         } else if(alunos[numero].media < 7)
					                           {     
					                              fflush(stdin);
					   	                          strcpy(alunos[numero].situacao, "REPROVADO");
					                            }
		             
		                                     fflush(stdin);
		                                     
						 		             break;
						 		   
						             default:
						    	             if((alterar != 1) && (alterar != 2) && (alterar != 3) && (alterar != 4) && (alterar != 5))
						                     {
						             	        printf("Comando Incorreto!\n\n");
						                        getche();
						                        
									         } break;
						         }
						 
					         } while (alterar != 5);
				   } break;
				   
		     case 3:
				     system("cls");
				     printf("ETE GINÁSIO PERNAMBUCANO\n\n\n");
				     printf("BOLETINS\n\n");
				     printf("________________________________________________________________________\n");
				     printf("\nMATRÍCULA   NOME                   DISCIPLINA   MÉDIA   SITUAÇÃO");
				     printf("\n________________________________________________________________________\n");
				        
				     for(i = 0; i < q; i++)
				     {
				        printf("\n%9d   %-20s   %-10s   %5.2f   %-10s", alunos[i].matricula, alunos[i].nome, alunos[i].disciplina, alunos[i].media, alunos[i].situacao);	
					 }
						
				     printf("\n______________________________________________________________________\n");
				     printf("\nTecle enter para voltar ao menu principal...\n");
				         	
				     getche();
				     break;
					  
			 case 4:
			         system("cls");
			         
			         printf("Escolha o boletim que deseja excluir:\n");
						 
					 for(i = 0; i < q; i++)
	    	         {
	    	             	
	    	     	    printf("%d.%s\n", i+1, alunos[i].nome);
				     }
				     
				     scanf("%d", &excluir);
				     
				     excluir = excluir - 1;
				         
				     if(excluir >= q)
				     {
				 	    printf("\n\nBoletim Inexistente!");
				 	    getche();
				 	
				     }else
				      {
					     alunos[99].matricula = alunos[excluir].matricula;
						 strcpy(alunos[99].nome, alunos[excluir].nome);
						 strcpy(alunos[99].disciplina, alunos[excluir].disciplina);
						 alunos[99].media = alunos[excluir].media;
						 strcpy(alunos[99].situacao, alunos[excluir].situacao);
						 
						 q--;
						 ie = excluir - 1;
						 
						 for(i = ie; i < q; i++)
						 {
						 	alunos[excluir].matricula = alunos[excluir+1].matricula;
						 	strcpy(alunos[excluir].nome, alunos[excluir+1].nome);
						 	strcpy(alunos[excluir].disciplina, alunos[excluir+1].disciplina);
						    alunos[excluir].media = alunos[excluir+1].media;
						    strcpy(alunos[excluir].situacao, alunos[excluir+1].situacao);
						    
						    excluir = excluir + 1;
						 	
						 }	 
						 
					  } break;		  				
						 
			 default:
			 	     if((opcao != 1) && (opcao != 2) && (opcao != 3) && (opcao != 4) && (opcao != 5))
					 {
						printf("Comando Incorreto!\n\n");
					    getche();
						                        
					 } break;					 
					 			 			 		   	 		
} 

}while ((opcao != 5) && (q <= 100));

system("pause");

}
