/* Programa que lê a matrícula do aluno e suas 3
notas. Após isso, calcula a média e verifica qual o seu conceito.
Se o conceito for A, B ou C e REPROVADO se o conceito for D
ou E. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	float n1, n2, n3, media;
	int matricula;
	
	// Título do programa
	printf("...............ETE GINÁSIO PERNAMBUCANO...............\n\n\n");
	
	// Pede que o usuário digite a matrícula do aluno
	printf("Digite o número da matrícula do(a) aluno(a): ");
	scanf("%d", &matricula);
	
	// Pede que digite-se a nota 1
	printf("Nota 1: ");
	scanf("%f", &n1);
	
	// Pede que digite-se a nota 2
	printf("Nota 2: ");
	scanf("%f", &n2);
	
	// Pede que digite-se a nota 3
	printf("Nota 3: ");
	scanf("%f", &n3);
	
	// Cálculo da média
	media =(n1+n2+n3)/3.0;
	
	// Sequência de if else aninhado que calcula a média, o conceito da média e a situação de aprovação. Após isso, imprime o resultado
	if (media>=9.0) 
	  { printf("\n\n\nAluno de matrícula: %d", matricula);
		printf("\nNotas: %.1f, %.1f e %.1f", n1, n2, n3);
		printf("\nMédia: %.1f", media);
		printf("\nConceito: A");
		printf("\nSituação: APROVADO");
	} else 
		{ if ((media>=7.5) && (media<9.0)) {
		
		  printf("\n\n\nAluno de matrícula: %d", matricula);
		  printf("\nNotas: %.1f, %.1f e %.1f", n1, n2, n3);
		  printf("\nMédia: %.1f", media);
		  printf("\nConceito: B");
		  printf("\nSituação: APROVADO");
		  } else 
		   { if ((media>=6.0) && (media<7.5)) {
		     printf("\n\n\nAluno de matrícula: %d", matricula);
		     printf("\nNotas: %.1f, %.1f e %.1f", n1, n2, n3);
		     printf("\nMédia: %.1f", media);
		     printf("\nConceito: C");
		     printf("\nSituação: APROVADO");
	        } else 
			   { if ((media>=4.0) && (media<6.0)) {
			     printf("\n\n\nAluno de matrícula: %d", matricula);
		         printf("\nNotas: %.1f, %.1f e %.1f", n1, n2, n3);
		         printf("\nMédia: %.1f", media);
		         printf("\nConceito: D");
		         printf("\nSituação: REPROVADO");
		         } else 
				  { if (media<4.0) 
		            printf("\n\n\nAluno de matrícula: %d", matricula);
		            printf("\nNotas: %.1f, %.1f e %.1f", n1, n2, n3);
		            printf("\nMédia: %.1f", media);
		            printf("\nConceito: E");
		            printf("\nSituação: REPROVADO");
		          }
		        }
	        }
	    }
	
		    
    getche();
}