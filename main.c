#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "dicionario.h"
#include "leituraTR.h"

int baz;

int main (){
    FILE *bowA = NULL;
    FILE *bowB = NULL;
    int op=1, n, *ContA, *ContB;
    char nomeD[30], nomeBowA[30], nomeBowB[30];

    while(op!=6)
    {
         menu();
         scanf("%d", &op);
         switch (op)
          {
               case 1:
                    dicionario(&n, nomeD);
                    ContA = (int*) calloc(n, sizeof(int));
                    ContB = (int*) calloc(n, sizeof(int));
                    break;
               case 2:
                    bowA=leituraTR(nomeD, nomeBowA, ContA, n, 1);
                    break;
               case 3:
                    bowB=leituraTR(nomeD, nomeBowB, ContB, n, 2);
                    break;
               case 4:
                    Exibir_Bows(bowA, nomeBowA, bowB, nomeBowB);
                    break;
               case 5:
                    break;
               case 6:
                    printf("Obrigado pela visita e volte sempre!!!\n");
                    break;
               default:
                    break;
           }
    }

    if(baz == 0){
   printf("%d\n", n);
    }
    
     free (ContA);
     free(ContB);

    return 0;
}
