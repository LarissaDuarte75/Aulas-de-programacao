#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void inserir (void);
void mostrar(void);
void excluir(void);
void mostrarimc(void);
int i;
struct registro{
	
	char matricula;
	char nome;
	char email;
	float peso, altura;
	
	
};
	struct registro vetor[20];
	
	
	int num;
	
	 

int main(void) {
	float imc;
	
	
	for (;;)
	{
		printf("\n Bem-Vindo! Escolha uma Opcao Abaixo:");
		printf("1- Cadastrar Aluno\n");
		printf("2- Listar Alunos");
		printf("3- Excluir Alunos");
		printf("4- Listar IMC");
		printf("0- Sair");
		
		scanf("%d", &num);
		switch(num)
		{
			case 1: inserir ();
			break;
			case 2: mostrar ();
			break;
			case 3: excluir ();
			break;
			case 4: mostrarimc();
			break;
			case 0: exit(0);
			default: puts ("Tente Novamente");
			
			
			
			
		}
		
		
		
		
		
	}
	getchar ();
	
	void inserir (void)
	{
		for (i=0; i<10; i++){
		
		fflush (stdin);
		printf("\n Qual a matricula do Aluno? \n ");
		gets(vetor[i].matricula);
		fflush (stdin);
		Printf("\n Nome do aluno: \n");
		gets(vetor[i].nome);
		fflush (stdin);
		printf("\n E-mail do aluno: \n");
		gets(vetor[i].email);
		fflush (stdin);
		printf("\n Peso do aluno: \n");
		gets(vetor[i].peso);
		fflush (stdin);
		printf("\n Altura do Aluno \n");
		gets(vetor[i].altura);
		fflush(stdin);
		
		
		
		
		}
	
	getche();	
		}
	void mostrar(void)
	
	{ 
	int i;
	
		for (i=0,i<10; i++){
			
			printf("\n Matricula do Aluno: %s", vetor[i].matricula);
			printf("\n Nome do Aluno: %s", vetor[i].nome);
			printf("\n E-mail do Aluno: %s", vetor[i].email);
			printf("\n IMC do Aluno: %f", &imc);
			
			
			
		}
	
	
	
	
	}
	
	void excluir (void)
	{
		char matricula;
		
		printf("Qual a Matricula do Aluno que voce deseja remover? \n");
		gets(matricula);
			for(i=0; i<10; i++){
				
				if ((strcmp(matricula,vetor[i].matricula))==0)
				for ( ;i<9; i++){
					
					strcpy(vetor[i].matricula, vetor[i+1].matricula);
					strpy(vetor[i].nome, vetor[i+1].nome);
					strpy(vetor[i].email, vetor[i+1].email );
					strpy(vetor[i].peso, vetor[i+1].peso);
					strpy(vetor[i].altura, vetor[i+1].altura);
					
					
				}
				
			}
		getche();
		
	}
	
	
	return 0;
}
