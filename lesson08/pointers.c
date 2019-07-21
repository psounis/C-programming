/* pointers.c: Deixnei tin vasiki xrisi twn deiktwn */

#include <stdio.h>

main()
{
   int x;
   int *ptr;
   
   ptr=&x;

   x=5;
   printf("x=%d\t *ptr=%d\t &x=%d\t ptr=%d",x,*ptr,&x,ptr);
   *ptr=8;
   printf("\nx=%d\t *ptr=%d\t &x=%d\t ptr=%d",x,*ptr,&x,ptr);
   x=9;
   printf("\nx=%d\t *ptr=%d\t &x=%d\t ptr=%d",x,*ptr,&x,ptr);
}

