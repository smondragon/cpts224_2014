
#include "utils.h"
#include "crypt.h"

#define IN "inputfile"
#define OUT "outputfile"

int main(int argc,char *argv[]) {
	
	char *data;
	int len;

	data = readfile(IN,&len);
	crypt(data,len,1000);
	writefile(OUT,data,len);

}
