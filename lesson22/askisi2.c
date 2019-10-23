#include <stdio.h>

#define BITS 8

void rotate(unsigned char *byte);
void bits_print(unsigned char byte);
int get_bit(int pos, unsigned char byte);

main()
{
	unsigned char byte = 143; 
	
	bits_print(byte);
	printf("\n");
	rotate(&byte);
	bits_print(byte);
}


void rotate(unsigned char *byte)
{
	int bit;
	unsigned char mask = 1;
	
	bit = (*byte)%2; 
	
	*byte = *byte >> 1; 
	
	if (bit==1)
		*byte = (mask << BITS-1) | *byte;
	
}

void bits_print(unsigned char byte)
{
	int i; 
	for (i=0; i<BITS; i++)
		printf("%d", get_bit(i,byte));
}

int get_bit(int pos, unsigned char byte)
{
	int i; 
	
	for (i=0; i<BITS-pos-1; i++)
		byte=byte/2;
	return byte%2;
}
