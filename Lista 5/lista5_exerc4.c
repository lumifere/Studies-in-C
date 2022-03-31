/*
Programa: lista5exerc4.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 13/01/2022
Descrição: Lê duas matrizes (5x5) de números inteiros, calcula e imprime o resultado da multiplicação de ambas.
*/
#define TAM 5
#include <stdio.h>
int main() {
    /* Declaração e inicialização das variáveis. */
    int i, j, k, multiplic = 0, matriz1[TAM][TAM], matriz2[TAM][TAM];

    /* Inserção dos valores das matrizes e blindagem. */
    printf("Bem vindo ao programa que multiplica matrizes!\nPreencha a primeira matriz com 25 entradas, de 5 em 5 por linha: \n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (scanf("%d", &matriz1[i][j]) == 0) {
                printf("Entrada invalida!");
                return 1;
            }
        }
    }

    printf("\nPreencha agora a segunda matriz tambem com 25 entradas, de 5 em 5 por linha tambem: \n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (scanf("%d", &matriz2[i][j]) == 0) {
                printf("Entrada invalida!");
                return 1;
            }
        }
    }
    
    /* Alocação dos resultados na matriz resultado e sua impressão. */
    printf("\nA matriz resultado da multiplicacao de ambas as matrizes eh:\n");
    for (i = 0; i < TAM; i++) { 
        for (j = 0; j < TAM; j++) {
            multiplic = 0;
            for (k = 0; k < TAM; k++) {
                multiplic += matriz1[i][k]*matriz2[k][j];
            }
            printf("%d\t", multiplic); 
        }  
        printf("\n");
    }     

    return 0;
}