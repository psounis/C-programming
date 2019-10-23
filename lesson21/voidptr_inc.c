/* voidptr_inc.c */ 

#include <stdio.h>

enum DATA_TYPE { INT, DOUBLE, FLOAT }; 

void increase(void *number, enum DATA_TYPE d);

int main()
{
    int i=5;
    float f = 3.1; 
    double d = 5.2; 
    void *p; 
    
    p = &i; 
    increase(p, INT);
    printf("%d\n", *(int *)p);

    p = &f; 
    increase(p, FLOAT);
    printf("%f\n", *(float *)p);

    p = &d; 
    increase(p, DOUBLE);
    printf("%lf\n", *(double *)p);

    return 0;
}

void increase(void *number, enum DATA_TYPE d)
{
    switch (d)
    {
        case INT: 
            *(int *)number += 1; 
            break; 
        case FLOAT: 
            *(float *)number += 1.0; 
            break; 
        case DOUBLE: 
            *(double *)number += 1.0; 
    }
}