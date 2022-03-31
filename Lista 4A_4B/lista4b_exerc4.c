/*
Programa: lista4b_exerc4.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 07/01/2022
Descrição: Aplica desconto no produto de acordo com o tipo de cliente.
*/

#include <stdio.h>
int main() {
    /* Declaração e inicialização das variáveis. */
    float valor = -1.0, desc = 0.0;
    int cliente = -1;

    /* Menu principal e blindagem. */
    while (1 == 1){
        printf("De acordo com o menu abaixo, indique em qual grupo o cliente se encontra: \n\n\t(1) Cliente Comum\n\t(2) Funcionario\n\t(3) VIP\n\n");
        scanf("%d", &cliente);

        while(getchar() != '\n');
        if(cliente < 1 || cliente > 3) {
            printf("ERRO! Tente novamente.\n");
            continue;
        }
        break;
    }

    /* Demonstração do desconto. */
    switch (cliente) {
        case 1:
            printf("Desconto nao aplicavel.\n");
            desc = 0.0;
            break;
        case 2:
            printf("Desconto de 10%% ao valor total do produto.\n");
            desc = 0.1;
            break;
        case 3:
            printf("Desconto de 5%% ao valor total do produto.");
            desc = 0.05;
            break;
    }

    /* Inserção do valor do produto e blindagem. */
    while (1 == 1) {
        printf("Insira o valor do produto: ");
        scanf("%f", &valor);
    
        while(getchar() != '\n');
        if(valor < 0) {
            printf("ERRO! Tente novamente.\n");
            continue;
        }

        /* Cálculo e impressão do valor com desconto. */
        valor -= (valor*desc);
        printf("O valor com o desconto aplicado fica por: %.2f\n", valor);
        break;
    }

    return 0;
}