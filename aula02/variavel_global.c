#include <stdio.h>
static int i;
void soma1(void){
    i += 1;
    printf("Funcao soma1: i = %d\n", i);
}

void sub1(void){
    int i = 10;
    i -= 1;
    printf("Funcao sub1 = i = %d\n", i);
}

int main(int argc, char const *argv[])
{
    i = 0;
    soma1();
    sub1();
    printf("Funcao main: i = %d\n", i);
    soma1();
    sub1();
    printf("Funcao main: i = %d\n", i);
    return 0;
}
