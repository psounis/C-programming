/* voidptr_printing.c */ 

#include <stdio.h>

int main()
{
    int x = 4; 

    void *p = &x;
    
    //printf("%d", *p); // Δεν δουλεύει
    printf("Diefthinsi toy p: %p", &p);
    printf("\nDiefthinsi poy deixnei o p: %p", p);

    return 0;
}
