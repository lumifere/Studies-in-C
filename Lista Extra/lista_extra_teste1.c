/*
Programa : lista_extra_teste1.c
Autor: Leonardo Renauld | Pedro Mateus
Data : 16/12/2021
Descrição : Teste das funções scanf(), printf(), getchar() e putchar().
*/
#include <stdio.h>

int main () {
   /* Declaração das variáveis */
   int x;
   float y;
   char z;

   /* Entrada de dados :
   Impressão de frases para demonstrar o printf(). */
   printf("Bem vindo...\tao meu programa teste de funcoes!\n");
   
   /* Usando o printf() imprimir instruções para o usuário dar a entrada com valores nas variáveis através do scanf(). */
   printf("\nInsira um numero inteiro: ");
   scanf("%d", &x);
   printf("Insira um numero real: ");
   scanf("%f", &y);
   while (getchar() != '\n'); /* Repetição feita para limpar o buffer de entrada. */
   printf("Agora insira um unico caractere: ");
   scanf("%c", &z);

   /* Usando agora o printf() para imprimir os valores das variáveis. */
   printf("\nForam registrados o numero inteiro '%d', o numero real '%.2f' e o caractere '%c'.\n\n", x, y, z);
   while (getchar() != '\n'); 

   /* Usando agora as funções getchar() e putchat() para demonstração de um caractere. */
   printf("Insira um novo caractere unico: ");
   z = getchar();
   printf("O novo caractere inserido foi: ");
   putchar(z);

   return 0;
}