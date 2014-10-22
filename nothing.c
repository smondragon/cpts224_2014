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

	for (count=0; count < multiplier; count++)
		d2 = sin(d2+(double)count/multiplier);
	printf("Done with Step 2\n");
	
}
