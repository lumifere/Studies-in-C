/*
Programa: lista4a_exerc7a.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 07/01/2022
Descrição: Gera 1.000.000 pontos cujas coordenadas estão dentro do círculo (0 <= x,y <= 1.0), calculando o Pi posteriormente.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (void) {
    /* Declaração e inicialização das variáveis. */
    int dentro = 0;
    double x = 0, y = 0, sorteio = 1000000;

    /* Geração dos números randômicos. */
    srand (time (NULL));
    for (int i = 0; i < sorteio; i++) {
        x = rand();                              
        y = rand();
        
        x /= RAND_MAX;      /* Transformação do número randômico para < 1. */
        y /= RAND_MAX;
       
        if((x*x + y*y) < 1.0) dentro++;     /* Cálculo para determinar se está dentro do círculo. */
    }
    
    /* Impressão dos resultados. */
    printf("Quantidade de pontos dentro do circulo: %d\n", dentro);
    printf("Valor aproximado de Pi: %.6f", (4.0*dentro)/sorteio);
    
    return 0;
}