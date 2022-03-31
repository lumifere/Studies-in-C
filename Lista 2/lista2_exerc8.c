/*
Programa : lista2_exerc8.c
Autor: Pedro Mateus Melo Ormesino Lins
Data : 10/12/2021
Descrição : Programa para calcular a maior nota de um grupo de notas.
*/

#include <stdio.h>
int main (void) {
    /* Declaração de variáveis. */
    float notaAluno, mediaAluno = 0.0;
    int qntdProvas, notasLidas = 0;
    
    /* Entrada de valores */
    printf("Insira a seguir a quantidade de provas do Aluno: ");
    scanf("%d", &qntdProvas);
    if (qntdProvas <= 0)
    {
        printf("Valor invalido.");
        return 0;
    }

    /* Repetição */
    while (notasLidas<qntdProvas){
        printf("Insira nota %d do aluno: ", notasLidas + 1);
        scanf("%f", &notaAluno);
        if (notaAluno < 0 || notaAluno > 10)
        {
            printf("Nota invalida.");
            return 0;
        }
        mediaAluno = mediaAluno + notaAluno;
        notasLidas = notasLidas + 1;
    }

    mediaAluno = mediaAluno/qntdProvas;
    printf("A media do aluno foi %.1f ", mediaAluno);

    /* Condicional */
    if (mediaAluno >= 5){
        printf("e ele esta Aprovado!");
    } else {
        printf("e ele esta Reprovado!");
    }
    
    return 0;
}