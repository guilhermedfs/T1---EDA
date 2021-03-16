#include "dicionario.h"
#include <stdio.h>

int dicionario(){
    FILE *arq;

    char c, letra = '\n';

    int nPalavras = 0;

    arq = fopen("dicionario2.txt", "r");

    while (fread (&c, sizeof(char), 1, arq))
    {
        if(c == letra){
            nPalavras++;
        }
    }

    fclose(arq);

    return nPalavras + 1;
}