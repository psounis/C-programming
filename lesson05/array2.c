/* array.c: Aplo programma me pinaka */
#include <stdio.h>

#define SIZE 4

int main()
{
   int pin[SIZE];
   int sum;
   
   pin[0]=1; 
   pin[1]=3;
   pin[2]=4;
   pin[3]=5;
   
   pin[5]=39;
   
   sum=pin[0]+pin[1]+pin[2]+pin[3];
   printf("\n%d+%d+%d+%d=%d",pin[0],pin[1],pin[2],pin[3],sum); 
}

