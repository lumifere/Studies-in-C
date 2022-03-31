/*
Programa : lista2_exerc3.c
Autor: Pedro Mateus Melo Ormesino Lins
Data : 10/12/2021
Descrição : Este programa calcula a área de um círculo específico, mostrando o resultado ao final.
*/

#include <stdio.h>
#include <math.h>
int main (void) {
    /* Declaração das variáveis. */
    float area, raio = 7.325, pi = 3.1416;  
    /* Área de um círculo = pi * raio^2. */

    area = pi*pow(raio,2);  /* Cálculo da área do círculo com a função 'pow' da biblioteca 'math'. */
    printf("Area do circulo e %.4f", area); /* Resultado limitado a 4 casas decimais mostrado na tela. */

    return 0;
}