/*
Programa: lista5exerc6.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 14/01/2022
Descrição: Lê uma matriz (5x4) de números inteiros referentes à matricula e notas do aluno. 
Manipula os valores dentro da matriz de forma a imprimir certos resultados.
*/
#define LIN 5
#define COL 4
#include <stdio.h>
int main() {
    /* Declaração e inicialização das variáveis. */
    int i, j;
    float alunos[LIN][COL], media = 0, maior = 0;

    /* Alocação de valor zerado para todos os elementos das matrizes. */
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) alunos[i][j] = 0;    
    }

    /* Inserção dos valores das matrizes e blindagem. */
    printf("Insira em ordem as seguintes informacoes dos alunos:\n\tNumero da matricula:\n\tMedia das provas:\n\tMedia dos trabalhos:\n");
    for (i = 0; i < LIN; i++) {
        printf("Aluno %d:\n", i+1);
        for (j = 0; j < COL-1; j++) {
            if (scanf("%f", &alunos[i][j]) == 0) {
                printf("Entrada invalida!");
                return 1;
            }
            if (alunos[i][0] <= 0) {
                printf("Entrada invalida!");
                return 1;
            }
            if (!(alunos[i][1] >= 0 && alunos[i][1] <= 10)) {
                printf("Entrada invalida!");
                return 1;
            }
            if (!(alunos[i][2] >= 0 && alunos[i][2] <= 10)) {
                printf("Entrada invalida!");
                return 1; 
            } 
        }      
    }
    
    /* Acumulando as médias para posterior divisão. */
    for (i = 0; i < LIN; i++) {
        alunos[i][3] = (alunos[i][2] + alunos[i][1])/2; 
        if (alunos[i][3] > maior) maior = alunos[i][3];
        media += alunos[i][3];             
    }

    /* Impressão dos resultados. */
    for (i = 0; i < LIN; i++) {
        if (maior == alunos[i][3]) printf("\nA matricula do aluno com maior nota final eh: %d", (int)alunos[i][0]);             
    }
    printf("\nA media aritmetica da turma foi: %.2f", media/LIN);

    return 0;
}