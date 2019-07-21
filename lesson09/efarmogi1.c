#include <stdio.h>

void print();
void eisagogi_pinaka();

main()
{
	int choice;
	int number;
	float fNum;
	
	
	do{
		printf("Dwse enan arithmo apo 1 ews to 4: ");
		scanf("%d",&choice);
	} while (choice<1 || choice>4);
	
	if (choice==1)
	{
		printf("Dwse enan akeraio arithmo: ");
		scanf("%d",&number);
		printf("\nTo tetragwno tou einai: %d",number*number);
	}
	else if (choice==2)
	{
		print();
	}
	else if (choice==3)
	{
		printf("Dwse enan pragmatiko arithmo:");
		scanf("%f",&fNum);
		printf("To 1/4 tou arithmou pou evales einai: %.4f",fNum);
	}
	else if (choice==4)
	{
		eisagogi_pinaka();
	}

	
}

void print()
{
	int i,N;
	
	printf("Dwse to N: ");
	scanf("%d",&N);
	
	for (i=0; i<N; i++)
		printf("\nKalimera!");
}

void eisagogi_pinaka()
{
	double pinakas[5];
	int i;
	double sum, mo;
	
	
	for (i=0; i<5; i++)
	{
		printf("Dwse ton %d-o pragmatiko arithmo: ", i+1);
		scanf("%lf",&pinakas[i]);
	}
	
	sum=0.0;
	for (i=0; i<5; i++)
		sum+=pinakas[i];
	mo=sum/5;
	
	printf("O mesos oros einai: %.3f",mo);	
	
	
	
	
}

