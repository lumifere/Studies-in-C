/*
Programa: lista6_exerc5.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 27/01/2022
Descrição: O programa informa a quantidade das strings, qual é a maior e a concatenação de ambas.
*/

#include <stdio.h>
/* Declaração das variável e strings globais. */  
char v1[10] = "123454321";
char v2[5] = "0987";
char v3[50];
int tam;

/* Protótipos das funções. */ 
int qntd_char(char v[]);
void qual_maior(char v1[], char v2[]);
void concatena(char v1[], char v2[]);

int main() { 
    /* Impressão dos resultados. */
    printf("A string v1 tem %d caracteres.\n", qntd_char(v1));
    printf("A string v2 tem %d caracteres.\n", qntd_char(v2));
    qual_maior(v1, v2);
    concatena(v1, v2);
}

/* Função qntd_char equivalente à strlen(). */
int qntd_char(char v[]) {
    for (tam = 0; v[tam] != '\0'; tam++);
    return tam;
}

/* Função qual_maior equivalente à strcmp(). */
void qual_maior(char v1[], char v2[]) {
    if (qntd_char(v1) > qntd_char(v2)) printf(">0\n");
    else if (qntd_char(v1) < qntd_char(v2)) printf("<0\n");
    else printf("=0\n");
}

/* Função concatena equivalente à strcat(). */
void concatena(char v1[], char v2[]) {
    for (int i = 0; i < qntd_char(v1); i++) v3[i] = v1[i];
    for (int i = 0; i < qntd_char(v2); i++) v3[qntd_char(v1)+i] = v2[i];
    v3[qntd_char(v1)+qntd_char(v2)+1] = '\0';
    printf("A concatenacao de ambas as strings fica: %s", v3);
}