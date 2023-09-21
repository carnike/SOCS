#include <stdio.h>
int main()
{
	long a,b;
	long c = 0;
	scanf("%d %d", &a, &b);
	for (int i = a; i < b+1; i++){
		c+=i;
	}
	printf("%lld\n",c);
	
	return 0;
}
