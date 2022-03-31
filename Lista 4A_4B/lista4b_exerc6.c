/*
Programa: lista4b_exerc6.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 07/01/2022
Descrição: Demonstra um número de certa base, em outra base.
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    /* Declaração e inicialização das variáveis. */
    int opcao, dec;
    unsigned int hexa = 0x0, octal = 00;

    while(1 == 1){
        opcao = 0;
        dec = -1;
        printf("<Conversao de base>\n1: Decimal para hexadecimal.\n2: Hexadecimal para decimal.\n3: Decimal para octal.\n4: Octal para decimal.\n5: Encerra.\n");
        scanf("%d", &opcao);

        while(getchar() != '\n');
        if (opcao < 1 || opcao > 5) {
            printf("\nERRO! Tente novamente.\n");
            continue;
        }
        switch (opcao) {
            case 1:
                printf("\nInsira o valor: ");
                scanf("%d", &dec);
                while(getchar() != '\n');
                if (dec <= 0) exit(0);
                printf("\nO decimal %d em hexadecimal fica: 0x%X\n\n", dec, dec);
                break;
            case 2:
                printf("\nInsira o valor: ");
                scanf("%X", &hexa);
                while(getchar() != '\n');
                if (hexa <= 0) exit(0);
                printf("\nO hexadecimal 0x%X em decimal fica: %d\n\n", hexa, hexa);
                break;
            case 3:
                printf("\nInsira o valor: ");
                scanf("%d", &dec);
                while(getchar() != '\n');
                if (dec <= 0) exit(0);
                printf("\nO decimal %d em octal fica: 0%o\n\n", dec, dec);
                break;
            case 4:
                printf("\nInsira o valor: ");
                scanf("%o", &octal);
                while(getchar() != '\n');
                if (octal <= 0) exit(0);
                printf("\nO octal 0%o em decimal fica: %d\n\n", octal, octal);
                break;
            case 5: exit(0);
        }

        while (1 == 1){
            opcao = 0;
            printf("1: Voltar para o menu principal.\n2: Encerrar o programa.\n");
            scanf("%d", &opcao);
            while(getchar() != '\n');
            if (opcao < 1 || opcao > 2) {
                printf("\nERRO! Tente novamente.\n");
                continue;
            }

            switch (opcao){
                case 1: break;
                case 2: exit(0);  
            }

            printf("\n");
            break;
        }
    }

    return 0;
}