/*
Programa : lista_extra_teste2.c
Autor: Leonardo Renauld | Pedro Mateus
Data : 16/12/2021
Descrição : Teste das funções anteriores do teste1 junto ao cálculo de notas de um aluno e sua situação final.
*/
#include <stdio.h>

int main () {
    /* Declaração das variáveis. */ 
    float notaAluno, mediaAluno;
    char conceito;
    int i, provas; 

    /* Entrada da quantidade de provas que o aluno fez. */ 
    printf("Insira a seguir a quantidade de provas que o aluno teve: "); 
    scanf("%d", &provas);

    /* Repetição para entrada dos valores de notas do aluno. */ 
    for (i = 1; i < provas+1; i++)
    {
        printf("Insira a seguir a nota %d do aluno: ", i); 
        scanf("%f", &notaAluno); 
        if (notaAluno < 0 || notaAluno > 10) 
        { 
            printf("Valor invalido."); 
            return 0; 
        } 
        mediaAluno += notaAluno;
    }    
 
    while (getchar() != '\n'); /* Repetição feita para limpar o buffer de entrada. */
    mediaAluno = mediaAluno/provas; 
    printf("A media do aluno eh %.1f, com o conceito ", mediaAluno);

    /* Condicional para saber a situação do aluno */
    if(mediaAluno >= 9.0) {
        conceito = 'A';
        putchar(conceito);
    } else {
        if (mediaAluno >= 7.0 && mediaAluno < 9.0) {
            conceito = 'B';
            putchar(conceito);
        } else {
            if (mediaAluno >= 5.0 && mediaAluno < 7.0) {
                conceito = 'C';
                putchar(conceito);
            } else {
                conceito = 'F';
                putchar(conceito);
            }
        } 
    }

    return 0;
}