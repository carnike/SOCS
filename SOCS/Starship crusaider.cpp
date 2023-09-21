#include <stdio.h>
int main()
{
	int a,b,c,num = 1;
	scanf("%d", &a);
	
	int i,j,k,l;
	int sum=0;
	int arr1[b];
	int arr2[b];
	for(i=0;i<a;i++){
		scanf("%d",&b);
		
		for(j=0;j<b;j++){
			scanf("%d", &arr1[j]);
		
		}
		for(k=0;k<b;k++){
			scanf("%d", &arr2[k]);
		}
		
		for(l=0;l<b;l++){
			if(arr1[l] < arr2[l]){
				sum = sum + 1;
			}
		}
		printf("Case #%d:", num);
		num++;
		printf("%d", sum);
		printf("\n")
	}
	
	
}
