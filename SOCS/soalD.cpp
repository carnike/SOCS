#include <stdio.h>
int main ()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("(%d+%d)*(%d-%d)\n", a, b, b, c);
	scanf("%d %d %d %d", &e, &f, &g, &h);
	printf("(%d+%d)*(%d-%d)\n", e, f, g, h);
	scanf("%d %d %d %d", &i, &j, &k, &l);
	printf("(%d+%d)*(%d-%d)\n", i, j, k, l);
	m=(a+b)*(c-d);
	n=(e+f)*(g-h);
	o=(i+j)*(k-l);
	printf("%d %d %d", m, n, o);
	
	return 0;
}
