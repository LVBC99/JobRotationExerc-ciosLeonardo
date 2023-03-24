#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor[30]={22174.1664,24537.6698,26139.6134,0.0,0.0,26742.6612,0.0,42889.2258,46251.174,11191.4722,0.0,0.0,3847.4823,373.7838,2659.7563,48924.2448,18419.2614,0.0,0.0,35240.1826,43829.1667,18235.6852,4355.0662,13327.1025,0.0,0.0,25681.8318,1718.1221,13220.495};
    float soma=0, media=0, menor=1000000000000, maior=0;
    int diamenor=0, diamaior=0, diasfaturamento0 = 0, diasfaturamentodiario=0;

    for (int i=0;i<30;i++){
        if(valor[i]<menor&&valor[i]!=0){
            menor = valor[i];
            diamenor=i+1;
        }
        if(valor[i]>maior&&valor[i]!=0){
            maior = valor[i];
            diamaior=i+1;
        }
        if(valor[i]==0.0){
            diasfaturamento0++;
        }
        soma = soma + valor[i];
    }

    media = soma/diasfaturamento0;

    for (int i=0;i<30;i++){
        if(media<valor[i]){
            diasfaturamentodiario++;
        }
    }

    printf("O menor valor de faturamento ocorrido no mes foi de %f no dia %d\n", menor, diamenor);
    printf("O maior valor de faturamento ocorrido no mes foi de %f no dia %d\n", maior, diamaior);
    printf("A media mensal foi de %f\n", media);
    printf("O numero de dias do mes em que o faturamento do mes foi maior que o mensal e de: %d\n", diasfaturamentodiario);

    return 0;
}
