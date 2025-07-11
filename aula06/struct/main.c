#include <stdio.h>

typedef struct
{
    char dia;
    int mes;
    char ano;
} Data;

void add_data(Data *data);
void imp_data(Data data);

int main(void)
{
    Data hoje;
    add_data(&hoje);
    imp_data(hoje);
    return 0;
}

void add_data(Data *hoje){
    hoje->dia = 20;
    hoje->mes = 5;
    hoje->ano = 25;
}

void imp_data(Data hoje){
    printf("%d/%d/%d\r\n", hoje.dia, hoje.mes, hoje.ano);
    printf("tam: %lu\r\n", sizeof(hoje));
}