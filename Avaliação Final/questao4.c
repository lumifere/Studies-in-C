#include <stdio.h>
void Troca (int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
} /* Fim de Troca */

int main (void) {
    int x, y;
    int *px, *py;

    /* Nao se usa isto normalmente. Isto é um exercício 
    para aprendermos ponteiros */
    px = &x;
    py = &y;
    
    /*
    * Como seria o comando scanf com px e py ao inves x e y?
    * Dica: lembre-se que era scanf ("%d %d", &x, &y);
    * Agora olhe os dois comandos acima e verifique quem e igual
    * a &x e &y.
    */

    scanf("%d %d", px, py); // Endereço que os ponteiros apontam.
    Troca(px, py); // Uso do endereço como parâmetro da função.
    printf("Troquei ----> %d %d \n", *px, *py); // Impressão do conteúdo desses endereços.
    return 0;
}
