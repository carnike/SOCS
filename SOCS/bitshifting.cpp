#include <stdio.h>

int main ()
{
	int a,b,c;
	scanf("%d", &c);
	
	int i;
	for(i = 0; i<c; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n",((a/b)<<b));
	}

	return 0;
}
