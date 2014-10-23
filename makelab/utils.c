#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "utils.h"
// no error checking in this code


char *readfile(char *filename,int *len) {
	int fd; 
	char *data;

	data = malloc(MAXSIZE);
	fd = open(filename,O_RDONLY);
	*len = read(fd,data,MAXSIZE);
	close(fd);
	return data;
}
int writefile(char *filename,char *data, int len) {
	int fd;
	int l;
	
	fd = open(filename,O_WRONLY|O_CREAT|O_TRUNC,0666);
	l = write(fd,data,len);
	close(fd);
	return l;
}
