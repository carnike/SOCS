#include <stdio.h>
int main ()
{
	int a;
	scanf("%d", &a);
	
	int i,j;
	int arr[a][a];
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			scanf("%d", &arr[i][j]);
		}
	
	}
		printf("\n");
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	
	
}
