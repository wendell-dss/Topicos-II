#include<stdio.h>

#define SOMA(a,b) a+b

int main(int argc)
{
    int i=10, j=20, k;
    float f=5.5, g=2.3, h;
    
    k = SOMA(i, j);
    h = SOMA(f, g);

    printf("k = %d\n", k);
    printf("h = %f\n", h);
    return 0;
}
