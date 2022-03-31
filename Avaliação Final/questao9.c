#include <stdlib.h>
#include <stdio.h>
int main (void) {
    // Declaração e inicialização de variáveis.
    int i, n, *pvetor, cont = 0;
    float media = 0.0;

    // Insere um valor para n.
    scanf("%d", &n);

    // Alocação de espaço na memória a partir do valor de n.
    pvetor = (int *) malloc (n * sizeof(int)); 
    if (!pvetor) {
        puts("Sem memória.");
        return 1;
    }

    // Inserção dos valores no vetor dinâmico e faz o somatório.
    for (i = 0; i < n ; i++) {
        scanf("%d", pvetor + i);
        media += *(pvetor + i);
    }   
    media /= n; // Cálculo da média.

    // Verificação das notas acima da média.
    for (i = 0; i < n ; i++) if(*(pvetor + i) > media) cont++;

    // Impressão dos valores e liberação do espaço alocado.
    printf("%f\n", media);
    printf("Dentre as %d notas inseridas, %d estao acima da media.\n", n, cont);
    free(pvetor);

    return 0;
}