#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p;

    p = &i;
    *p = *p + 1; 
    printf("%d\n", i);

    printf("END i = %p\r\n", &i);
    printf("END p = %p\r\n", p);
    printf("END p = %p\r\n", &p);

    // int vetor[5] = {1,2,3,4,5};
    char vetor[5] = "vetor";

    printf("END vetor = %p\r\n", &vetor);
    printf("END vetor = %p\r\n", &vetor[0]);
    printf("END vetor = %p\r\n", &vetor[1]);
    printf("END vetor = %p\r\n", &vetor[2]);
    printf("END vetor = %p\r\n", &vetor[3]);
    printf("END vetor = %p\r\n", &vetor[4]);

    return 0;
}