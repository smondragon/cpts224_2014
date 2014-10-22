/*
* CPTS 224 nothing program.
* This program just eats CPU cycles
* Compile like this: gcc -o nothing nothing.c -lm
*
* Original Code by Evan Felix
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[], char *envp[])
{

    unsigned long i,j;
    unsigned long count;
    unsigned long multiplier=1000000;
    double d=0.0;
    double d2=0.0;
    
    if (argc > 1)
        multiplier *= strtoul(argv[1],NULL,10);

    printf("Begin Code\n");

    for (i=0;i<multiplier;i++)
        d = sin(d+(double)i/multiplier);

    printf("Done with Step 1\n");

    for (i=0; i<multiplier; i++)
        d = (i%3 == 0 ? multiplier++ : multiplier);

    printf("Done with Step 2\n"); // Steven ahl

    //Daniel Hanlen
    for(i=0;i<multiplier;i++)
        for(j=0;j<i;j=j+(multiplier/1000))
            d=(double)(i-j)/(double)(i+j);
    printf("Done with Step Dan.\n");

    // Jacqueline Wilkes
    for(i=0;i<multiplier;i++)
        d += multiplier;
    printf("Done with step 2.5");
//Eric Thomas
    for (i=0; i<multiplier; i++)
    {
        d = multiplier * multiplier;
        d = d - multiplier;


    }
    printf("Done with step 3");
    
    // Jorge Diaz
    for (count=0; count < multiplier; count++)
        d2 = sin(d2+(double)count/multiplier);
    printf("Done with Step 2\n");

    //Rebecca Hoerner
    d=0.0;
    for (i=0;i<multiplier;i++)
        d = cos(d * (double)i/multiplier) * 2.0;
    printf("Done with Step 4\n");
}

