/* variables.c: Deixnei ton diaxorismo 
   katholikwn-topikwn metablitwn*/

#include <stdio.h>

void f1();
void f2();

int x; /* Katholiki metavliti: Tin vlepoun 
	  oloi */

main()
{
   int a=0; /*Topiki metabliti stin main */
   
   x=5;
   printf("\nmain: a=%d,x=%d",a,x);
   f1();
   printf("\nmain: a=%d,x=%d",a,x);
   f2();
   printf("\nmain: a=%d,x=%d",a,x);
}

void f1()
{
   int a=2, x=0; /*Topikes metavlites 
                   tis f1 */
   /* Exoyme diplo onoma stin x. 
      Epikratei to topiko onoma */

   printf("\nf1: a=%d,x=%d",a,x);
}

void f2()
{
   int a=8; /*Topikes metavlites tis 
              f2 */
   x=7; /* Anaferetai stin katholiki 
           x */

   printf("\nf2: a=%d,x=%d",a,x);
} 
 
      

