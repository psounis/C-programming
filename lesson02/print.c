/* print.c: Programma gia ektiposi grammwn */
#include <stdio.h>

int x;

void grammi();

main()
{
   // Ektyposeis...
   grammi();
   printf("\nSe posa mathimata thelete na mathete tin C? ");
   scanf("%d", &x);
   grammi();
   
   printf("\nTha apaitithoun 20 mathimata!");
   grammi();
   printf("\nApantisate %d",x);
   grammi(); 
}

/* H synartisi ektiponei mia grammi */
void grammi()
{
   printf("\n===============================");
}

