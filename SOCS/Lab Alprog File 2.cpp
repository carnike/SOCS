#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	FILE *ptr;
	ptr=fopen("data.text", "w");
	fprintf(ptr,"%d/%d/%d",a,b,c);
	fclose(ptr);

}
