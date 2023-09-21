#include <stdio.h>
int tambah(int a, int b)
{
	int sum =  a +  b;
	return sum;
}
int main()
{
	int a,b,hasil;
	scanf("%d %d", &a, &b);
	hasil=tambah(a,b);
	printf("%d", hasil);
}
