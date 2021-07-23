/*
LARISSA DE OLIVEIRA DUARTE  - 20102240
NICOLE DE MELO ARAUJO - 20102978 
GABRIELA DA SILVA SERRA - 20103489
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pilha
{
	
	int n; 
	char palavra[31]; 
	
}; 

typedef struct pilha Pilha; 

void pilha_coloca(Pilha* p, char c)
{
	
	
	
	p->palavra[p->n] = c; 
	p->n++; 
	
}

char pilha_retira(Pilha* p)
{

	
		
	char c; 
	
	c = p->palavra[p->n-1]; 
							
	p->n--; 
	
	return c; 
	
}

int main(void)
{
	
	int i;
	char palavra[31];
	
	printf("\n\tDigite sua palavra: "); scanf(" %30s", palavra);
	
	int tamanho = strlen(palavra);
	
	Pilha nova; 
	nova.n = 0;	
	
	for(i = 0; i < tamanho; i++) 
		pilha_coloca(&nova, palavra[i]);
	
	printf("\n\tPalavra de forma normal: %s\n", palavra);
	
	printf("\n\tPalavra invertida: ");
	for(i = 0; i < tamanho; i++) 
		printf("%c", pilha_retira(&nova));
	
	printf("\n");
	
	return 0;
	
}
