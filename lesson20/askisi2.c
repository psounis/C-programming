/* askisi2.c */
#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *fFrom;
	FILE *fTo;
	char filename[80];
	char new_filename[80];
	char c;
	
	printf("Dwse to arxeio pou thes na antigrapseis: ");
	scanf("%s", filename);
	
	fFrom = fopen(filename, "r");
	if (!fFrom) 
	{
		printf("To arxeio pigis den uparxei!");
		exit(0);	
	}
	
	printf("Dwse to neo arxeio: ");
	scanf("%s", new_filename);
	
	fTo = fopen(new_filename, "r");
	if (fTo) 
	{
		printf("To arxeio proorismou uparxei!");
		exit(0);	
	}
	fclose(fTo);
	
	fTo = fopen(new_filename, "w");
	if (!fTo) 
	{
		printf("Error opening file!");
		exit(0);	
	}
	
	while(1)
	{
		c=fgetc(fFrom);
		
		if (feof(fFrom))
			break; 
		
		fputc(c,fTo);
	}
	
	fclose(fFrom);
	fclose(fTo);
}
