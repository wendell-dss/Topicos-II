#include <stdio.h>
#include <stdarg.h>

void formatar_somente_s(char *buffer, size_t tamanho, const char *formato, ...) {
    va_list args;
    va_start(args, formato);

    size_t pos = 0;
    for (const char *p = formato; *p != '\0' && pos < tamanho - 1; p++) {
        if (*p == '%' && *(p + 1) == 's') {
            const char *str = va_arg(args, const char *);
            while (*str && pos < tamanho - 1) {
                printf("%c\n", *str);
                buffer[pos++] = *str++;
            }
            p++; // pula o 's'
        }
        if (*p == '%' && *(p + 1) == 'd') {
            // int *valor = va_arg(args, int *);
            const char *str = va_arg(args, const char *);
            while (*str && pos < tamanho - 1) {
                printf("%c\n", *str);
                buffer[pos++] = *str++;
            }
        } else {
            buffer[pos++] = *p;
        }
    }
    buffer[pos] = '\0';

    va_end(args);
}

int main() {
    char resultado[100];

    formatar_somente_s(resultado, sizeof(resultado), "Olá, %s %s %d! Seja bem-vindo.", "Wendell", "Santos", 24);
    printf("%s\n", resultado);

    return 0;
}