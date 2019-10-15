/* feof.c */
#include <stdio.h>
#include <stdlib.h>

main() {
   FILE *fp;
   char c;
	
   fp = fopen("test.txt","r");
   if (fp==NULL) {
      printf("Lathos sto anoigma tou arxeiou");
      exit(0);
   }

   while (!feof(fp))
   {
      c=fgetc(fp);
      printf("%c", c); 
   }

	
   fclose(fp);
}

