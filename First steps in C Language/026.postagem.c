/* programa para ler o peso de uma encomenda, tipo
de entrega(1-sedex, 2-sedex 10) e regi�o onde ser� entregue a
encomenda(1- Norte, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste,
5-Sul), calcular o valor de postagem com base nas condi��es
referentes ao peso, regi�o de entrega e tipo de entrega dispostos
na apostila e imprimir o valor total da postagem */

//Inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>

int main(void) {
	
	//Comando que faz escrever com acentua��o
	setlocale(LC_ALL,"Portuguese");
	
	//Declara��o das vari�veis
	float peso, postagem;
	int tipo, regiao;
	
	//T�tulo esubt�tulo do programa
	printf("\t    LOJAS PYONGYANG\n\n\n\n");
	printf("\tC�lculo do valor da postagem\n\n\n");
	
	//Leitura dos seguintes dados de entrada: peso, tipo de entrega e regi�o de entrega
	printf("Qual a regi�o da entrega?\n\n(1- Norte, 2- Nordeste, 3- Centro-Oeste, 4- Sudeste, 5- Sul)\n\n");
	printf("Para entregar na regi�o Norte...............R$ 3,00\nPara entregar na regi�o Nordeste...........R$ 2,00\n");
	printf("Para entregar na regi�o Centro-Oeste........R$ 6,00\nPara entregar na regi�o Sudeste............R$ 5,00\n");
	printf("Para entregar na regi�o Sul.................R$ 7,00\n\nResposta: ");
	scanf("%d", &regiao);
	printf("\n\n__________________________________________________________________________\n\n");
	printf("Qual o tipo de entrega?\n\n(1- Sedex, 2- Sedex 10)\n\n");
	printf("Para entrega com Sedex......................R$ 9,00\nPara entrega com Sedex 10...................R$ 11,00\n\nResposta: ");
	scanf("%d", &tipo);
	printf("\n\n__________________________________________________________________________\n\n");
	printf("Digite aqui o peso da encomenda, em kg.\n\n ");
	printf("At� 1kg.....................................R$ 5,00\nDe 1kg at� 5kg..............................R$ 10,00\n");
	printf("Acima de 5kg................................R$ 15,00 + 3,00 por kg excedente\n\nResposta: ");
	scanf("%f", &peso);
	
	postagem = 0;
	
	//Switch para os casos referentes � regi�o, com if-else referentes � peso e tipo de entrega
	switch(regiao)
	{
		case 1: postagem = postagem+3; break;
		case 2: postagem = postagem+2; break;
		case 3: postagem = postagem+6; break;
		case 4: postagem = postagem+5; break;
		case 5: postagem = postagem+7; break;
		default: printf("\n\nDADO DE REGI�O INCORRETO!!\n\n"); break;
		
    }
    
    //Switch para os casos referentes ao tipo de entrega
    switch(tipo)
    {
    	case 1: postagem = postagem+9; break;
    	case 2: postagem = postagem+11; break;
    	default: printf("\n\nDADO DE TIPO DE ENTREGA INCORRETO!!\n\n"); break;
	}
	//If-else para os casos de peso	
    if (peso < 1.00)
	postagem = postagem+5;
	else
	{
		if(peso >= 1.00 && peso <= 5.00)
		postagem = postagem+10;
		else
		{
			if(peso > 5.00)
			postagem = ((peso-5.00)*3)+15+postagem;
		}
	}
	
	//Impress�o dos resultados
	printf("\n\n\n\tVALOR TOTAL DA POSTAGEM.....................R$ %.2f\n\n", postagem);
	
    getche();
}