/* getch.c: Epideiksi tis entolis getch */
#include <stdio.h>
#include <conio.h>

main()
{
   char c;

   c=getche();
   while(c!='x')
   {
      printf("%c,",c);
      c=getche();
   }
   printf("%c.",c);
}

