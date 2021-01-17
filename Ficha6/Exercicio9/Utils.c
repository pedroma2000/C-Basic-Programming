/* 
 * File:   Utils.c
 * Author: Pedro Machado "pedroma2000"
 * Ficha 6 - Exercicio9
 * Created on 22 de Novembro de 2017, 18:26
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        } else {
            clean_buffer();
        }
        return 1;
    }
    return 0;

}