#include <stdio.h>
int search(int a[], int size, int x){
	int j;
	for(j=0;j<size;j++){
		if(x == a[j]){
		return j;
		break;	
		}
		
	}
	return -1;
}
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	int c;
	scanf("%d", &c);
	int index = -1;
	index = search(arr,n,c);
	if(index != -1){
		printf("angka %d ditemukan", c);
	}
	else{
		printf("angka %d tidak ditemukan", c);
	}
		
}
