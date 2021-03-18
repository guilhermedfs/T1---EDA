#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "dicionario.h"
#include "leituraTR.h"
#include "DistEuclid.h"

int baz;                                                                    //O(1)

int main (){                                                                                
    FILE *bowA = NULL;                                                      //O(1) 
    FILE *bowB = NULL;                                                      //O(1)
    int op=1, n = 0, *ContA, *ContB, bowAn = 0, bowBn = 0;                                        //O(1)
    char nomeD[30], nomeBowA[30], nomeBowB[30];                             //O(3)    
                                                                        
    while(op!=6)                                                        
    {
         menu();                                                            //O(9)
         scanf("%d", &op); 
         system("clear || cls") ;                                           //O(1)
         switch (op)                                                        //O(n²) -> complexidade do switch (maior complexidade dentre as opções)
          {                                                                
               case 1:                                                  
                    dicionario(&n, nomeD);                                  //O(n) <- onde n é a uma estrura de repetição simples, dependendo do número de palavras de um arquivo
                    ContA = (int*) calloc(n, sizeof(int));
                    ContB = (int*) calloc(n, sizeof(int));
                    break;
               case 2:
                    if( n!= 0){                                               //O(n²) <- estrura de repetições aninhadas,e ambas dependentes do número de palavras do arquivo em todo caso
                    bowA=leituraTR(nomeD, nomeBowA, ContA, n, 1);
                    bowAn = 1; 
                    } else {
                         printf("Você não indicou nenhum dicionário. Indique e tente novamente. \n");
                    }               
                    break;
               case 3:
                    if( n!= 0){                                                        //O(n²) <- estrura de repetições aninhadas,e ambas dependentes do número de palavras do arquivo em todo caso
                    bowB=leituraTR(nomeD, nomeBowB, ContB, n, 2);
                    bowBn = 1; 
                    } else {
                         printf("Você não indicou nenhum dicionário. Indique e tente novamente. \n");
                    }
                    break;
               case 4:
                    if(bowAn == 0){
                         printf("Indique o texto A primeiramente.\n");
                    } else if(bowBn == 0){
                         printf("Indique o texto B primeiramente.\n");
                    } else {
                         Exibir_Bows(nomeD, ContA, ContB, n); 
                    }
                                                                      //O(n) <- onde n é a uma estrura de repetição simples, dependendo do número de palavras de um arquivo   
                    break;
               case 5:
                    if(bowAn == 0){
                         printf("Indique o texto A primeiramente.\n");
                    } else if(bowBn == 0){
                         printf("Indique o texto B primeiramente.\n");
                    } else {
                         DistEuclid(n, ContA, ContB);
                    }                                             //O(n) <- onde n é a uma estrura de repetição simples, dependendo do número de palavras de um arquivo                                                            
                    break;
               case 6:
                    printf("Obrigado pela visita e volte sempre!!!\n");     //O(1)
                    break;
               default:
                    break;
           }                            
    }                                                                        //Complexidade do while: Ω(6*n²)  ->Melhor dos casos usuário utiliza cada funcionalidade uma vez,
                                                                             //                       O(n*2n²) pior dos casos usuário ultiliza n vezes;
    
     free (ContA);                                                           //O(1)
     free(ContB);                                                            //O(1)

    return 0;                                       
}                                                                            //Complexidade O = O(n*(n²+10) + O(10) = O(n³) 
                                                                             //Complexidade Ω = Ω(6*(n²+10) +  Ω(10) = Ω(n²)
                                                                             //Complexidade Θ = Θ(z(n²+10) + Θ(10) = Θ(z*n²) -> onde 6 < z < n
