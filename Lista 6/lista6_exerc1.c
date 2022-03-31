/*
Programa: list6_exerc1.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 27/01/2022
Descrição: Recebe a entrada de uma string e informa quantas vezes cada vogal aparece.
*/

#include <stdio.h>
int tam = 0; /* Variável global. */

void conta_vogais(char string[], int vogais[]); 

int main() {
    /* Declaração e inicialização do vetor. */
    int vogais[5] = {0,0,0,0,0};

    /* Inserção do tamanho da string. */
    printf("Entre com o tamanho da frase: ");
    if (scanf("%d", &tam) == 0 || tam < 1) {
        printf("Valor invalido!");
        return 1;  
    }

    /* Inserção do conteúdo da string.*/ 
    char frase[tam+1];
    while(getchar()!='\n');
    printf("Entre com a frase desejada: ");
    fgets(frase, tam+1, stdin); 

    conta_vogais(frase,vogais); /* Chamada da função conta_vogais. */

    return 0;
}

/* Função para contagem das vogais e impressão dos resultados. */
void conta_vogais(char string[], int vogais[]){
    for (int i = 0; i <= tam; i++) {
        switch (string[i]) {
        case 'A': vogais[0]++; break;
        case 'a': vogais[0]++; break;
        case 'E': vogais[1]++; break;
        case 'e': vogais[1]++; break;
        case 'I': vogais[2]++; break;
        case 'i': vogais[2]++; break;
        case 'O': vogais[3]++; break;
        case 'o': vogais[3]++; break;
        case 'U': vogais[4]++; break;
        case 'u': vogais[4]++; break;
        default: break;
        }
    }
    
    printf("\nA vogal 'a' foi encontrada %d vezes.\n"
            "A vogal 'e' foi encontrada %d vezes.\n"
            "A vogal 'i' foi encontrada %d vezes.\n"
            "A vogal 'o' foi encontrada %d vezes.\n"
            "A vogal 'u' foi encontrada %d vezes.\n",
            vogais[0], vogais[1], vogais[2], vogais[3], vogais[4]);
}