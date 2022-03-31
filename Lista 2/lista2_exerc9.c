/*
Programa : lista2_exerc9.c
Autor: Pedro Mateus Melo Ormesino Lins
Data : 10/12/2021
Descrição : Programa faz a comparação entre quem é mais velho.
*/

#include <stdio.h>
int main () {
    /* Declaração de variáveis. */
    int dia1, dia2, mes1, mes2, ano1, ano2;
    
    /* Entrada de dados. */
    printf("Insira a primeira data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    if (dia1 < 1 || dia1 > 31)
    {
        printf("Dia invalido.");
        return 0;
    }else
    {
        if (mes1 < 1 || mes1 > 12)
        {
            printf("Mes invalido.");
            return 0;
        }else
        {
            if (ano1 < 1900 || ano1 > 2500)
            {
                printf("Ano invalido.");
                return 0;
            }  
        }        
    }  
    
    printf("Insira a segunda data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);
    if (dia2 < 1 || dia2 > 31)
    {
        printf("Dia invalido.");
        return 0;
    }else
    {
        if (mes2 < 1 || mes2 > 12)
        {
            printf("Mes invalido.");
            return 0;
        }else
        {
            if (ano2 < 1900 || ano2 > 2500)
            {
                printf("Ano invalido.");
                return 0;
            }  
        }        
    }

    /* Condicional e saída de dados. */
    if (ano1 == ano2){
        if (mes1 == mes2){
            if (dia1 == dia2){
                printf("Ambos possuem a mesma idade.");
            }else{
                if (dia1 < dia2){
                    printf("O primeiro eh o mais velho.");
                }else{
                    printf("O segundo eh o mais velho.");
                }
            }
        }else{
            if (mes1 < mes2){
                printf("O primeiro eh o mais velho.");
            }else{
                printf("O segundo eh o mais velho.");
                }
        }    
    }else{
        if (ano1 < ano2){
            printf("O primeiro eh o mais velho.");
        }else{
            printf("O segundo eh o mais velho.");
            }
        }

    return 0;
}