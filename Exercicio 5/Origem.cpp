#include<stdio.h>
#include<stdlib.h>

int contador = 0; // Declarando variável

void contaNum(int inicio, int final); // Função

int main() {

	int inicio, final, contador = 0; // Declarando as variáveis

	printf("Por favor, digite um numero inteiro: "); // Solicitação de número
	scanf_s("%d", &inicio); // Coleta e armazenamento do dado fornecido 
	printf("\nPor favor, digite outro numero inteiro: "); // Solicitação de número
	scanf_s("%d", &final); // Coleta e armazenamento do dado fornecido 

	printf("\n\n"); // Quebra de linha

	for (int i = inicio; i < final; i++) // Teste
	{
		contador++; // Incrementando o contador que contará quantos números há entre os números digitados
	}

	printf("Exibicao de forma Iterativa\n");
	printf("Quantidade de numeros entre os valores: %d\n\n", contador - 1); // Exibição dos numeros existentes entre os valores - Forma Iterativa

	contaNum(inicio, final); // Chamada da função

    printf("Exibicao de forma Recursiva\n");
	printf("Quantidade de numeros entre os valores: %d\n\n", contador - 1); // Exibição dos números existentes entre os valores - Forma Recursiva

	return 0;
	system("pause");
}

void contaNum(int inicio, int final) { // Função recursiva

	if (inicio < final) // Teste
	{
		contador++; // Incrementando o contador que contará quantos valores há entre os números digitados
		contaNum(inicio + 1, final); // Chamada da função dentro da função
	}
	
}