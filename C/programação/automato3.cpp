#include <bits/stdc++.h>

using namespace std;

int main() {
	int states_count;
	printf("Digite o n�mero de estados: ");
	scanf("%d", &states_count);
	
	int initial_state;
	printf("Digite o n�mero do estado inicial, indexado de 0 a n - 1: ");
	scanf("%d", &initial_state);
	
	int alphabet_length;
	printf("Me diga o tamanho do alfabeto: ");
	scanf("%d", &alphabet_length);
	
	string alphabet[alphabet_length];
	printf("Digite o alfabeto (utilize apenas caracteres ingleses), cada caractere separado por um espa�o: ");
	for (int i = 0; i < alphabet_length; i++) {
		cin >> alphabet[i];
	}
	
	int final_states_count;
	printf("Digite a quantidade de estados finais: ");
	scanf("%d", &final_states_count);
	
	bool final_states[states_count];
	memset(final_states, 0, sizeof final_states);
	
	printf("Digite todos os estados finais, separados por espa�o, indexados de 0 a n - 1: ");
	for (int i = 0; i < final_states_count; i++) {
		int aux;
		scanf("%d", &aux);
		
		final_states[aux] = true;
	}
	
	int transictions[states_count][128];
	printf("Agora, me diga a tabela de transi��o, onde as linhas s�o os estados e as colunas s�o caracteres do alfabeto:\n");
	for (int i = 0; i < states_count; i++) {
		for (int j = 0; j < alphabet_length; j++) {
			scanf("%d", &transictions[i][alphabet[j][0]]);
		}
	}
	
	int tests_count;
	printf("Me diga quantos testes voc� quer fazer: ");
	scanf("%d", &tests_count);
	
	getchar();
	
	for (int i = 0; i < tests_count; i++) {
		printf("Me d� a palavra de entrada w: ");
		string input;
		getline(cin, input);
		
		int actual_state = initial_state;
		for (int j = 0; j < input.length(); j++) {
			actual_state = transictions[actual_state][input[j]];
		}
		
		printf("Veredito: %s\n", final_states[actual_state] ? "Aceitou" : "Rejeitou");
	}
}
