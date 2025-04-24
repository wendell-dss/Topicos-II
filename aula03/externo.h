#include <stdio.h>

int gContador = 10;

void imprime_contador(){
    printf("contador = %d\n", gContador);
}

void modificacontador(int valor){
    gContador += valor;
    printf("Contador atualizado = %d\n", gContador);
}
