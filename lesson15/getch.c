/* getch.c: Epideiksi tis entolis getch */
#include <stdio.h>
#include <conio.h>

main()
{
   char c;

   c=getch();
   while(c!='x')
   {
      printf("%c,",c);
      c=getch();
   }
   printf("%c.",c);
}

