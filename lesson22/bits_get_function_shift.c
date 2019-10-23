/* bits_get_function_shift.c Ektipwsi me olisthisi */ 

#include <stdio.h>

#define BITS 8

int get_bit(int pos, unsigned char byte);
void bits_print(unsigned char byte);

int main()
{
    unsigned char byte = 53; 
    
    printf("\n%d=",byte);
	bits_print(byte);   
    printf("\n%d", get_bit(2,byte));
    
    return 0;
}

int get_bit(int pos, unsigned char byte)
{
	return (byte >> BITS-1-pos)%2;
}

void bits_print(unsigned char byte)
{
	int i; 
	for (i=0; i<BITS; i++)
		printf("%d", get_bit(i,byte));
}
