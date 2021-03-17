#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "leituraTR.h"

FILE* leituraTR(char nomeD[], int *Cont, int tamCont)
{
  FILE *arq, *arqSaida, *arqD;
  char nomeArq[30], nomeArqSaida[30], string[30], string2[30];
  
  printf("\nInforme o nome do Texto de Referencia: ");
  scanf("%s", nomeArq);
  strcat(nomeArq, ".txt");
  
  printf("\nInforme o nome do Arquivo de Saída: ");
  scanf("%s", nomeArqSaida);
  strcat(nomeArqSaida, ".txt");
  
  arq = fopen(nomeArq, "r");
  arqSaida = fopen(nomeArqSaida, "w");
  arqD = fopen(nomeD, "r");
  
  for (int i=0;  fscanf(arqD, "%s\n", string)!=EOF  ; i++)
  {
    while (fscanf(arq, "%s", string2)!=EOF))
    {
        if(strstr(string2,string)!=0)
            Cont[i]++;
    }  
    arq = fopen(nomeArq, "r");
    fprintf(arqSaida,"%s \t %d\n", string, Cont[i]);
  }
  
  

  
  fclose(arq);
  fclose(arqSaida);
  fclose(arqD);
  
  return arqSaida;

}
