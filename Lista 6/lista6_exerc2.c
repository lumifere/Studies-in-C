/*
Programa: lista6_exerc2.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 27/01/2022
Descrição: A partir de duas matrizes 6x6, calcula uma matriz resultante a partir da resultante da matriz de origem.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* Declaração das variáveis e matrizes globais. */
int matrizA[6][6], matrizB[6][6], i, j;

/* Protótipos das funções. */
void calculaM(int m[][6]);
void imprimeM(int m1[][6], int m2[][6]);

/* Randomização do conteúdo da matriz de origem e chamada das outras funções. */
int main() {  
    srand(time(NULL));
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++)
            matrizA[i][j] = (rand() % 9) + 1; 
    }
    calculaM(matrizA);
    imprimeM(matrizA, matrizB);
}

/* Função calculaM para calcular a matriz resultante. */
void calculaM(int m[][6]) {
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) 
            matrizB[i][j] = matrizA[i][j] * matrizA[i][i];
    }
}

/* Função imprimeM para imprimir as matrizes formatadas. */
void imprimeM(int m1[][6], int m2[][6]) {
    printf("Entrada:");
    for (i = 0; i < 6; i++) {
        printf("\n");
        for (j = 0; j < 6; j++)
            printf("%d\t", matrizA[i][j]); 
    }
    printf("\n\nSaida:");
    for (i = 0; i < 6; i++) {
        printf("\n");
        for (j = 0; j < 6; j++)
            printf("%d\t", matrizB[i][j]); 
    }
}