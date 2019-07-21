#include <stdio.h>
#include <stdlib.h>

#define N 3

#define SIZE 80

struct person{
	char *onoma;
	char *diefthinsi;
	char *arithmos;
	char *nomos;
};

typedef struct person RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);
void init_record(RECORD *p);
void free_record(RECORD x);

main()
{
	RECORD pinakas[N];
	int i;
	
	/* Arxikopoiisi twn stigmiotypwn */
	for (i=0; i<N; i++)
		init_record(&pinakas[i]);

	/* Diavasma twn dedomenwn twn stigmiotypwn */
	for (i=0; i<N; i++)
	{
		printf("%do atomo: \n",i+1);
		read_record(&pinakas[i]);		
	}
	
	/* Ektypwsi twn stigmiotypwn */
	for (i=0; i<N; i++)
		print_record(pinakas[i]);

	/* Apeleftherosi tis mnimis */
	for (i=0; i<N; i++)
	{
		free_record(pinakas[i]);
	}	
}

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
