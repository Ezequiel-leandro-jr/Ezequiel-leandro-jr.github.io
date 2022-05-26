/* ETE Ginásio Pernambucano
   Desenvolvimento de Aplicações Desktop
   Professor Emamanuel Barreto
   Aluno: Ezequiel Leandro Jr
   Atividade String 003
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// procedimento para converter os caracteres de uma string em maiúsculo
void maiusculo(char string1[])
{
    int i = 0;
    
    while(string1[i] != '\0')
	{
        string1[i] = toupper(string1[i]);
        i++;
    }
    
    string1[i] = '\0'; 
}

int main(void) 
{
	//declaração da variável
    char mensagem[50];

    //comando de leitura da mensagem
    printf("Digite uma mensagem: ");
    fflush(stdin);
    gets(mensagem);

    //procedimento aplicada, com a variável mensagem de parâmetro real
    maiusculo(mensagem);
    
    //impressão do resultado
    printf("\n\n%s", mensagem);

    getche();
}