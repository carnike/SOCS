#include <stdio.h>
int main()
{
	FILE *fp = fopen("testdata.in", "r");
	int a,i,j;
	fscanf(fp, "%d\n", &a);
	printf("%d", a);
}
