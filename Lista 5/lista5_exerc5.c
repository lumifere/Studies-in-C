/*
Programa: lista5exerc5.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 13/01/2022
Descrição: Lê dois conjuntos (vetores) de 5 números inteiros cada, os manipulando para imprimir resultados diferentes entre ambos.
*/
#define TAM 5
#include <stdio.h>
int main() {
    /* Declaração e inicialização das variáveis. */
    int i, j, vetor1[TAM], vetor2[TAM], result[TAM], contador;
    char opcao;

    /* Inserção dos valores dos conjuntos e blindagem. */
    printf("Insira as %d entradas do conjunto A: \n", TAM);
    for (i = 0; i < TAM; i++) {
        if (scanf("%d", &vetor1[i]) == 0) {
            printf("Entrada invalida!");
            return 1;
        }
    }
    printf("Agora insira %d entradas do conjunto B: \n", TAM);
    for (i = 0; i < TAM; i++) {
        if (scanf("%d", &vetor2[i]) == 0) {
            printf("Entrada invalida!");
            return 1;
        }
    }

    /* Menu de opções. */
    while(getchar()!='\n');
    printf("\nEscolha uma das alternativas abaixo:\n"
            "a. Soma entre A e B: soma de cada elemento de A com o elemento da mesma posicao em B\n"
            "b. Produto entre A e B: multiplicacao de cada elemento de A com o elemento da mesma posicao em B\n"
            "c. Diferenca entre A e B: todos os elementos de A que nao existam em B\n"
            "d. Intersecao entre A e B: apenas os elementos que aparecem nos dois vetores\n"
            "e. Uniao entre A e B: todos os elementos de A, e todos os elementos de B que nao estao em A\n");
    opcao = getchar();

    /* Cada execução e impressão final conforme a escolha da opção. */
    switch (opcao) {
    case 'a':
        printf("A soma dos conjuntos A e B da:\n");
        for (i = 0; i < TAM; i++) {
            result[i] = vetor1[i] + vetor2[i];
            printf("%d\t", result[i]);
        }
        break;
    case 'b':
        printf("A multiplicacao dos conjuntos A e B da:\n");
        for (i = 0; i < TAM; i++) {
            result[i] = vetor1[i] * vetor2[i];
            printf("%d\t", result[i]);
        }
        break;
    case 'c':
        printf("A diferenca dos conjuntos A e B da:\n");
        for (i = 0; i < TAM; i++) {
            contador = 0;
            for (j = 0; j < TAM; j++) {
                if (vetor1[i] == vetor2[j]) contador = 1;
            }
            if (contador == 0) printf("%d\t", vetor1[i]);
        }
        break;
    case 'd':
        printf("A intersecao dos conjuntos A e B da:\n");
        for (i = 0; i < TAM; i++) {
            for (j = 0; j < TAM; j++) {
                if (vetor1[i] == vetor2[j]) printf("%d\t", vetor1[i]);
            }
        }
        break;
    case 'e':
        printf("A uniao dos conjuntos A e B da:\n");
        for (i = 0; i < TAM; i++) printf("%d\t", vetor1[i]);  
        for (i = 0; i < TAM; i++) {
            contador = 0;
            for (j = 0; j < TAM; j++) {
                if (vetor2[i] == vetor1[j]) contador = 1;
            }
            if (contador == 0) printf("%d\t", vetor2[i]);
        }
        break;        
    default:
        printf("Alternativa invalida!");
        break;
    }

    return 0;
}