/* random.c: Typwnei 10 tyxaioys akeraioys sto diastima 0..99 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
   int x,i;

   srand(time(NULL));
   
   for (i=0; i<10; i++)
   {
       x=rand()%100;
       printf("\n%d",x);
   }
}

