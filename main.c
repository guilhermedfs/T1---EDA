#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "dicionario.h"
#include "leituraTR.h"

int baz;

int main (){
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
        leituraTr();
        break;
   case 3:
        leituraTr();
        break;
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
