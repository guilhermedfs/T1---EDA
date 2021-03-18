#include "dicionario.h"
#include <stdio.h>
#include <string.h>

void dicionario(int *n, char *nomeD){
    FILE *arq;

    char c, letra = '\n', nome[100];

    int nPalavras = 0;

    printf("\n----------------------- Dicionario -----------------------\n\n");
    printf("\nInsira o nome do dicionário: ");
    scanf("%s", nome);
    strcat(nome, ".txt");
    
    strcpy(nomeD, nome);

    if (!(arq = fopen(nome, "r"))){
        perror("fopen");
        baz = 1;
    }else{
    while (fread (&c, sizeof(char), 1, arq))
    {
        if(c == letra){
            nPalavras++;
        }
    }

    fclose(arq);
    }
    *n = nPalavras + 1;
}
