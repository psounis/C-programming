/* fscanf.cpp Diavasma apo arxeio */
#include <stdio.h>
#include <stdlib.h>
#define N 100

struct point {
   int x;
   int y;
};

main() {
   FILE *fp;
   int i;
   int n; /* plithos eggrafwn */
   struct point points[N]; /* eggrafes */
	
   /* Diavasma apo to arxeio */
   fp = fopen("points.txt","r");
   if (fp==NULL) {
      printf("Lathos sto anoigma tou arxeiou");
      exit(0);
   }

   fscanf(fp, "%d", &n);
   for (i=0; i<n; i++)
      fscanf(fp, "%d %d", &points[i].x, &points[i].y);
	
   fclose(fp);
   
   /* Ektipwsi stin othoni */
   for (i=0; i<n; i++)
      printf("%d %d\n", points[i].x, points[i].y);
   
   
}

