#include <stdio.h>
#include <math.h>

struct point{
	float x;
	float y;
};

void read_point(struct point *p);
float eukleidia_apostasi(struct point A, struct point B);


main()
{
	struct point A, B;
	
	printf("1o simeio: \n");
	read_point(&A);
	printf("2o simeio: \n");
	read_point(&B);	
	
	printf("H eukleidia apostasi einai: %.3f",eukleidia_apostasi(A,B));
}

void read_point(struct point *p)
{
	printf("Dwse tin x sintetagmeni: ");
	scanf("%f",  &p->x);
	
	printf("Dwse tin y sintetagmeni: ");
	scanf("%f",  &p->y);
}

float eukleidia_apostasi(struct point A, struct point B)
{
	return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}
