/* askisi1.2.c */
#include <stdio.h>
#include <stdlib.h>

main()
{
	
	FILE *fp;
	
	fp=fopen("temp.txt","w");
	if (!fp) exit(0);
	fprintf(fp, "0123456789");
	fclose(fp);
	
	fp=fopen("temp.txt","r+");
	printf("POS=%ld\n", ftell(fp));

	while(!feof(fp))
		printf("%c",fgetc(fp));

	printf("\nPOS=%ld\n", ftell(fp));
	
	rewind(fp);
	
	fprintf(fp, "XXXX");

	rewind(fp);
	while(!feof(fp))
		printf("%c",fgetc(fp));
		
	fclose(fp);
}
