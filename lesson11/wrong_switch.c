/* wrong_switch.c: Deixnei mia kaki xrisi tis switch xwris ta aparaitita break */
#include <stdio.h>
main()
{
    int x;

    scanf("%d",&x);
  
    switch(x)
    {
    case 1: 
         printf("\nEisagate 1");
    case 2: 
         printf("\nEisagate 2");
    case 3: 
         printf("\nEisagate 3");
    case 4: 
         printf("\nEisagate 4");
    default:
         printf("\nEisagate arithmo >=5");
    }
}

