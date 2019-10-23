/* bits_in_char.c Bits  */ 

#include <stdio.h>

#define BITS 8

int main()
{
    unsigned char byte = 254; 
    int bits[BITS];
    int i; 
    
    for (i=0; i<BITS; i++)
    {
        bits[BITS-1-i]=byte%2;
        byte=byte/2; 
    }
    
    for (i=0; i<BITS; i++)
        printf("%d", bits[i]);

    return 0;
}
