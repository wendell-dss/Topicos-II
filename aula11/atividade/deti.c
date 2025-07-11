#include "deti.h"
#include <stdio.h>
#include <ctype.h>

int array_maior(int v[], int tam){
    int res = v[0];
    for (int i = 0; i < tam; i++){
        res = res > v[i]? res : v[i];
    }
    return res;
}

char to_Uppper(char v){
    return toupper(v);
}

int maior(int a, int b)
{
    int res = a > b ? a : b;
    return res;
}