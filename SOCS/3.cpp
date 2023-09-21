#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int arr[a];
	float sum = 0;
	
	int i;
	for(i=1;i<=a;i++){
		scanf("%d", &arr[i]);
		sum += arr[i] ;
		
	}
	sum/=a;
	printf("%.2f",sum);
}
