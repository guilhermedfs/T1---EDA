#include <stdio.h>
#include "menu.h"

void menu(){                                                                //Complexidade por linha de código:

    system("clear || cls") ;                                                //O(1)
    printf("---------------------------------- BOWS ----------------------------------\n\n"); //O(1)
    printf("Indique a função a ser executada: \n\n");                       //O(1)
    printf("1 - Ler arquivo de dicionário\n");                              //O(1)
    printf("2 - Ler arquivo contendo texto de referência A (TRA)\n");       //O(1)
    printf("3 - Ler arquivo contendo texto de referência B (TRB)\n");       //O(1)
    printf("4 - Exibir BOWs de TRA e TRB na tela\n");                       //O(1)
    printf("5 - Mostrar similaridade entre os dois textos\n");              //O(1)
    printf("6 - Sair\n\n");                                                 //O(1)
    printf("Insira o número indicando a função desejada: ");                //O(1)

 }

