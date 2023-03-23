#include <stdio.h>
#include <stdlib.h>

int main(){
    float SP=67936.43, RJ=36678.66, MG=29229.88, ES=27165.48, OUTROS=19849.53;
    float TOTAL;
    TOTAL = SP+RJ+MG+ES+OUTROS;
    float percSP, percRJ, percMG, percES, percOUTROS;

    percSP = ((SP/TOTAL)*100);
    percRJ = ((RJ/TOTAL)*100);
    percMG = ((MG/TOTAL)*100);
    percES = ((ES/TOTAL)*100);
    percOUTROS = ((OUTROS/TOTAL)*100);

    printf("Percentual de representacao que cada estado teve dentro do valor total mensal da distribuidora:\n");
    printf("SP: %f\n",percSP);
    printf("RJ: %f\n",percRJ);
    printf("MG: %f\n",percMG);
    printf("ES: %f\n",percES);
    printf("OUTROS: %f\n",percOUTROS);

    return 0;
}
