#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int arr[a][a];
	int c,d;
	for(int c = 0; c < a; c++){
		for( int d = 0; d < a; d++){
			scanf("%d", &arr[c][d]);
		}
		printf("\n");
		
	}
}
