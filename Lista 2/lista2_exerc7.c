/*
Programa : lista2_exerc7.c
Autor: Pedro Mateus Melo Ormesino Lins
Data : 10/12/2021
Descrição : Programa para calcular a media de um grupo de notas.
*/

#include <stdio.h>
int main (void) {
    float notaAluno, mediaAluno;

    /* Entrada dos valores de notas do Aluno. */
    printf("Insira a seguir a primeira nota do aluno: ");
    scanf("%f", &notaAluno);
    if (notaAluno < 0 || notaAluno > 10)
    {
        printf("Valor invalido.");
        return 0;
    }
    mediaAluno = notaAluno;
    printf("Insira a seguir a segunda nota do aluno: ");
    scanf("%f", &notaAluno);
    if (notaAluno < 0 || notaAluno > 10)
    {
        printf("Valor invalido.");
        return 0;
    }
    mediaAluno = mediaAluno + notaAluno;
    printf("Insira a seguir a terceira nota do aluno: ");
    scanf("%f", &notaAluno);
    if (notaAluno < 0 || notaAluno > 10)
    {
        printf("Valor invalido.");
        return 0;
    }
    mediaAluno = mediaAluno + notaAluno;
    mediaAluno = mediaAluno/3; 

    printf("A media do aluno e %.1f", mediaAluno);
    /* Condicional para saber a situação do aluno */

    if(mediaAluno >= 5.0) {
    printf (" e ele esta Aprovado!\n");
    } else {
    printf (" e ele esta Reprovado..");
    }

    return 0;
}