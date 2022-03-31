/*
Programa : lista2_exerc1.c
Autor: Pedro Mateus Melo Ormesino Lins
Data : 10/12/2021
Descrição : Este programa mostra exemplo de definição de variáveis.
*/

#include <stdio.h>
int main (void) {
    /* Declaração das variáveis */
    int i = 10;
    float r = 1.0;
    float dr = 3e13;
    char c = 'a';

    /* Saída dos dados */
    printf ("i = %d\n", i);
    printf ("r = %f\n", r);
    printf ("df = %.0f", dr); /* Da para notar que, mesmo tirando o decimal, o número gerado apresentará variações ao longo dele. */
    printf (" ou em notacao %.0e\n", dr);
    printf ("c = %c\n", c);

    return 0;
}