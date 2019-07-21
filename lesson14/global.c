/* global.c: Deixnei tin xrisi twn katholikwn metavlitwn */
#include <stdio.h>

int x; /* Katholiki metavliti */
void func();

main()
{
      x=5;
      printf("\nMain: x=%d",x);
      func();
      printf("\nMain: x=%d",x);            
}

void func()
{
     printf("\nFunc: x=%d",x);
     x=8;
     printf("\nFunc: x=%d",x);
}

