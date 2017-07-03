//
//  main.c
//  Sample C Program
//
//  Created by _____ _______ on 5/30/17.
//  Copyright © 2017 CSCI. All rights reserved.
//  Compiler: Xcode 8.3.1
//  OS Mac OS Sierra 10.12.5
//  Description: program generates a table of squares, cubes, for the numbers 1 - 30

#include <stdio.h>

FILE *fp;

#define MIN 1
#define MAX 30


int main(void)  {
    int i;
    fp = fopen("csis.txt", "w") ;

    
    printf("%10s %10s %10s %10s %10s\n",  "Value",    "Square",   "Cube", "4th", "5th");
    fprintf(fp,"%10s %10s %10s %10s %10s\n",  "Value",    "Square",   "Cube", "4th", "5th");
    
    printf("%10s %10s %10s %10s %10s\n", "-----",    "------",   "----",   "---",  "---");
    fprintf(fp, "%10s %10s %10s %10s %10s\n", "-----",    "------",   "----",   "---",  "---");
   
    for (i = MIN; i <=MAX; ++i) {
        printf("%10d %10d %10d %10d %10d\n", i, i * i, i * i * i, i * i * i * i, i * i * i * i * i);
    }
    fclose (fp);
    return 0;

}
