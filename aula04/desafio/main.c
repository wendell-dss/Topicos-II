#include<stdio.h>

#define MIN(a,b,c) (((a) < (b) && (a) < (c)) ? (a) : ((b) < (a) && (b) < (c)) ? (b) : (c))

int main(int argc, char const *argv[])
{
    int a = 18, b = 76, c = 10;
    printf("Minimum value between %d and %d and %d is %d\n", a, b, c, MIN(a, b, c));
    return 0;
}
