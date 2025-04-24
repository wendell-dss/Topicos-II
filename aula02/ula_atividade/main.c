#include <stdio.h>
#include "divisao.h"
#include "multiplicacao.h"
#include "soma.h"
#include "subtracao.h"

int main(void)
{
    int a = 20, b = 10;
    printf("soma = %d\n", soma(a, b));
    printf("subtracao = %d\n", sub(a, b));
    printf("multiplicao = %d\n", mult(a, b));
    printf("divisao = %.2f\n", divisao(a, b));
    return 0;
}
