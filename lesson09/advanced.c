/* advanced.c: Proxwrimeno paradeigma stin printf */
#include <stdio.h>

int main()
{
   printf ("Simplirwsi me kena: |%10d| \n", 1980);
   printf ("Simplirwsi me midenika: |%010d| \n", 1980);
   printf ("Morfes arithmou: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("Pragmatikoi: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Me to asteraki: %*d \n", 5, 10);
}
