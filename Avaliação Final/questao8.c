#include <stdlib.h>
#include <stdio.h>
int main (void) {
    // Declaração e inicialização de variáveis.
    long long int i;
    int n, *pvetor;
    i = 1000000;

    // Alocação de espaço na memória a partir do valor de i.
    pvetor = (int *) malloc(i * sizeof(int)); 
    if (!pvetor) return 1;

    //Verificação do limite e posterior liberação da alocação.
    while(pvetor) {
        free(pvetor);
        i *= 2;
        pvetor = (int *) malloc(i * sizeof(int));
    }
    free(pvetor);
    
    // Impressão do resultado aproximado.
    printf("A memoria limite esta abaixo de %lld bytes.\n", i);
    return 0;
}