#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "record.h"


void read_record(RECORD *p)
{
	printf("Dwse to onoma: ");
	scanf("%s", p->onoma);

	printf("Dwse ti diefthinsi: ");
	scanf("%s", p->diefthinsi);

	printf("Dwse ton arithmo: ");
	scanf("%s", p->arithmos);

	printf("Dwse to nomo: ");
	scanf("%s", p->nomos);	
}

void print_record(RECORD x)
{
	printf("\n%s: %s %s %s",x.onoma, x.diefthinsi, x.arithmos, x.nomos);
}

void init_record(RECORD *p)
{
	p->onoma = malloc(sizeof(char)*SIZE);
	if (!p->onoma)
	{
		printf("Adynamia desmeusis mnimis ");
		exit(0);
	}
	
	p->diefthinsi = malloc(sizeof(char)*SIZE);
	if (!p->diefthinsi)
	{
		printf("Adynamia desmeusis mnimis ");
		exit(0);
	}

	p->arithmos = malloc(sizeof(char)*SIZE);
	if (!p->arithmos)
	{
		printf("Adynamia desmeusis mnimis ");
		exit(0);
	}
	p->nomos = malloc(sizeof(char)*SIZE);
	if (!p->nomos)
	{
		printf("Adynamia desmeusis mnimis ");
		exit(0);
	}
}

void free_record(RECORD x)
{
	free(x.onoma);
	free(x.diefthinsi);
	free(x.arithmos);
	free(x.nomos);
}

void copy_record(RECORD *dest, RECORD src)
{
	strcpy(dest->onoma,src.onoma);
	strcpy(dest->diefthinsi,src.diefthinsi);
	strcpy(dest->arithmos,src.arithmos);
	strcpy(dest->nomos,src.nomos);
}
