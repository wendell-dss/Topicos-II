#include <stdio.h>

void modifi_vetor(float v[], int pos, float valor)
{
    v[pos] = valor;
}

int main(void)
{
    float v[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    int i;
    float *p;

    for (i = 0; i < 7; i++)
        printf("%.1f ", v[i]);
    printf("\n");
    for (i = 0; i < 7; i++)
        printf("%.1f ", *(v + i));
    printf("\n");
    for (i = 0, p = v; i < 7; i++, p++)
    {
        printf("%.1f ", *p);
    }
    printf("\n");
    return 0;
}
