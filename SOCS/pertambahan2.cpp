#include <stdio.h>
int  main()
{
	int a,b,c,d,e,f,h,i,j;
	char g;
	scanf("%d %c %d %c", &a, &g, &b, &g);
	scanf("%d %c %d %c", &c, &g, &d, &g);
	scanf("%d %c %d %c", &e, &g, &f, &g);
	
	h=a+b;
	printf("%d\n", h);
	i=c+d;
	printf("%d\n", i);
	j=e+f;
	printf("%d\n", j);
	return 0;
}
