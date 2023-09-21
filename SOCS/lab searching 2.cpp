#include <stdio.h>
void sort(int arr[], int a){
	int i,j;
	int temp;
	
	for(i=0;i<a;i++){
	for(j=i+1;j<a;j++){
		if(arr[i]>arr[j]){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
				
	}
	}
	}

int binarysearch (int arr[],int l, int r, int b){
	int mid;
	while(l <= r){
	mid = (l+r) / 2;
	if(arr[mid] > b){
		r = mid -1;
	}
	else if (arr[mid] < b){
		l = mid + 1;
	}
	else{
		return mid;
	}

	}
		return -1;
}
int intersearch(int arr[], int l,int r,int b){
	int mid;
	while(b > arr[l] && arr[r] > b){
		mid = l + (r - l ) * (b - arr[l] )/ (arr[r] - arr[l]);
		if(arr[mid] > b){
		r = mid -1;
	}
	else if (arr[mid] < b){
		l = mid + 1;
	}
	else{
		return mid;
	}
		
	}
	if( b == arr[l]){
		return l;
	}
	if(b == arr[r]){
		return r;
	}
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
	
	sort(arr,n);
	int index = -1;
	index = binarysearch(arr,0,n,c);
	if(index != -1){
		printf("angka %d ditemukan (binary)\n", c);
	}
	else{
		printf("angka %d tidak ditemukan (binary)\n", c);
	}
	int index2 = -1;
	index2 = intersearch(arr,0,n,c);
	if(index2 != -1){
		printf("angka %d ditemukan (inter)\n", c);
	}
	else{
		printf("angka %d tidak ditemukan (inter)\n", c);
	}
}
