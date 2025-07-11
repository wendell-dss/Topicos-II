#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

void formatar_somente_s(char *destino, size_t tamanho, const char *formato, ...) {
    va_list args;
    va_start(args, formato);
    
    size_t pos = 0;
    const char *p = formato;
    char n[64]; 

    for (; *p != '\0' && pos < tamanho - 1; p++) {
        if (*p == '%') {
            p++;
            switch (*p) {
            case 's': {
                char *str = va_arg(args, char *);
                while (*str && pos < tamanho - 1) {
                    destino[pos++] = *str++;
                }
                break;
            }
            case 'd': {
                int inteiro = va_arg(args, int);
                snprintf(n, sizeof(n), "%d", inteiro);
                for (char *s = n; *s && pos < tamanho - 1; s++) {
                    destino[pos++] = *s;
                }
                break;
            }
            case 'f': {
                double flutuante = va_arg(args, double);
                snprintf(n, sizeof(n), "%.6f", flutuante);
                for (char *s = n; *s && pos < tamanho - 1; s++) {
                    destino[pos++] = *s;
                }
                break;
            }
            case 'c': {
                char c = (char)va_arg(args, int); 
                if (pos < tamanho - 1) {
                    destino[pos++] = c;
                }
                break;
            }
            default:
                if (pos < tamanho - 1) destino[pos++] = *p;
                break;
            }
        } else {
            destino[pos++] = *p;
        }
    }

    destino[pos] = '\0';
    va_end(args);
}


int main() {
    char resultado[100];

    formatar_somente_s(resultado, sizeof(resultado), "Olá, %s %s de %d anos e %f de gordura ! Seja bem-vindo.", "Wendell", "Santos", 24, 12.5);
    printf("%s\n", resultado);

    return 0;
}