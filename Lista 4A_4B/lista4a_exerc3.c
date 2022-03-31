/*
Programa: lista4a_exerc3.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 06/01/2022
Descrição: Imprime uma quantidade de linhas, determinada pelo usuário, preenchidas pelo símbolo "*" de forma decrescente.
*/

#include <stdio.h>
int main () {
    /* Declaração e inicialização das variáveis. */
    int linha, i, j, cont;
    j = 1;
    linha = -1;

    /* Inserção da quantidade de linhas e blindagem. */
    printf("Insira a quantidade de linhas desejada na figura: ");
    scanf("%d", &linha);
    while (getchar() != '\n');

    while (linha < 0) {
        printf("Quantidade invalida de linhas!\nDigite uma quantidade de linhas valida: ");
        scanf("%d", &linha);
        while (getchar() != '\n');
    }
    
    /* Impressão do resultado através de repetições. */
    j = linha;
    for (i = 1; i <= linha; i++) {
        printf("\n");
        for (cont = 0; cont < j ; cont++) {
            printf("*");
        }
        j -= 1;
    }
    printf("\n\n");
    
    return 0;
}