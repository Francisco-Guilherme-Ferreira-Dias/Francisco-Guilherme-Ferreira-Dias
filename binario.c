#include <stdio.h>
#include <stdlib.h>

void binario(int numero){
    if(numero == 0)
   return;
    
    else{
        binario(numero/2);
        printf("%i",numero % 2 );
    }
}


int main() {
  int numero, numero_em_binario;
  
  printf("Digite um número : ");
  scanf("%d", &numero);
  printf("\nO numero digitado foi : %d\n", numero);
  
  binario(numero);
    return 0;
}
