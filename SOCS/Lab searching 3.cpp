#include <stdio.h>
#include <string.h>
void sort(char arr[][55], int a){
	int i,j;
	char temp[55];
	
	for(i=0;i<a;i++){
	for(j=i+1;j<a;j++){
		if(strcmp(arr[j], arr[j+1])){
			strcpy(temp , arr[j]);
			strcpy(arr[j] , arr[j+1]);
			strcpy(arr[j+1], temp);
		}
				
	}
	}
	}

int linearsearch(char a[][55], int size, char x[]){
	int j;
	for(j=0;j<size;j++){
		if(strcmp(x,a[j]) == 0){
		return j;
		break;	
		}
		
	}
	return -1;
}
int binarysearch (char arr[][55],int l, int r, char b[]){
	int mid;
	while(l <= r){
	mid = (l+r) / 2;
	if(strcmp(arr[mid],b) > 0){
		r = mid -1;
	}
	else if (strcmp(arr[mid],b) < 0){
		l = mid + 1;
	}
	else{
		return mid;
	}

	}
		return -1;
}
int main(){
	int n;
	int i;
	scanf("%d", &n);
	char arr[n][55];
	for(i=0;i<n;i++){
		scanf("%s", arr[i]);
	}
	char c[55];
	scanf("%s", c);
	sort(arr,n);
	int index = -1;
	index = linearsearch(arr,n,c);
	if(index != -1){
		printf("nama %s ditemukan (linear)\n", c);
	}
	else{
		printf("nama %s tidak ditemukan (linear)\n", c);
	}
	int index2 = -1;
	index2 = binarysearch(arr,0,n,c);
	if(index2 != -1){
		printf("nama %s ditemukan (binary)\n", c);
	}
	else{
		printf("nama %s tidak ditemukan (binary)\n", c);
	}
	
	
	
}
