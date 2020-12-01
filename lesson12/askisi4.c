#include <stdio.h>
#include <stdlib.h>

#define N 10
#define SIZE 512 

#define TRUE 1
#define FALSE 0

int check_string(char *str);
int mystrlen(char *s);
char *mystrcpy(char *dest, char *src);


main()
{
	char *pinakas[N];
	char buffer[SIZE];
	int i, len; 
	
	for (i=0; i<N; i++)
	{
		printf("Dwse tin %d simboloseira: ", i);
		gets(buffer);
		
		if (!check_string(buffer))
		{
			printf("Lathos stin eisodo tis simboloseiras!");
			exit(0);
		}
		
		len=mystrlen(buffer);
		pinakas[i]=malloc(sizeof(char)*(len+1));
		if (!pinakas[i])
		{
			printf("Adynamia Desmeusis Mnimis");
			exit(0);
		}
		
		mystrcpy(pinakas[i], buffer);
	}
	
	printf("\n");
	for (i=0; i<N; i++)
		printf("\nSimvoloseira: %s", pinakas[i]);
		
	for (i=0; i<N; i++)
		free(pinakas[i]);
}

int check_string(char *str)
{
	int i;
	
	i=0;
	while(str[i]!='\0')
	{
		if (!(str[i]>='a' && str[i]<='z'))
		{
			return FALSE;
		}
		
		i++;
	}
	
	return TRUE;	
}

int mystrlen(char *s)
{
	int cnt=0;
	
	while(s[cnt]!='\0')
	{
		cnt++;
	}
	
	return cnt;
}

char *mystrcpy(char *dest, char *src)
{
	int i=0;
	
	while (1)
	{
		dest[i]=src[i];
		if (src[i]=='\0') 
			break;
		i++;
	}
	
	return dest;
}
