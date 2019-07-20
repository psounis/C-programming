/* defensive.c: Amintikos Programmatismos gia to diavasma enos akeraioy */

#include <stdio.h>

main()
{
   int i;
   
   do {
      printf("Dwste enan akeraio apo 1 ews 100: ");
      scanf("%d",&i);
   } while (i<1 || i>100);
   
   printf("Eisagate arithmo mesa sta oria 1 ews 100: %d",i);
         
}

