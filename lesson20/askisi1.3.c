/* askisi1.3.c */
#include <stdio.h>
#include <stdlib.h>

main()
{
	
	FILE *fp;
	
	fp=fopen("temp.txt","w");
	if (!fp) exit(0);
	fprintf(fp, "0123456789");
	fclose(fp);
	
	fp=fopen("temp.txt","w+");
	printf("POS=%ld\n", ftell(fp));

	fprintf(fp,"0123");
	
	rewind(fp);
	
	while(!feof(fp))
		printf("%c", fgetc(fp));

	fclose(fp);
}
