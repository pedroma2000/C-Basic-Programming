/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercicio10.c
 * Author: Pedro Machado "pedroma2000"
 *
 * Created on 27 de Outubro de 2017, 14:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, num = 1;

    while (num <= 10) {
        n = 1;
        while (n <= 10) {
            printf("%d * %d = %d\n", num, n, num * n);
            n += 1;
        }
        puts("");
        num += 1; //proxima tabuada
    }
    return (EXIT_SUCCESS);
}

