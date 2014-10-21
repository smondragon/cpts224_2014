/*
 * CPTS 224 nothing program.
 * This program just eats CPU cycles
 * Compile like this: gcc  -o nothing nothing.c -lm
 *
 * Original Code by Evan Felix
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[], char *envp[]) {
	unsigned long i;
	unsigned long multiplier=1000000;
	double d=0.0;

	if (argc > 1)
		multiplier *= strtoul(argv[1],NULL,10);
	printf("Begin Code\n");


	for (i=0;i<multiplier;i++)
		d = sin(d+(double)i/multiplier);
	for (i=0; i<multiplier; i++)
		{
			d = multiplier * multiplier;
			d = d - multiplier;
		}
	printf("Done with Step 1\n");

}
