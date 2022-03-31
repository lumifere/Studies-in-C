/*
Programa: lista4a_exerc1.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 03/01/2022
Descrição: Imprime uma quantidade de linhas e colunas, determinada pelo usuário, preenchidas pelo símbolo "*".
*/

#include <stdio.h>
int main () {
    /* Declaração e inicialização das variáveis. */
    int linha, coluna, i, j;
    linha = -1;
    coluna = -1;

    /* Inserção da quantidade de linhas e colunas, além da blindagem de cada uma. */
    printf("Insira a quantidade de linhas desejada na figura: ");
    scanf("%d", &linha);
    while (getchar() != '\n');

    while (linha < 0) {
        printf("Quantidade invalida de linhas!\nDigite uma quantidade de linhas valida: ");
        scanf("%d", &linha);
        while (getchar() != '\n');
    }
    
    printf("Insira a quantidade de colunas desejada na figura: ");
    scanf("%d", &coluna);
    while (getchar() != '\n');
    
    while (coluna < 0) {
        printf("Quantidade invalida de colunas!\nDigite uma quantidade de colunas valida: ");
        scanf("%d", &coluna);
        while (getchar() != '\n');
    }

    /* Impressão do resultado através de repetições. */
    for (i = 1; i <= linha; i++) {
        printf("\n");
        for (j = 1; j <= coluna; j++) {
            putchar('*');
        }
    }
    printf("\n\n");
    
    return 0;
}