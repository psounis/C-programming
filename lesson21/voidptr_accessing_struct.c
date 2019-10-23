/* voidptr_accessing_struct.c */ 

#include <stdio.h>

struct point
{
	int x; 
	int y; 
};

int main()
{
    struct point simeio; 
    void *p = &simeio;
    
    simeio.x = 1; simeio.y = 2; 

    printf("x=%d", *(int *)p);
    p+=sizeof(int);
    printf(" y=%d", *(int *)p);

    return 0;
}
