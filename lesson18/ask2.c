#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10
#define SIZE 100

void swap(char **a, char **b);

main()
{
	char s[SIZE];
	char *pin[N];
	char *ptr;
	int i,j,n;
	
	/* Arxikopoiisi */
	
	printf("Dwse frasi: ");
	gets(s);
	
	ptr=s; 
	ptr=strtok(ptr," ");
	i=0; 
	while(ptr!=NULL)
	{
		pin[i]=(char *)malloc(SIZE*sizeof(char));
		if (pin[i]==NULL)
		{
			printf("Error allocating memory!");
			exit(0);
		}
		strcpy(pin[i],ptr);
		
		ptr=strtok(NULL, " ");
		i++;
	}
	n=i;

	/* Taksinomisi */
	for (i=0; i<n; i++)
	{
	   for (j=n-1; j>=i+1; j--)
	   {
	      if (strcmp(pin[j],pin[j-1])<0)
	         swap(&pin[j], &pin[j-1]);
	   }
	}
	
	/* Ektypwsi */ 
	for (i=0; i<n; i++)
		printf("%s\n",pin[i]);
		
	/* Apodesmeusi */
	for (i=0; i<n; i++)
		free(pin[i]);	
}

void swap(char **a, char **b)
{
	char *temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}


