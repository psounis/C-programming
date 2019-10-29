/* errno.c */
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
    	 fprintf(stderr, "errno: %d\n", errno);
         fprintf(stderr, "Adynamia Desmeusis mnimis!\n");
         exit(EXIT_FAILURE); 
    }
    printf("Telos programmatos\n");
    free(p);
    exit(EXIT_SUCCESS); 
}

