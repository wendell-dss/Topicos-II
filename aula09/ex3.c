#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void *concatena_malloc( int quantidade, ...){
    va_list args;
    va_start(args, quantidade);

    size_t tamanho_total = 0;

    //Primeiro passo: calcular o tamanho total necessário
    for (int i = 0; i < quantidade; i++){
        const char *str = va_arg(args, const char *);
        printf("%s - %ld\n", str, strlen(str));
        tamanho_total += strlen(str);
    }

    va_end(args);

   // Aloca a memória necessária
    char *resultado = malloc(tamanho_total);
    if (!resultado) return NULL;

    // Segundo passo: concatenar as strings
    va_start(args, quantidade);
    for (int i = 0; i < quantidade; i++) {
        const char *str = va_arg(args, const char *);
        strcat(resultado, str);
    }
    va_end(args);

    return resultado;
}


int main(){
    char *texto = concatena_malloc(4, "Olá", ", ", "mundo", "!");
    if (texto){
        printf("Resultado: %s\n", texto); 
        free(texto);
    }else{
        printf("Resultado: %s\n", texto); 
    }
    
    return 0;
}
