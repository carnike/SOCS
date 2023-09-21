#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i;
	for(i=1;i<=a;i++){
		int b ,c;
		scanf("%d %d", &b, &c);
		int j,k;
		int sum = 0;
		int arr[b];
		for(j=0;j<b;j++){
			scanf("%d", &arr[j]);
		}
		for(j=0;j<b-1;j++){
			for(k=j+1;k<b;k++){
				if(arr[j] > arr[k]){
					int temp = arr[j];
					arr[j]=arr[k];
					arr[k]=temp;
					sum+=c;
				}
			}
		}
		printf("Case #%d: ", i);
		printf("%d\n", sum);
		sum = 0;
	}	
	
	
	
}
