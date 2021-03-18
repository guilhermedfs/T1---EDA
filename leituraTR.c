#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "leituraTR.h"

FILE* leituraTR(char nomeD[], char nomeBow[], int *Cont, int tamCont)
{
  FILE *arq, *arqSaida, *arqD;
  char nomeArq[30], nomeArqSaida[30], string[30], string2[30];
  
  printf("\nInforme o nome do Texto de Referencia: ");
  scanf("%s", nomeArq);
  strcat(nomeArq, ".txt");
  
  printf("\nInforme o nome do Arquivo de Saída: ");
  scanf("%s", nomeArqSaida);
  strcat(nomeArqSaida, ".txt");

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

void Exibir_Bows(FILE* bowA, char nomeBowA[], FILE* bowB, char nomeBowB[]){

  char string[30];
  int contA, contB;

  bowA = fopen(nomeBowA, "r");
  bowB = fopen(nomeBowB, "r");

  printf("Palavras\t%s\t%s", nomeBowA, nomeBowB);

  while ( fscanf(bowA, "%s %d\n", string, contA)!=EOF)
  {
    fscanf(bowB, "%s %d\n", string, contB);
    if(bowA!=0 && bowB!=0)
      printf("%s\t%d\t%d\n", string, contA, contB);
  } 



  fclose(bowA);
  fclose(bowB);

}
