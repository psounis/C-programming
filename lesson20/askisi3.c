#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define SIZE 80

struct record
{
	char name[SIZE];
	char surname[SIZE];
	int age;
	int grade;
};


int open(char *filename, FILE **fp, int *num);
int close(FILE **fp);
int add(FILE *fp);
int read(FILE *fp, int num, int rec, struct record *eggrafi);
int print(struct record temp);
void print_all(FILE *fp, int num);
int modify(FILE *fp, int num, int rec);

main()
{
	FILE *fp;
	int N; 
	int choice, check, rec;
	char filename[]="data.dat";
	struct record temp; 
	
	while(1)
	{
		printf("\n\nMENU");
		printf("\n============");
		printf("\n1-Anoigma");
		printf("\n2-Kleisimo");
		printf("\n3-Prosthiki Eggrafis");
		printf("\n4-Diavasma Eggrafis");
		printf("\n5-Ektypwsi olwn twn eggrafwn");
		printf("\n6-Tropopoiisi Eggrafis");
		printf("\n7-Eksodos");
		printf("\n============");
		printf("\nEpilogi? ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				check=open(filename, &fp, &N);
				if (check==TRUE)
					printf("To arxeio anoikse!");
				else
				{
					printf("Error!");
					exit(0);
				}
				break;
			case 2:
				check=close(&fp);
				if (check==TRUE)
					printf("To arxeio ekleise!");
				else
				{
					printf("Error!");
					exit(0);
				}
				break; 
			case 3: 
				check=add(fp);
				if (check==TRUE)
				{
					printf("H eggrafi prostethike!");
					N++;
				}
				else
				{
					printf("Error!");
					exit(0);
				}
				break; 
			case 4:
				printf("Poia eggrafi thes? ");
				scanf("%d", &rec);
				check=read(fp, N, rec, &temp);
				if (check==FALSE)
				{
					printf("Error at index!");
					continue;
				}
				printf("H eggrafi %d einai:", rec);
				print(temp);
				break; 
			case 5:
				print_all(fp, N);
				break;
			case 6:
				printf("Poia eggrafi thes? ");
				scanf("%d", &rec);
				check=modify(fp, N, rec);
				if (check==FALSE)
				{
					printf("Error at index!");
					continue;
				}
				break; 				
			case 7:
				printf("Bye bye!");
				exit(0);
			default:
				printf("Lathos epilogi!");
		}
	}
}

int open(char *filename, FILE **fp, int *num)
{
	struct record temp; 
	
	(*fp)=fopen(filename, "rb");
	if ((*fp)==NULL) // to arxeio den yparxei
	{
		(*fp)=fopen(filename, "wb+");	
		if ((*fp)==NULL)
		{
			printf("Error Opening file!");
			return FALSE;
		}
		*num=0; 
		return TRUE; 
	}
	else // To arxeio iparxei
	{
		fclose(*fp);
		(*fp)=fopen(filename, "rb+");
		if ((*fp)==NULL)
		{
			printf("Error Opening file!");
			return FALSE;
		}
		
		(*num)=0; 
		while(fread(&temp,sizeof(struct record),1,(*fp))==1)
			(*num)++; 

		return TRUE;
	}
}

int close(FILE **fp)
{
	if (fclose(*fp)==0)
		return TRUE;
	else 
		return FALSE; 
}

int add(FILE *fp)
{
	struct record temp; 
	
	printf("Dwse onoma: ");
	scanf("%s", temp.name);
	printf("Dwse epwnimo: ");
	scanf("%s", temp.surname);
	printf("Dwse ilikia: ");
	scanf("%d", &temp.age);
	printf("Dwse vathmo: ");
	scanf("%d", &temp.grade);
	
	fseek(fp,0,SEEK_END);
	if (fwrite(&temp, sizeof(struct record), 1, fp)==1)
		return TRUE;
	else
		return FALSE; 
}

int read(FILE *fp, int num, int rec, struct record *eggrafi)
{
	if (rec>=0 && rec<=num-1)
	{
		fseek(fp,rec*sizeof(struct record),SEEK_SET);
		if (fread(eggrafi,sizeof(struct record),1,fp)==1)
			return TRUE;
		else 
			return FALSE; 
	}
	else 
		return FALSE; 
}

int print(struct record temp)
{
	printf("\nOnoma  : %s", temp.name);
	printf("\nEpwnimo: %s", temp.surname);
	printf("\nIlikia : %d", temp.age);
	printf("\nVathmos: %d\n\n", temp.grade);
}

void print_all(FILE *fp, int num)
{
	int i; 
	struct record temp; 
	
	for (i=0; i<num; i++)
	{
		read(fp,num,i,&temp);
		printf("\nEggrafi %d", i);
		printf("\n----------");
		print(temp);
	}
}

int modify(FILE *fp, int num, int rec)
{
	struct record temp;
	if (rec>=0 && rec<=num-1)
	{
		fseek(fp, rec*sizeof(struct record), SEEK_SET);
		fread(&temp, sizeof(struct record), 1, fp);
		
		printf("H arxiki eggrafi einai:\n");
		print(temp);
	
		printf("Dwse onoma: ");
		scanf("%s", temp.name);
		printf("Dwse epwnimo: ");
		scanf("%s", temp.surname);
		printf("Dwse ilikia: ");
		scanf("%d", &temp.age);
		printf("Dwse vathmo: ");
		scanf("%d", &temp.grade);
		
		printf("H nea eggrafi einai:\n");
		print(temp);
		
		fseek(fp, rec*sizeof(struct record), SEEK_SET);
		fwrite(&temp, sizeof(struct record), 1, fp);
		
		return TRUE; 
	}
	else 
		return FALSE; 
}
