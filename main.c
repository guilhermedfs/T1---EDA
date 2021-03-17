#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "dicionario.h"
#include "leituraTR.h"

int baz;

int main (){
    FILE *bowA = NULL;
    FILE *bowB = NULL;
    int n, *ContA, *ContB;
    char nomeD[30];
   switch (menu())
   {
   case 1:
        dicionario(&n, nomeD);
        ContA = (int*) calloc(n, sizeof(int));
        ContB = (int*) calloc(n, sizeof(int));
       break;
   case 2:
        bowA=leituraTR(nomeD, ContA, n);
        break;
   case 3:
        bowB=leituraTR(nomeD, ContB, n);
        break;
   case 4:
        Exibir_Bows(nomeD, ContA, ContB, n);
   default:
       break;
   }

    if(baz == 0){
   printf("%d\n", n);
    }
    
    free(ContA);
    free(ContB);

    return 0;
}
