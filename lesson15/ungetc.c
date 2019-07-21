/* ungetc.c: Epideiksi tis entolis ungetc */
#include <stdio.h>

main()
{
   char c;
   c=getchar();
   while(c!='\n')
   {
      printf("%c",c);
      c=getchar();
      if (c=='m')
      {
         printf("%c",c);
         ungetc('!',stdin);
      }
   }
}

