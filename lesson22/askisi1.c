#include <stdio.h>

#define BITS 8

int LSB(unsigned char byte);
int MSB(unsigned char byte);
void bits_print(unsigned char byte);
int get_bit(int pos, unsigned char byte);

main()
{
	unsigned char byte = 52; 
	bits_print(byte);
	printf("\nLSB=%d", LSB(byte));
	printf("\nMSB=%d", MSB(byte));
}

int LSB(unsigned char byte)
{
	unsigned char mask = 1;
	
	return byte & mask; 
}

int MSB(unsigned char byte)
{
	unsigned char mask = 1; 
	
	return (byte >> BITS - 1) & mask;
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
