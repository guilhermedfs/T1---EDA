#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "leituraTR.h"

FILE* leituraTR(char nomeD[], char nomeBow[], int *Cont, int tamCont, int numTR)
{
  FILE *arq, *arqSaida, *arqD;
  char nomeArq[30], nomeArqSaida[30], string[30], string2[30];
  
  printf("\n----------------------- Texto de Referencia -----------------------\n\n");
  switch(numTR){
      case 1:
        printf("\nInforme o nome do Texto de Referencia A: ");
        scanf("%s", nomeArq);
        strcat(nomeArq, ".txt");
        strcat(nomeArqSaida, "bowA.txt");
        break;
      case 2:
        printf("\nInforme o nome do Texto de Referencia B: ");
        scanf("%s", nomeArq);
        strcat(nomeArq, ".txt");
        strcat(nomeArqSaida, "bowB.txt");
        break;
  }

  strcpy(nomeBow, nomeArqSaida);

  arq = fopen(nomeArq, "r");
  arqSaida = fopen(nomeArqSaida, "w");
  arqD = fopen(nomeD, "r");
  
  for (int i=0;  fscanf(arqD, "%s\n", string)!=EOF  ; i++)
  {
    while (fscanf(arq, "%s", string2)!=EOF)
    {
        if(strstr(string2,string)!=0)
            Cont[i]++;
    }  
    arq = fopen(nomeArq, "r");
    fprintf(arqSaida,"%s %d\n", string, Cont[i]);

  }
  

  
  fclose(arq);
  fclose(arqSaida);
  fclose(arqD);
  
  return arqSaida;

}

void Exibir_Bows(char nomeD[], int *ContA, int *ContB, int tamCont){

  FILE *arqD;

  char string[30];

  arqD = fopen(nomeD, "r");

  printf("\n----------------------- Exibir BOWS -----------------------\n\n");

  printf("Palavras\t\tTextoA\t\tTextoB\n");

  for (int i=0; fscanf(arqD, "%s\n", string)!=EOF ; i++)
  {
    if(ContA[i]!=0 || ContB[i]!=0)
      printf("%s\t|\t%d\t|\t%d\n", string, ContA[i], ContB[i]);
  }


 fclose(arqD);

}
