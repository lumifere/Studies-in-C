/*
Programa: lista5exerc1.c
Autor: Pedro Mateus Melo Ormesino Lins
Data: 12/01/2022
Descrição: Programa exibe um menu com opções para manipulação das strings inseridas pelo usuário.
*/
#define TAM 30
#include <stdio.h>
int main() {
    /* Declaração e inicialização das variáveis. */
    char c, str1[TAM+1], str2[TAM+1], str1_novo[TAM+1], str2_novo[TAM+1];
    int i, j, cont_str1 = 0, cont_str2 = 0, vezes1 = 0, vezes2 = 0, opcao = 0;

    /* Inserção das strings. */
    printf("Insira a primeira frase:\n");
    fgets(str1, TAM, stdin);
    setbuf(stdin, NULL);

    printf("Insira a segunda frase:\n");
    fgets(str2, TAM, stdin);
    setbuf(stdin, NULL);

    /* Contagem das strings e alocação do final de string após o último caractere. */
    for(cont_str1 = 0; str1[cont_str1] != '\n'; cont_str1++);
    str1[cont_str1+1] = '\0';
    for(cont_str2 = 0; str2[cont_str2] != '\n'; cont_str2++);
    str2[cont_str2+1] = '\0';

    printf("primeiro: %d", cont_str1);
    
    /* Menu de opções. */
    printf("\nEscolha uma das alternativas:\n"
            "\ta. Mostra as frases invertidas.\n"
            "\tb. Junta as frases.\n"
            "\tc. Indica qual frase eh a maior.\n"
            "\td. Imprime a maior frase.\n"
            "\te. Ocorrencia de um caractere.\n");
    opcao = getchar();

    /* Cada execução e impressão final conforme a escolha da opção. */
    switch (opcao) {
        case 'a':
            for (i = 0; i <= cont_str1; i++) str1_novo[i] = str1[cont_str1-i-1];
            str1_novo[i+1] = '\0';
            for (i = 0; i <= cont_str2; i++) str2_novo[i] = str2[cont_str2-i-1];
            str2_novo[i+1] = '\0';
            printf("Primeira frase invertida: %s\nSegunda frase invertida: %s\n", str1_novo, str2_novo);
            break;
        case 'b':
            j = cont_str1;
            for (i = 0; i < TAM; (i++, j++)) {
                str1[j] = str2[i];
            }
            printf("\n%s", str1);
            break;
        case 'c':
            if (cont_str1 > cont_str2) {
                printf("Primeira frase eh a maior com %d caracteres.\n", cont_str1);
            } else if (cont_str1 < cont_str2) {
                printf("Segunda frase eh maior com %d caracteres.\n", cont_str2);
            } else {
                printf("Ambas tem o mesmo tamanho.");
            }
            break;
        case 'd':
            if (cont_str1 > cont_str2) {
                printf("%s", str1);
            } else if (cont_str1 < cont_str2) {
                printf("%s", str2);
            } else {
                printf("Ambas são iguais:\n%s\n%s\n", str1, str2);
            }
            break;
        case 'e':  
            while (getchar() != '\n');                      
            printf("Insira o caractere desejado: ");
            c = getchar();
            for (i = 0; i < cont_str1 || i < cont_str2; i++) {
                if (str1[i] == c) vezes1++;
                if (str2[i] == c) vezes2++;        
            }
            printf("O caractere '%c' foi encontrado na frase %d vez(es), e na segunda frase %d vez(es).", c, vezes1, vezes2);
            break;    
        default:
            printf("\nAlternativa invalida!");
            break;
    }
    return 0;
}