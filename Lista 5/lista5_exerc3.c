/*
Programa: lista5exerc3.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 13/01/2022
Descrição: Insere um vetor com 10 números e imprime resultados a partir da manipulação do vetor.
*/ 
#define TAM 10
#include <stdio.h>
int main() {
    /* Declaração e inicialização das variáveis. */
    int i, j, par = 0, soma = 0, valor = 0, valor_cont = 0, numeros[TAM], temp = 0;

    /* Inserção dos valores no vetor e blindagem. */
    printf("Insira %d entradas de numeros inteiros: \n", TAM);
    for (i = 0; i < TAM; i++) {
        if (scanf("%d", &numeros[i]) == 0) {
            printf("Entrada invalida!");
            return 1;
        }
        while(getchar() != '\n'); 
    }

    /* Bubble sort para ordenar os números dentro do vetor. */
    for (i = 0; i < TAM-1; i++) {
        for (j = 0; j < TAM-1-i; j++) {
            if(numeros[j] > numeros[j+1]) {
                temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        } 
    }

    /* Entrada do valor que deseja encontrar no vetor e contagem. */
    printf("Entre com o valor desejado: ");
    if (scanf("%d", &valor) == 0) {
        printf("Entrada invalida!");
         return 1;
    }
    for (i = 0; i < TAM; i++) {
        if (numeros[i] % 2 == 0) par++;
        soma += numeros[i];
        if (numeros[i] == valor) valor_cont++;
    }    

    /* Impressão dos resultados. */
    printf("\nO maior valor no conjunto eh %d e o menor eh %d.\n"
            "Existe(m) %d numero(s) par(es) no conjunto.\n"
            "A soma de todos os valores no conjunto deu: %d.\n"
            "O valor %d apareceu no conjunto %d vez(es).\n"
            , numeros[TAM-1], numeros[0], par, soma, valor, valor_cont);

    return 0;
}