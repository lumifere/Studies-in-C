/*
Programa : lista_extra_teste3.c
Autor: Leonardo Renauld | Pedro Mateus
Data : 22/12/2021
Descrição : Teste de todas as 8 funções pedidas.
*/
#include <stdio.h>

int main () {
    /* Declaração das variáveis */
    char caminho[39];
    char texto[39];
    char add[39];
    FILE *fp;
    FILE *fp2;
    char func[100] = "Essa funcao recebe um caminho e retorna um documento de texto que sera alterado.\n"; /* Mensagem de início ao iniciar o programa. */
    char c;

    for (int i=0; (c=func[i]); i++){ /* Repetição para reproduzir a frase de início. */
        putchar(c);
    }
    printf("Insira o caminho do documento\n");
    scanf("%s", caminho);
    fp = fopen(caminho, "r"); /* Abre o arquivo caminho como r, de read, esse fp vira o caminho usavel pelo C. */
    fgets(texto, 20, fp);
    printf("O texto lido foi: %s\n",texto);
    puts("Insira o texto que ira substituir o texto original: ");
    getchar(); /* Usado getchar() aqui para limpar o imput restante. */
    gets(add);
    fp2 = fopen(caminho , "w"); /* Mesma função do fp, só que com w de write. */
    fputs(add,fp2);
    
    return 0;
}