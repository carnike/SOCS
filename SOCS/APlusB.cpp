#include <stdio.h>
int main()
{
	FILE *fp = fopen("testdata.in", "r");
	int a,b;
	fscanf(fp, "%d %d\n", &a,&b);
	int sum;
	sum = a+b;
	printf("%d\n", sum);
	fclose(fp);
	
}
