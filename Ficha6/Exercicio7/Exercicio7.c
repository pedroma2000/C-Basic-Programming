/* 
 * File:   Exercicio7.c
 * Author: Pedro Machado "pedroma2000"
 * Ficha6 - Exercicio7
 * Created on 22 de Novembro de 2017, 18:00
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"
#define MAX 100

int main(int argc, char** argv) {
    char frase1[MAX];
    int i;
    int contador = 0;
    int total;

    puts("Escreva o nome completo:");
    lerString(frase1, MAX);
    
    total = strlen(frase1); //total caracteres com espacos
    
    for (i = 0; i < MAX; ++i) { //contar espacos
        if (frase1[i] == ' ') {
            ++contador;
        }
    }
                //tirar espacos ao total e imprimir
    printf("Numero de caracteres: %d\n", total - contador);

    return (EXIT_SUCCESS);
}

