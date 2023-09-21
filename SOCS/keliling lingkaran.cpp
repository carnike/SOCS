#include <stdio.h>
int main()
{
	float r = 0;
	float keliling = 0;
	const float phi = 3.14;
	printf("masukan jari jari ");
	scanf("%f", &r);
	keliling=2*phi*r;
	printf("keliling lingkaran adalah %f", keliling);
	return 0;
}
