/* fgetc.c Diavasma kai ektipwsi enos arxeiou keimenoy */
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

   while ((c=fgetc(fp))!=EOF)
      printf("%c", c);
	
   fclose(fp);
}

