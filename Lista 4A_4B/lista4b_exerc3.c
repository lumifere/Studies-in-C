/*
Programa: lista4b_exerc3.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 07/01/2022
Descrição: Calcula a media de até 3 notas inseridas.
*/

#include <stdio.h>
int main() {
    /* Declaração e inicialização das variáveis. */
    int nota, qtd = 0;
    float media = 0.0;

    /* Repetição para inserir notas até que uma seja negativa. */
    while (qtd <= 2) {
        nota = -1;
        printf("Insira a nota: ");
        scanf("%d", &nota);

        /* Blindagem. */
        while(getchar() != '\n');
        if (nota > 10){
            printf("Insira uma nota valida!\n");
            continue;
        }
        if (nota < 0) break;

        /* Alocação de dados. */
        media += 1.0 * nota;
        qtd++;
    }

    /* Impressão dos resultados. */
    media /= qtd;
    printf("A media das notas e: %.1f\n", media);

    return 0;    
}