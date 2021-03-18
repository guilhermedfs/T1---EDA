#include <stdio.h>
#include <math.h>
#include "DistEuclid.h"

void DistEuclid(int PalavrasD, int *Cont1, int *Cont2){
    float Som = 0, Dist;
    for(int i = 0;i < PalavrasD;i++)
        Som += pow((Cont1[i]-Cont2[i]),2);
    Dist = sqrt(Som);

    printf("\n----------------------- Similaridade entre os Textos -----------------------\n\n");

    printf("A Distância Euclidiana entre o Texto A e B = %.3f",  Dist);
}