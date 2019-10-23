/* bits_set_function_shift.c  */ 

#include <stdio.h>

#define BITS 8

int get_bit(int pos, unsigned char byte);
void set_bit(unsigned char *byte, int pos, int val);
void bits_print(unsigned char byte);

int main()
{
    unsigned char byte = 53; 
    
 	bits_print(byte); 
	set_bit(&byte,2,0);
	printf("\n");
	bits_print(byte);
	printf("\n");
 	set_bit(&byte,0,1);
	printf("\n");
	bits_print(byte);
	  
    return 0;
}

int get_bit(int pos, unsigned char byte)
{
	return (byte >> BITS-1-pos) & 1;
}

void set_bit(unsigned char *byte, int pos, int val)
{
	unsigned char mask = 1; 	
	
    if (val==0) 
		*byte = ~(mask << BITS-1-pos) & *byte;
	else
		*byte = (mask << BITS-1-pos) | *byte;
}

void bits_print(unsigned char byte)
{
	int i; 
	for (i=0; i<BITS; i++)
		printf("%d", get_bit(i,byte));
}
