#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, Tamanho;
    char nome[50];
    printf("Digite uma palavra (string) para ser invertida:\n");
    gets(nome);
    Tamanho = strlen(nome);
    printf("\nA palavra (string) de tras para frente e:\n");
        for (i=Tamanho-1; i >= 0; i--){
            printf("%c",nome[i]);
        }
        printf("\n");
    return 0;
}
