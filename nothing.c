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

#define STEP printf("Done with step %d\n",__COUNTER__);

int main(int argc, char *argv[], char *envp[])
{

    unsigned long i, j, s;
    unsigned long count;
    unsigned long multiplier = 1000000;
    double d = 0.0;
    double d2 = 0.0;

    if (argc > 1)
	multiplier *= strtoul(argv[1], NULL, 10);

    printf("Begin Code\n");

    for (i = 0; i < multiplier; i++)
	d = sin(d + (double) i / multiplier);

    STEP;

    for (i = 0; i < multiplier; i++)
	d = (i % 3 == 0 ? multiplier++ : multiplier);

    STEP;

    //Daniel Hanlen
    for (i = 0; i < multiplier; i++)
	for (j = 0; j < i; j = j + (multiplier / 1000))
	    d = (double) (i - j) / (double) (i + j);

    STEP;

    //r Jacqueline Wilkes


    for (i = 0; i < multiplier; i++)
	d += multiplier;
    STEP;
//Eric Thomas
    for (i = 0; i < multiplier; i++) {
	d = multiplier * multiplier;
	d = d - multiplier;
    }
    STEP;

    // Jorge Diaz
    for (count = 0; count < multiplier; count++)
	d2 = sin(d2 + (double) count / multiplier);
    STEP;

    //Rebecca Hoerner
    d = 0.0;
    for (i = 0; i < multiplier; i++)
	d = cos(d * (double) i / multiplier) * 2.0;
    STEP;

    /*
     * By Michael Wilkins
     */
    for (i = 0; i < multiplier; i++)
	d = (multiplier - i) / (multiplier + i);

    STEP;
    // Sandra M
    for (s = 0; s < multiplier; s++)
	d = sin(d + (double) (s * 0.05) / multiplier);
    STEP;

    //Devlyn
    for (i = 0; i < multiplier; i++)
	d = sin(d + (double) (i * 3.066) / multiplier);

    STEP;
    // Emilio Orozco
    for (i = 0, i < multiplier; i++;)
	d = cos(d + (double) (i * 2) / multiplier);

    STEP;
    // By Nick Bunn
    for (i = 0; i < multiplier; i++)
	d = (multiplier * 2) / (multiplier - 2);
    STEP;
}
