/*
Programa: lista5exerc2.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 13/01/2022
Descrição: Lê duas matrizes (2x3) de números inteiros e imprime a soma de ambas.
*/
#include <stdio.h>
int main() {
    /* Declaração das variáveis. */
    int i, j, matriz1[2][3], matriz2[2][3], matriz_result[2][3];

    /* Inserção dos valors das matrizes e blindagem. */
    printf("Bem vindo ao programa de soma de matrizes!\nPreencha a primeira matriz com 6 entradas: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (scanf("%d", &matriz1[i][j]) == 0) {
                printf("Entrada invalida!");
                return 1;
            }
            while(getchar() != '\n');
        }
    }

    printf("\nPreencha agora a segunda matriz tambem com 6 entradas: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (scanf("%d", &matriz2[i][j]) == 0) {
                printf("Entrada invalida!");
                return 1;
            }
            while(getchar() != '\n');
        }
    }

    /* Alocação dos resultados na matriz resultado e sua impressão. */
    printf("\nA matriz resultado da soma de ambas as matrizes eh:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            matriz_result[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d\t", matriz_result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}