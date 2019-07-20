/* array.c: Aplo programma me pinaka */
#include <stdio.h>

int main()
{
   int pin[3];
   int sum;
   
   pin[0]=1; 
   pin[1]=3;
   pin[2]=4;
   sum=pin[0]+pin[1]+pin[2];
   printf("\n%d+%d+%d=%d",pin[0],pin[1],pin[2],sum); 
}

