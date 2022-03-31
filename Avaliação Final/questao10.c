#include <stdlib.h>
#include <stdio.h>
int main (void) {
    int i, j, n, *pvetor, temp; // Declaração de variáveis e ponteiro.

    // Insere um valor para n.
    scanf("%d", &n);

    // Alocação de espaço na memória a partir do valor de n.
    pvetor = (int *) malloc (n * sizeof(int)); 
    if (!pvetor) {
        puts("Sem memória.");
        return 1;
    } 

    // Inserção dos valores no vetor dinâmico.
    for (i = 0; i < n; i++) scanf("%d", pvetor+i);

    // Bubble Sort do vetor dinâmico.
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-1-i; j++){
            if (*(pvetor+j) > *(pvetor+j+1)){
                temp = *(pvetor+j);
                *(pvetor+j) = *(pvetor+j+1);
                *(pvetor+j+1) = temp;
            }
        }  
    }

    // Impressão dos valores e liberação do espaço alocado.
    printf("\nO vetor apos a ordenacao fica:\n");
    for (i = 0; i < n; i++) printf("%d ", *(pvetor+i));
    free(pvetor);

    return 0;
}


