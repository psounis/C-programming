/* fread.c Diavasma dyadikoy arxeioy */ 
#include <stdio.h>
#include <stdlib.h>

#define N 10

struct point {
    int x; 
    int y;
};

main() {
   FILE *fp;
   char c;
   int i;
   struct point data[N];

   fp = fopen("binarydata.dat","rb");
   if (fp==NULL) {
      printf("Lathos sto anoigma tou arxeiou");
      exit(0);
   }
   
   /* Diavasma apo to arxeio */
   fread(data, sizeof(struct point), N, fp);
   
   /* Ektypwsi stin othoni */
   for (i=0; i<N; i++)
       printf("%d %d\n", data[i].x, data[i].y);

   fclose(fp);
}

