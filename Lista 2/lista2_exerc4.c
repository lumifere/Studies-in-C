/*
Programa : lista2_exerc4.c
Autor: Pedro Mateus Melo Ormesino Lins
Data : 10/12/2021
Descrição : Este programa calcula a área de um círculo específico, mostrando o resultado ao final.
*/

#include <stdio.h>
#include <math.h>
int main (void) {
    /* Declaração das variáveis. */
    double area, raio, pi = 3.1416;

    /* Entrada de dados */
    printf("Entre com o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = pi*pow(raio,2);  /* Cálculo da área do círculo com a função 'pow' da biblioteca 'math'. */
    printf("Area do circulo e %.4f", area); /* Resultado limitado a 4 casas decimais mostrado na tela. */

    return 0;
}