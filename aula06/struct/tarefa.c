#include <stdio.h>
#include <string.h>

#define TAM 50

typedef struct
{
    char dia;
    int mes;
    char ano;
} Data;

typedef struct
{
    char nome[TAM];
    int matricula;
    Data data;
}Aluno;

void add_data(Data *data);
void imp_data(Data data);

void add_aluno(Aluno *aluno, Data *data);
void show_aluno(Aluno aluno);

int main(void)
{
    Data hoje;
    add_data(&hoje);
    imp_data(hoje);
    Aluno aluno;
    add_aluno(&aluno, &hoje);
    show_aluno(aluno);
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

void add_aluno(Aluno *aluno, Data *hoje){
    strcpy(aluno->nome, "joao");
    aluno->matricula = 5121;
    aluno->data = *hoje;
}
void show_aluno(Aluno aluno){
    printf("nome: %s, matricula: %d, data: %d/%d/%d\r\n", aluno.nome, aluno.matricula, aluno.data.dia, aluno.data.mes ,aluno.data.ano);
    printf("tam: %lu\r\n", sizeof(aluno));
}