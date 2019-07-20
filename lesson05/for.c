#include <stdio.h>

main()
{
	int i,x,PRO;
	
	/* Paradeigma1 */
	for (i=1; i<=5; i++)
		printf("\nKalimera");
		
	/* Paradeigma2 */
	
	for (i=1; i<=10; i++)
		printf("\n%d",i);
		
	/* Paradeigma3 */
	
	
	printf("\n\n");
	
	PRO=16;
	for (i=1; i<=10; i++)
	{
		x=i*PRO;
		printf("\n%d*%d=%d",i,PRO,x);
	}
	
	/* Paradeigma4 */
	
	
	printf("\n\n");
	
	PRO=7;
	for (i=10; i>=1; i--)
	{
		x=i*PRO;
		printf("\n%d*%d=%d",i,PRO,x);
	}
		
}
