#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RECS 10000

struct point {
	unsigned int visibility : 1;
	unsigned int color : 6;
	int x; 
	int y; 
};

main()
{
	FILE *fp; 
	int recs=RECS;
	struct point p;
	int i;  
	
	fp = fopen("test.txt","wb+");
	if (!fp)
	{
		printf("Error opening file");
		exit(0);
	}
	
	fwrite(&recs,sizeof(int),1,fp);
	
	srand(time(0));
	for (i=0; i<RECS; i++)
	{
		p.visibility = rand()%2;
		p.color = rand()%64;
		p.x = rand()%10000;
		p.y = rand()%10000; 
		fwrite(&p,sizeof(struct point),1,fp);
	}
	
	rewind(fp);

	fread(&recs,sizeof(int),1,fp);
	printf("Eggrafes=%d", recs);
	getchar(); 

	for (i=0; i<RECS; i++)
	{
		fread(&p,sizeof(struct point),1,fp);
		printf("\nEggrafi %d: %d %d %d %d", i, p.visibility, p.color, p.x, p.y);
		
		if (i%100==0)
			getchar(); 
	}	
	
	fclose(fp);
}
