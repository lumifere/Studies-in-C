/*
Programa: lista4a_exerc6.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 06/01/2022
Descrição: Geração de números inteiros randômicos em um intervalo, determinando a quantidade dos sorteados entre 1 e 6, imprimindo sua quantidade e probabilidade.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (void) {
    /* Declaração e inicialização das variáveis. */
    int i, n, max = 7;
    float numeros = 6000000;
    int um, dois, tres, quatro, cinco, seis;
    um = dois = tres = quatro = cinco = seis = 0;

    /* Geração de números aleatórios de acordo com o intervalo. */
    srand (time (NULL));
    for (i = 0; i < numeros; i++) {
        n = rand();                 
        n = n % max; 

        switch (n) {            /* Switch para alocação das quantidades. */
            case 1: um++; break;
            case 2: dois++; break;
            case 3: tres++; break;
            case 4: quatro++; break;
            case 5: cinco++; break;
            case 6: seis++; break;   
            default: i--;            /* Método utilizado para eliminar os sorteios dando 0. */
        }
    }
    
    /* Cálculo da porcentagem e demonstração dos resultados. */
    printf("Foram feitos %.0f sorteios\n", numeros);
    printf("O um apareceu: %d vezes com porcentagem de %.2f%% \n", um, (um/numeros)*100);
    printf("O dois apareceu: %d vezes com porcentagem de %.2f%% \n", dois, (dois/numeros)*100);
    printf("O tres apareceu: %d vezes com porcentagem de %.2f%% \n", tres, (tres/numeros)*100);
    printf("O quatro apareceu: %d vezes com porcentagem de %.2f%% \n", quatro, (quatro/numeros)*100);
    printf("O cinco apareceu: %d vezes com porcentagem de %.2f%% \n", cinco, (cinco/numeros)*100);
    printf("O seis apareceu: %d vezes com porcentagem de %.2f%% \n", seis, (seis/numeros)*100);

    return 0;
}
