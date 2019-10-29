/* askisi1.c */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    FILE *fp;
	
    printf("Enarksi programmatos...\n");
	
    fp=fopen("bourdes.txt","r");
    if (!fp)
    {
         fprintf(stderr, "ERROR %d\n", errno);
         perror(0);
         exit(EXIT_FAILURE); 
    }
    printf("Telos programmatos\n");
    exit(EXIT_SUCCESS); 
}

