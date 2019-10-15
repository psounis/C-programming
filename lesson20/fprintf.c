/* fprintf.cpp Grapsimo se arxeio */
#include <stdio.h>
#include <stdlib.h>

main() {
   FILE *fp;
   int x=1;
	
   /* Anoigma arxeiou */
   fp = fopen("test.txt","w");
   if (fp==NULL) {
      printf("Lathos sto anoigma tou arxeiou");
      exit(0);
   }

   /* Grapsimo se arxeio */	
   fprintf(fp, "Mia grammi\n");
   fprintf(fp, "kai kapoioi arithmoi: %d %d %d", x, x*5, x/2);
	
   /* Kleisimo arxeiou */
   fclose(fp);
}

