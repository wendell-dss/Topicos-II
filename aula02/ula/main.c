#include <stdio.h>
#include "mult.h"
#include "soma.h"
#include "sub.h"

int main(void)
{
    int a = 20, b = 10;
    printf("soma = %d\n", soma(a,b));
    printf("sub = %d\n", sub(a,b));
    printf("mult = %d\n", mult(a,b));
    return 0;
}
