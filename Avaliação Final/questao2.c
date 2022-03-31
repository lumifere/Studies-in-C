#include <stdio.h>

void troca(int *a, int *b){
    int temp;
    printf("%p\n", a);
    temp = *a;
    *a = *b;
    *b = temp;
} /* Fim de troca */

int main(void) {
    int x, y;
    printf("%p\n", &x);
    scanf("%d %d", &x, &y);
    troca(&x, &y);
    printf("Troquei ----> %d %d\n", x, y);
    return 0;
}