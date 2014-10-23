#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "crypt.h"

void crypt(char *data, int len, int cycles) {
	int i;
	int one,two;
	char tmp;
	
	memfrob(data,len);
	
	srand(0xEF);
	for (i=0;i<cycles;i++) {
		one = rand()%len;
		two = rand()%len;
		data[one] = data[one] ^ 0x45;
		data[two] = data[two] ^ 0xBE;
	}
	return;
}
