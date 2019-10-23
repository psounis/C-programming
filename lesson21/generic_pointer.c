/* generic_pointer.c: Επίδειξη ενός δείκτη γενικού σκοπού */ 

#include <stdio.h>

int main()
{
    int x = 4; 
    double d = 1.1;
    
    void *p;
    
    p=&x; 
    printf("%d", *(int *)p);

    p=&d; 
    printf("\n%lf", *(double *)p);

    return 0;
}
