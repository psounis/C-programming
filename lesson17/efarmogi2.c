#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lexarithmos(char *s);
void baba(int sum);

main(int argc, char *argv[])
{
	int lexo,lexp,age,height,sum;
	
	lexo=lexarithmos(argv[1]);
	lexp=lexarithmos(argv[2]);
	
	age=10*atoi(argv[3]);
	
	height=(int)100*atof(argv[4]);
	
	sum=lexo+lexp+age+height;
	
	if (sum<=1000)
		baba(sum);
	else
	{
		baba(sum);
		srand(time(NULL));
		baba(rand()%1000+1);
	}
	
}

nt lexarithmos(char *s)

int sum,i;

i=0;
	sum=0;
	while (s[i]!='\0')
	{
		sum+=s[i]-'a'+1;
		
		i++;
	}
	
	return sum;
}

void baba(int sum)
{
	if (sum>=0 && sum<=300)
		printf("H baba leei: Seismos kai katapontismos!");
	else if (sum>=301 && sum<=600)
		printf("H baba leei: Limos kai Polemos!");
	else if (sum>=601 && sum<=1000)
		printf("H baba leei: Arrwstia kai Kasida!");
	else if (sum>1000)
		printf("Dwse alla 100 euro!!");
}
