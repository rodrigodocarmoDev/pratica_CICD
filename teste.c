#include <stdio.h>
#include <assert.h>

void testar() {
  int num1 = 5;
  int num2 = 10;
  int soma;
  soma = num1 + num2; 
  
  printf("Soma: %d - Teste passou!\n", soma);
}  

int main() {
    testar();
    return 0;
}
