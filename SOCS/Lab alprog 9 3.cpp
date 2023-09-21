#include <stdio.h>;
int main ()
{
	int a;
	scanf("%d", &a);
	int arr[a],temp;
	int i,j;
	for(i=0;i<a;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<a;i++){
	for(j=i+1;j<a;j++){
		if(arr[i]>arr[j]){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
				
	}
	}
	for(i=0;i<a;i++){
		if(arr[i]==arr[i+1]){
 			arr[i+1]=arr[0]-1;
 		} 	
		}
		printf("%d", arr[0]);
	for(i=0;i<a;i++){
		if(arr[i]>arr[0]){
			printf(" %d", arr[i]);

		}
	}
	
}
