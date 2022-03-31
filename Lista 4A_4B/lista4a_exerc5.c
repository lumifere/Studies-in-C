/*
Programa: lista4a_exerc5.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 06/01/2022
Descrição: Gera números inteiros randômicos em um intervalo, diferenciando entre par e impar, contabilizando e imprimindo sua quantidade e probabilidade.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (void) {
    /* Declaração e inicialização das variáveis. */
    int i, n;
    float soma;
    int par = 0;
    int impar = 0;

    /* Geração de números aleatórios e alocação da quantidade de números pares e impares. */
    srand (time (NULL));
    for (i = 0; i < 1000000; i++) {
        n = rand();    
        if (n % 2 == 0) {
            par += 1;
        }
        else {
            impar += 1;
        }
    }
    
    /* Cálculo da porcentagem e demonstração dos resultados. */
    soma = par + impar;
    printf("Foram registrados %d numeros pares, sendo %.2f%% da quantidade total.\n", par, (par/soma)*100);
    printf("Foram registrados %d numeros impares, sendo %.2f%% da quantidade total.\n", impar, (impar/soma)*100);

    return 0;
}
