/* fgets.c: Epideiksi tis entolis fgets */

#include <stdio.h>

#define N 10

main()
{
   char buffer[N];

   while(1)
   {
      fgets(buffer,N,stdin);
      printf("Eisodos: %s\n",buffer);
   }
}

