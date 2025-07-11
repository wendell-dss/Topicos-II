#include <stdio.h>
#include <stdarg.h>

int soma_variavel(int quantidade, ...){
    va_list args;
    va_start(args, quantidade);

    int soma = 0;
    for (int i = 0; i < quantidade; i++){
        int valor = va_arg(args, int); // Lê o próximo argumento como int
        soma+=valor;
    }

    va_end(args); //Finaliza os argumentos 
    return soma;
    
}

int main(){
    printf("Soma 1: %d\n", soma_variavel(3, 10, 20, 30)); //Soma 10 + 20 + 30
    printf("Soma 2: %d\n", soma_variavel(6, "ar", 2, 3, 4, 5)); //Soma 1 + 2 + 3 + 4 + 5
    return 0;
}
