#include <stdio.h>

int main()
{
	int n,arr[100],i,bil;
	scanf("%d",&n);
	
	while(n>=2){
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(i=0;i<n;i++){
			if(bil=arr[0]<arr[i]){
			bil=arr[i];
		}
		}
		printf("%d\n",bil);
	}
	return 0;
}

