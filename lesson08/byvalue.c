/*byvalue.c: Perasma orismatwn mesw timis */
#include <stdio.h>

void swap(int a,int b);

main()
{
  int a=5,b=10;
  printf("\nMain: a=%d,b=%d",a,b);
  swap(a,b);
  printf("\nMain: a=%d,b=%d",a,b);
}

void swap(int a, int b)
{
  int k;
  k=a;
  a=b;
  b=k;
  printf("\nSwap: a=%d,b=%d",a,b);
}

