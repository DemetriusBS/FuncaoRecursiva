#include<stdio.h>
#include<stdlib.h>

int contador = 0; // Declarando vari�vel

void contaNum(int inicio, int final); // Fun��o

int main() {

	int inicio, final, contador = 0; // Declarando as vari�veis

	printf("Por favor, digite um numero inteiro: "); // Solicita��o de n�mero
	scanf_s("%d", &inicio); // Coleta e armazenamento do dado fornecido 
	printf("\nPor favor, digite outro numero inteiro: "); // Solicita��o de n�mero
	scanf_s("%d", &final); // Coleta e armazenamento do dado fornecido 

	printf("\n\n"); // Quebra de linha

	for (int i = inicio; i < final; i++) // Teste
	{
		contador++; // Incrementando o contador que contar� quantos n�meros h� entre os n�meros digitados
	}

	printf("Exibicao de forma Iterativa\n");
	printf("Quantidade de numeros entre os valores: %d\n\n", contador - 1); // Exibi��o dos numeros existentes entre os valores - Forma Iterativa

	contaNum(inicio, final); // Chamada da fun��o

    printf("Exibicao de forma Recursiva\n");
	printf("Quantidade de numeros entre os valores: %d\n\n", contador - 1); // Exibi��o dos n�meros existentes entre os valores - Forma Recursiva

	return 0;
	system("pause");
}

void contaNum(int inicio, int final) { // Fun��o recursiva

	if (inicio < final) // Teste
	{
		contador++; // Incrementando o contador que contar� quantos valores h� entre os n�meros digitados
		contaNum(inicio + 1, final); // Chamada da fun��o dentro da fun��o
	}
	
}