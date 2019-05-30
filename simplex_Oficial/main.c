// Implementação do algoritmo simplex.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "gauss.h"

int main(){
	system("color f9");

	float matriz_A[TAMANHO][TAMANHO]; // restrições
	float vetor_x[TAMANHO];
	float vetor_b[TAMANHO];
	int vetor_relacional[TAMANHO]; // maior ou menor ou igual
	float vetor_custo[TAMANHO];

	int num_linhas = 2;
	int num_colunas = 3;
    int minimiza = 0; // 1 = Min, 0 = Max
    float valor_Z;

	// Exemplo 3.3
	matriz_A[0][0] = -1;  matriz_A[0][1] = -4;  matriz_A[0][2] = -2;  // matriz_A[0][3] = 8;
	matriz_A[1][0] = 3;  matriz_A[1][1] = 2;  matriz_A[1][2] = 0; // matriz_A[1][3] = -4;
	// matriz_A[2][0] = 4;  matriz_A[2][1] = -2;  matriz_A[2][2] = 1; matriz_A[2][3] = 3;
	// matriz_A[3][0] = 0;  matriz_A[3][1] = -2;  matriz_A[3][2] = -8; matriz_A[3][3] = 10;

	vetor_b[0] = -8;
	vetor_b[1] = 6;
	// vetor_b[2] = 10;

	vetor_relacional[0] = -1; // -1 -> menor ou igual. +1 -> maior ou igual. 0 -> igual.
	vetor_relacional[1] = 1;
	// vetor_relacional[2] = 0;

	vetor_custo[0] = 2;
	vetor_custo[1] = 3;
	vetor_custo[2] = 1;
	// vetor_custo[3] = 8;

	inicializa_vetor(vetor_x);

	//gauss(matriz_A, vetor_b, vetor_x, num_linhas, num_colunas);
    simplex(matriz_A, vetor_relacional, vetor_b, minimiza, vetor_custo, vetor_x, &valor_Z, num_linhas, num_colunas);

	printf("\nO vetor x eh:\n\n");
	imprime_vetor(vetor_x, num_linhas + num_colunas);
	printf("\n");

	if(minimiza == 0){
        printf("\nMax f(x) = %4.2f\n\n", valor_Z);
	}
	else{
        printf("\nMin f(x) = %4.2f\n\n", valor_Z);
	}

	system("pause");
    return 0;
}
