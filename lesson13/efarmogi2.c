#include <stdio.h>

#define SIZE 80

struct person{
	char onoma[SIZE];
	char diefthinsi[SIZE];
	char arithmos[SIZE];
	char nomos[SIZE];
};

typedef struct person RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);

main()
{
	RECORD a,b;
	
	printf("1o atomo: \n");
	read_record(&a);
	printf("2o atomo: \n");
	read_record(&b);	

	print_record(a);
	print_record(b);
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
