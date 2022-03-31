/*
Programa: lista4b_exerc2.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 07/01/2022
Descrição: Insere valores de idade, determinando a maior, a menor, a quantidade de inseridas e a média de todas.
*/

#include <stdio.h>
int main() {
    /* Declaração e inicialização das variáveis. */
    int menor_idade = 120, maior_idade = 0, idade, i = 0;
    float media_idade = 0;

    /* Repetição da inserção de idade até inserir o 0. */
    while (1 == 1) {
        idade = -1;
        printf("Insira a idade: ");
        scanf("%d", &idade);

        /* Blindagem. */
        while(getchar() != '\n');
        if (idade == 0) break;
        if (idade > 120 || idade < 0) {
            printf("Erro! Insira um valor valido.\n\n");
            continue;
        }

        /* Alocação dos valores. */
        if (maior_idade < idade) maior_idade = idade;
        if (menor_idade > idade) menor_idade = idade;
        
        media_idade += 1.0 * idade;
        i++;
    }

    /* Impressão dos resultados. */
    media_idade /= i;
    printf("A quantidade de pessoas analizadas foi: %d\n", i);
    printf("A maior idade registrada foi: %d\n", maior_idade);
    printf("A menor idade registrada foi: %d\n", menor_idade);
    printf("A media das idade registradas deu: %.0f", media_idade);

    return 0;
}