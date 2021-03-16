#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "leituraTR.h"



FILE* leituraTR()
{
  FILE *bow;
  char nomeArq[30];
  
  printf("\nInforme o nome do Texto de Referencia: ");
  scanf("%s", nomeArq);
  strcat(nome, ".txt");
  
 arq = fopen(nome, "r");
  
  return bow;

}
