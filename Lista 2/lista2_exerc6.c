/*
Programa : lista2_exerc6.c
Autor: Pedro Mateus Melo Ormesino Lins
Data : 10/12/2021
Descrição : Esse programa imprime a soma de todos os números inteiros entre 0 e N.
*/

#include <stdio.h>
#include <stdlib.h>
int main (void) {
    /* Declaração das variáveis. */
    int n, soma;

    /* Entrada e alocação do valor. */ 
    printf("Insira um valor N inteiro positivo: \n");
    scanf("%d", &n);
    
    /* Cálculo da soma por Gauss e apresentação do resultado */
    soma = (abs(n)+1)*(n/2);
    printf("O valor da soma de todos os numeros inteiros entre 0 e %d e: %d\n", n, soma);
    
    return 0;
}