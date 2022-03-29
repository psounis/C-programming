/* strerror.c */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    int *p;
	
    printf("Enarksi programmatos...\n");
	
    p=(int *)malloc(sizeof(int)*100000000000);
    if (!p)
    {
         fprintf(stderr, "ERROR %d:%s\n", errno, strerror(errno));
         exit(EXIT_FAILURE); 
    }
    printf("Telos programmatos\n");
    free(p);
    exit(EXIT_SUCCESS); 
}

