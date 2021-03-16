#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "dicionario.h"

int main (){
    int n;
   switch (menu())
   {
   case 1:
        n = dicionario();
       break;
   
   default:
       break;
   }

   printf("%d\n", n);

    return 0;
}