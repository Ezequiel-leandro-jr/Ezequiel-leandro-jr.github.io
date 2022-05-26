#include <stdio.h>

int main(void)
{
	char vetor[5] = {'a', 'e', 'i', 'o', 'u'};
	char *c;
	
	c = vetor;
	
	printf("%s\n", c);//a saída são os elementos do vetor
	printf("%c\n\n", c[0]);//a saída é o elemento do índice base
	
	c = &vetor[2];
	
	printf("%c\n", *c);
	
	c = c + 1;
	
	printf("%c", *c);
	
	
	getche();
}