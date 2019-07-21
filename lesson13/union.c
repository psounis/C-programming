/* union.c: Deixnei pos xrisimopoiw mia enosi */

#include <stdio.h>

union shared{
      char c;
      int i;
      double d;
};      

main()
{
      union shared s;
      
      s.c='a';
      printf("\nXaraktiras: %c", s.c);
      printf("\nAkeraios  : %d", s.i);
      printf("\nDouble    : %f", s.d);

      s.d=10.55;      
      printf("\nXaraktiras: %c", s.c);
      printf("\nAkeraios  : %d", s.i);
      printf("\nDouble    : %f", s.d);
}

