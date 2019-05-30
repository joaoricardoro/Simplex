#ifndef ANT_SYSTEM_H_INCLUDED
#define ANT_SYSTEM_H_INCLUDED

#include <stdbool.h>
#define TAMANHO 60 // Não sei porquê, mas não aceita valor maior que 80 !!!
#define INFINITO 900000

// Colocar cabeçalho funções aqui.

// Funções de leitura e escrita de matriz.
void imprime_matriz(float matriz[TAMANHO][TAMANHO], int num_linhas, int num_colunas);
void imprime_vetor(float vetor[TAMANHO], int num_linhas);
void imprime_vetor_int(int vetor[TAMANHO], int num_linhas);
void le_matriz(float matriz[TAMANHO][TAMANHO], int num_linhas, int num_colunas);
void le_vetor(float vetor[TAMANHO], int num_linhas);

// Inicializações.
void inicializa_vetor(float vetor[TAMANHO]);
void inicializa_matriz(float matriz[TAMANHO][TAMANHO]);

// Funções de manipulação de matrizes e vetores.
void transposta(float matriz[TAMANHO][TAMANHO], float matriz_transposta[TAMANHO][TAMANHO], int num_linhas, int num_colunas);
float multiplica_vetores(float vetor1[TAMANHO], float vetor2[TAMANHO], int num_linhas);
void coluna_matriz(float matriz[TAMANHO][TAMANHO], float vetor[TAMANHO], int num_linhas, int coluna);
int obtem_menor_custo(float vetor[TAMANHO], int num_linhas, float *custo_menor);
void diagonaliza_um(float matriz[TAMANHO][TAMANHO], int num_linhas);

// Eliminação de Gauss
void gauss(float matriz[TAMANHO][TAMANHO], float vetor_b[TAMANHO], float vetor_x[TAMANHO], int num_linhas, int num_colunas);
void simplex(float matriz_A[TAMANHO][TAMANHO], int vetor_relacional[TAMANHO], float vetor_b[TAMANHO], int minimiza, float vetor_custo[TAMANHO], float vetor_x[TAMANHO], float *valor_Z, int num_linhas, int num_colunas);

#endif // ANT_SYSTEM_H_INCLUDED
