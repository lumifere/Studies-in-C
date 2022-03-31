#include <stdio.h>
#include <stdlib.h>

void Converter(int numeroBase10, int *numeroBase2); // Protótipo da função.

int main(int argc, char *argv[]) {
    int nb10, nb2[32], i, teste = 1; // Declaração e inicialização de variáveis.
    while (1) {
        // Inserção do valor a ser convertido e sua verificação.
        scanf("%d", &nb10);
        if (nb10 < 0) break;
        
        Converter(nb10, nb2); // Chamada da função.

        // Impressão dos valores.
        printf("Teste %d\n", teste++);
        printf("%d\n", nb10);
        for (i = 0; i < 32; i++) printf("%d", nb2[i]);     
        printf ("\n\n");
    }
    return 0;
}

void Converter(int numeroBase10, int *numeroBase2) {
    int i = 31, r; // Declaração e inicialização de variáveis.
    
    // Conversão do valor para binário e alocação no vetor.
    for (; i >= 0; i--){
        r = numeroBase10%2;
        numeroBase10 /= 2;
        *(numeroBase2+i) = r;
    }
}
    

