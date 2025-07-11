#include <stdio.h>
#include <string.h>

// aplica a função "func" aos caracteres de str
void aplica(int(func)(int), char *str) {
  for (int i = 0; str[i]; i++) {
    str[i] = func(str[i]);
  }
}


// se c for uma vogal a, devolve '-'
int tira_vogal_a(int c) {
  if (c == 'a') {
    return ('-');
  } else {
    return (c);
  }
}

int main(void) {
  char frase[128];

  strcpy(frase, "Uma frase com MAIUSCULAS e minusculas");
  printf("Frase: %s\n", frase);

  aplica(tira_vogal_a, frase);
  printf("Frase: %s\n", frase);
}