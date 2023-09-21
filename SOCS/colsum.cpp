#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i;
	for(i=1;i<=a;i++){
	int b;
	scanf("%d", &b);
	int arr[b][b];
	int c,d;
	for(int c = 0; c < b; c++){
		for( int d = 0; d < b; d++){
			scanf("%d", &arr[c][d]);
		}	
	}
	printf("Case #%d: ", i);
	
}
}
