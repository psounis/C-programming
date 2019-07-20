/* Multiply.c: Programma gia ton ipologismo tou ginomenou dio arithmwn */
#include <stdio.h>

int a,b,c;

int ginomeno(int x, int y);

main()
{
   /* Eisodos toy 1ou arithmou */
   printf("Eisagete arithmo metaksi 1 kai 100:");
    scanf("%d", &a);
   
   /* Eisodos tou 2ou arithmou */
   printf("Eisagete allon ena arithmo metaksi 1 kai 100:");
   scanf("%d", &b);
   
   c=ginomeno(a,b);
   printf("To ginomeno tou %d kai tou %d einai: %d\n",a,b,c);
   
}

/* H synartisi epistrefei to ginomeno twn dio orismatwn tis */
int ginomeno(int x, int y)
{
   return (x*y);
}
