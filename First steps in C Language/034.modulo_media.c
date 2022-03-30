/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 28 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 3, VOLUME 2 */

/* 01. Desenvolva uma fun��o que recebe as tr�s notas do aluno como
par�metro e retorne a sua m�dia. */

//RESPOSTA:

//declara��o das bibliotecas
#include <stdio.h>
#include <locale.h>

//declara��o das vari�veis globais
float nota1, nota2, nota3, media;

//declara��o do m�dulo 1, que escreve o cabe�alho
void escreva_cabecalho()
{
	system("cls");
	printf("\tM�DIA ENTRE TR�S NOTAS DE UM ALUNO\n");
	printf("-----------------------------------------\n\n");
}

//declara��o do m�dulo 2, que realiza o c�lculo da m�dia entre tr�s valores
float calc_media(float n1, float n2, float n3)
{
	float m;
	m = (n1 + n2 + n3) / 3;
	return m;
}

//programa principal
  main() 
 {  
 //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");
    
 //declara��o do m�dulo 1 no main()
 escreva_cabecalho();
 
 //comandos que pedem a leitura das tr�s notas
 printf("Digite a primeira nota: ");
 scanf("%f", &nota1);
 
 printf("Digite a segunda nota: ");
 scanf("%f", &nota2);
 
 printf("Digite a terceira nota: ");
 scanf("%f", &nota3);
 
 //declara��o do m�dulo 2 no main()
 media = calc_media(nota1, nota2, nota3);
 
 //impress�o do resultado
 system("cls");
 printf("\n\n\tRESULTADO\n\n"); //t�tulo
 
 printf("A m�dia entre as notas %.1f, %.1f e %.1f = %.1f", nota1, nota2, nota3, media);
 
 getche();
 
 }