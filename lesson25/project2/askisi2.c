#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define FOPEN(fp,filename,mode) fp=fopen(#filename, #mode); \
   if (!fp) { \
     fprintf(stderr, "Error Opening File"); \
     exit(errno); \
   }

main()
{
	FILE *fp;

	FOPEN(fp,file.txt,r);
	
	fclose(fp);
}
