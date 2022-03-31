/*
Programa: lista4b_exerc1.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 07/01/2022
Descrição: Impressão da variável i em repetição, pulando o número 2 e parando no 5.
*/

#include <stdio.h>
int main() {
    /* Declaração e inicialização das variáveis. */
    int i = 1;
    
    while (i <= 20) {
        if (i == 2) {       /* Condição para pular o 2. */
            i++;
            continue;
        }
        if (i == 5) break;      /* Condição para parar o programa no 5. */
        printf("i = %d\n", i);
        i++;
    }
    
    return 0;
}
