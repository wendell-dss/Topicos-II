#include <stdio.h>

int soma(int a, int b);

int main(int argc, char const *argv[])
{
    int a = 5, b = 9;
    printf("%d\n", soma(a, b));
    return 0;
}

int soma(int a, int b)
{
    return a + b;
}