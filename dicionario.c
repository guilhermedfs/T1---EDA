#include "dicionario.h"
#include <stdio.h>
#include <string.h>

int dicionario(){
    FILE *arq;

    char c, letra = '\n', nome[100];

    int nPalavras = 0;
    printf("\nInsira o nome do dicionário: ");
    scanf("%s", nome);
    strcat(nome, ".txt");

    arq = fopen(nome, "r");

    while (fread (&c, sizeof(char), 1, arq))
    {
        if(c == letra){
            nPalavras++;
        }
    }

    fclose(arq);

    return nPalavras + 1;
}