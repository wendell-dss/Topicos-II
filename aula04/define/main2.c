#include<stdio.h>

#define MIN(a,b) (((a) < (b)) ? (a) : (b))

int main(int argc, char const *argv[])
{
    int a = 18, b = 76;
    printf("Minimum value between %d and %d is %d\n", a, b, MIN(a, b));
    return 0;
}
