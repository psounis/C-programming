/* scanf.c: Epideiksi tis entolis scanf */

#include <stdio.h>

main()
{
   char buffer[80];
   
   printf("Eisagete simvoloseira: ");
   scanf("%[abcdef]",buffer);
   printf("Diavastike: %s\n",buffer);
   printf("Eisagete simvoloseira: ");
   scanf("%[^abcdef]",buffer);
   printf("Diavastike: %s",buffer);
   
}

