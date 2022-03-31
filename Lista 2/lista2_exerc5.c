/*
Programa : lista2_exerc5.c
Autor: Pedro Mateus Melo Ormesino Lins
Data : 10/12/2021
Descrição : Esse programa calcula a área de um círculo através da entrada do raio pelo usuário.
*/

#include <stdio.h>
int main () {
    /* Declaração das variáveis. */
    float prova, teste1, teste2, teste3, notafinal;

    printf("Bem vindo ao sistema de calculo da nota final do aluno!\n");
    /* Entrada e alocação dos valores. */ 
    printf("Insira a nota do aluno na prova: \n");
    scanf("%f", &prova);  
    if  (prova < 0 || prova > 10) {
        printf("Valor inserido invalido.");
        return 0;
    } else {
        printf("Insira a nota do aluno no primeiro teste: \n");
        scanf("%f", &teste1);
        if (teste1 < 0 || teste1 > 10) {
            printf("Valor inserido invalido.");
            return 0;
        } else {
            printf("Insira a nota do aluno no segundo teste: \n");
            scanf("%f", &teste2);
            if (teste2 < 0 || teste2 > 10) {
                printf("Valor inserido invalido.");
                return 0;
            } else {
                printf("Insira a nota do aluno no terceiro teste: \n");
                scanf("%f", &teste3);
                if (teste3 < 0 || teste3 > 10) {
                    printf("Valor inserido invalido.");
                    return 0;
                }   
            }         
        }     
    }
    
    /* Cálculo e saída da nota final do aluno. */    
    notafinal = 0.8*prova+(0.2*((teste1+teste2+teste3)/3));
    printf("Prova: %3.1f\n", prova);
    printf("Teste 1: %3.1f\n", teste1);
    printf("Teste 2: %3.1f\n", teste2);
    printf("Teste 3: %3.1f\n", teste3);
    printf("Nota final: %3.1f\n", notafinal);
    return 0;
}
/*if (scanf("%f", &teste1) >= 0 || scanf("%f", &teste1) <= 10 || scanf("%f", &teste1) 
        != '\n')
        {
            
        } else{
            printf("Valor inserido invalido.");
            return 0;
        }    */

/* do {
        scanf("%f", &prova); 
        while (getchar() != '\n');
        if (prova < 0 || prova > 10)
        {
            printf("Valor invalido, favor inserir um valor de nota valido: ");
            prova = -1;
        } else break;
    } while (1);
       */