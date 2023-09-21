#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d;
	scanf("%lf %lf", &a, &b);
	
	c=1 + (b/100);
	d=a*pow(c,3);
	printf("%.2lf\n",d);

	
	return 0;
}
