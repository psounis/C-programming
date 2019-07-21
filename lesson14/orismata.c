/* local.c: Deixnei tin antimetwpisi sigkrousis onomatwn metavlitwn */
#include <stdio.h>

int x; /* Katholiki Metavliti */
void func();

main()
{
      x=1;
      func(4);

}

void func(int x)
{
     printf("\nLocal: x=%d",x);
}

