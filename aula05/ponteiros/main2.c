#include <stdio.h>

#define TAMANHO 5

int main(void){
    int vetor[TAMANHO] = {10,20,30,40,50};
    int *p1;

    // p1 = &vetor[2];
    // printf("%d\n", *p1);
    // p1++;
    // printf("%d\n", *p1);
    // p1 = p1 + 1;
    // printf("%d\n", *p1);
    
    p1 = &vetor[TAMANHO];
    for (int i = TAMANHO; i >= 0; i--)
    {
        *p1 = *(p1 + i);
        printf("%d\n", *p1);
    }
    

    return 0;

}