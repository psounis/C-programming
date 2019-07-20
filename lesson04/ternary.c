/* ternary.c:Eksereuna ton telesti ?: */
#include <stdio.h>

main()
{
   int x,y,z;   
  
   /* Kai i if epistrefei mia timi */
   x=0; y=1;
   if(x<y) z=0; 
   else z=1;
   printf("%d",z);
   
   /* Isodynamos tropos me ton telesi ?: */
   x=1; y=0;
   z = x<y ? 0 : 1;
   printf("%d",z);

   /* kai mporoyme na to xrisimopoiisoyme ws orisma. */
   printf("%d",x<y?0:1);
   
} 

