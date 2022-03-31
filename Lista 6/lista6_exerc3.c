/*
Programa: lista6_exerc3.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 27/01/2022
Descrição: O programa calcula o mdc de dois números através de uma função.
*/

#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b); /* Protótipo da função mdc. */ 

int main() {
    /* Declaração das variáveis. */
    int a, b;
    
    /* Inserção dos valores. */
    printf("Insira o valores de 'a' e 'b' para mdc(a,b).\n");
    if(scanf("%d", &a) == 0 || scanf("%d", &b) == 0) {
        printf("Valores invalidos.");
        return 1;
    }

    /* Chamada da função mdc e impressão do resultado. */
    printf("O mdc(%d,%d) eh: %d.", a, b, mdc(a,b));
}

/* Função mdc. */
int mdc(int a, int b){
    int resto;
    a = abs(a);
    b = abs(b);
    if (a == 0) return b;
    if (b == 0) return a;    
    while (a % b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return b;
}