/* getchar.c: Epideiksi tis entolis getchar */

#include <stdio.h>

main()
{
   char c;

   c=getchar();
   while(c!='x')
   {
      printf("%c,",c);
      c=getchar();
   }
   printf("%c.",c);
}

