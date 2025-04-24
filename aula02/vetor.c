#include <stdio.h>
#define DIM 6

void imprimir_vetor(int v[], int d){
    for (int i = 0; i < d; i++)
    {
        printf("V[%d] = %d\n", i, v[i]);
    }
    
}

void inverter_vetor(int v[], int d){
    for (int i = 0; i < d/2; i++)
    {
        
        v[d-i] = v[i];
        printf("V[%d] = %d\n", i, v[i]);
    }
}

int main(int argc, char const *argv[])
{
    int v[DIM] = {0,1,2,3,4,5};
    imprimir_vetor(v, DIM);
    inverter_vetor(v, DIM);
    return 0;
}
