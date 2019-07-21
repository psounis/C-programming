/* static.c: Deixnei tin xrisi twn statikwn metavlitwn */
#include <stdio.h>

void func();

main()
{
      int i;
      
      for (i=0; i<10; i++)
         func();
}

void func()
{
    int y=0;
    static int x=0; 
    
    x=x+1;
    y=y+1;
    printf("\nx=%d, y=%d", x,y);

}

