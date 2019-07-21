/* factorial.c: Ypologizei to paragontiko 
   enos fysikoy */

#include <stdio.h>

int factorial(int n);

main()
{
   int x;
   int res;
   
   printf("Dwste ton fysiko: ");
   scanf("%d",&x);
   
   res=factorial(x);

   printf("%d!=%d",x,res);
}

int factorial(int n)
{
  int y; 
  
  if (n==1)
    return 1;
  else 
  {
    y=factorial(n-1);
    return n*y;
  }
}

