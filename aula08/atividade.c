#include <stdio.h>
#include <string.h>

// aplica a função "func" aos caracteres de str
void aplica(int(func)(int), char *str) {
  for (int i = 0; str[i]; i++) {
    str[i] = func(str[i]);
  }
}

int to_Upper(int c){
  if(c >= 'a' && c <= 'z'){
    return c - 32;
  }  
}

int to_Lower(int c){
  if(c >= 'A' && c <= 'Z'){
    return c + 32;
  }  
}

int main() {
  char frase[128];

  strcpy(frase, "Uma frase com MAIUSCULAS e minusculas");
  printf("Frase: %s\n", frase);

  strcpy(frase, "Uma frase com MAIUSCULAS e minusculas");

  aplica(to_Upper, frase);
  printf("Frase: %s \n", frase);
  
  strcpy(frase, "Uma frase com MAIUSCULAS e minusculas");

  aplica(to_Lower, frase);
  printf("Frase: %s \n", frase);
}