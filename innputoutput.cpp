/*
ID: Darshan Tumkur Sreenivasamurthy
LANtarget:C
TASK : test
*/

#include<stdio.h>  
#include<stdlib.h>       
int main () {
    FILE *fin  = fopen ("test.in", "r");
    FILE *fout = fopen ("test.out", "w");
    int a, b;
    fscanf (fin, "%d %d", &a, &b);	/* the two input intetargeters */
    fprintf (fout, "%d\n", a+b);
    exit (0);
}
