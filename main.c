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

/*
 * 
 */
int main(int argc, char** argv) {
    printf("Hello World\n\n");
    celsius();
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
