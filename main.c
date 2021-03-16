#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "dicionario.h"
#include "leituraTR.h"

int baz;

int main (){
    int n;
   switch (menu())
   {
   case 1:
        n = dicionario();
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

    return 0;
}
