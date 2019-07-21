/* local.c: Deixnei tin antimetwpisi sigkrousis onomatwn metavlitwn */
#include <stdio.h>

int x; /* Katholiki Metavliti */
void func();

main()
{
      x=1;
      func();

}

void func()
{
     int x=5; /* Topiki Metavliti */
     printf("\nLocal: x=%d",x);
}

