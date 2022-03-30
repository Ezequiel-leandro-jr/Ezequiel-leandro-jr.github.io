/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 28 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 3, VOLUME 2 */

/* 01. Desenvolva uma função que recebe as três notas do aluno como
parâmetro e retorne a sua média. */

//RESPOSTA:

//declaração das bibliotecas
#include <stdio.h>
#include <locale.h>

//declaração das variáveis globais
float nota1, nota2, nota3, media;

//declaração do módulo 1, que escreve o cabeçalho
void escreva_cabecalho()
{
	system("cls");
	printf("\tMÉDIA ENTRE TRÊS NOTAS DE UM ALUNO\n");
	printf("-----------------------------------------\n\n");
}

//declaração do módulo 2, que realiza o cálculo da média entre três valores
float calc_media(float n1, float n2, float n3)
{
	float m;
	m = (n1 + n2 + n3) / 3;
	return m;
}

//programa principal
  main() 
 {  
 //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
 //declaração do módulo 1 no main()
 escreva_cabecalho();
 
 //comandos que pedem a leitura das três notas
 printf("Digite a primeira nota: ");
 scanf("%f", &nota1);
 
 printf("Digite a segunda nota: ");
 scanf("%f", &nota2);
 
 printf("Digite a terceira nota: ");
 scanf("%f", &nota3);
 
 //declaração do módulo 2 no main()
 media = calc_media(nota1, nota2, nota3);
 
 //impressão do resultado
 system("cls");
 printf("\n\n\tRESULTADO\n\n"); //título
 
 printf("A média entre as notas %.1f, %.1f e %.1f = %.1f", nota1, nota2, nota3, media);
 
 getche();
 
 }