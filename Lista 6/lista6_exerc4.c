/*
Programa: lista6_exerc4.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 27/01/2022
Descrição: O programa calcula o mmc de dois números através de uma função.
*/

#include <stdio.h>
#include <stdlib.h>

int mmc(int a, int b); /* Protótipo da função mmc. */ 

int main() {
    /* Declaração das variáveis. */
    int a, b;
    
    /* Inserção dos valores. */
    printf("Insira o valores de 'a' e 'b' para mmc(a,b).\n");
    if(scanf("%d", &a) == 0 || scanf("%d", &b) == 0) {
        printf("Valores invalidos.");
        return 1;
    }

    /* Chamada da função mmc e impressão do resultado. */
    printf("O mmc(%d,%d) eh: %d.", a, b, mmc(a,b));
}

/* Função mmc, que utiliza do mdc(a,b) e a correlação mmc(a,b) = a*b / mdc(a,b). */
int mmc(int a, int b){
    int resto, b2, a2;
    a = abs(a);
    b = abs(b); 
    b2 = b;
    a2 = a;
    if (a == 0 || b == 0) return 0;   
    while (a % b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return (a2*b2)/b;
}