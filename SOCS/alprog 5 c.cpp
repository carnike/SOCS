#include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d %d", &a, &b);
	
	int i,j;
	int arr[a];
	for(i=0;i<a;i++){
		scanf("%d", &arr[i]);
	}
	while(b>0)
	{
		int temp = arr[a-1];
		for(i=a; i>=0;i--)
		{
			arr[i]=arr[i-1];
	
		}
		arr[0]=temp;
		b--;
	}
	for(i = 0;i<a; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
	
 } 
