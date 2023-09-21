#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	
	int luas,keliling;
	luas = a*b;
	keliling = (2*a)+(2*b);
	printf("Keliling = %d\n", keliling );
	printf("luas = %d\n", luas );
}
