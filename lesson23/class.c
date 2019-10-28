/* class.c  */

#include <stdio.h>

typedef void (*pf) (int, int);

void print(int x, int y);

struct complex {
	int x;
	int y;
	pf print;	
};

main()
{
    struct complex a,b; 
    a.x=1;
    a.y=1;
    a.print=print;
    b.x=1;
    b.y=1; 
    b.print=print; 
  
  	a.print(a.x,a.y);
  	a.print(b.x,b.y);
}

void print(int x, int y)
{
	printf("(%d,%d)",x,y);
}

