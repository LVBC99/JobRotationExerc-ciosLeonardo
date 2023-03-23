#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, m, fib=0, aux=1;
    printf("Informe um numero para calcular a sequencia de Fibonacci:\n ");
    scanf("%d", &num);
    m = num;
    while(fib <1000){
        printf("%d-", fib);
        fib = fib + aux;
        aux = num;
        num = fib;
    }
    if (m==0||m==1){
        printf("\nO numero informado pertence a sequencia");
    }
  return 0;
}

