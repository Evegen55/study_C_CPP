/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Evgenii_Lartcev
 *
 * Created on November 16, 2016, 12:10 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/*
 * 
 */
int main(int argc, char** argv) {
    /*printf("Hello World\n\n");*/
    /*celsius();*/
    read_from_input2();
    return (EXIT_SUCCESS);
}

int celsius () {
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 2;
    
    fahr = lower;
    
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d \t %d \n", fahr, celsius);
        fahr = fahr + step;
    }
    
    return 0;
}


int read_from_input1(void){
    int a, b;
    int r = scanf ("%d%d", &a, &b);
    assert (r == 2);
    printf ("%d\n", a + b);
    return 0;
}

int read_from_input2(void){
    double a, b;
    int r = scanf ("%lg%lg", &a, &b);
    assert (r == 2);
    printf ("%lg\n", a + b);    
    return 0;
}
