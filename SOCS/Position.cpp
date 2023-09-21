#include <stdio.h>

int binarysearch(long int arr[],long int l,long int r,long int a){
    long int mid;
    
    while (l<=r) {
    mid=(l+r)/2;
    if (a<arr[mid]){
    	r=mid-1;
	} 
    else if (a>arr[mid]){
    	l=mid+1;
	} 
    else{
        if(arr[mid-1]==a){
            r=mid-1;
            }
        else {
        	return mid;
		} 
    }
    }
    return -1;
}

int main(){

    long int a,b,i,idx=0;
    long int arr1[100001];
    long int arr2[100001];

    scanf("%ld %ld",&a,&b);

    for(i=0;i<a;i++){
        scanf("%ld",&arr1[i]);
    }

    for(i=0;i<b;i++){
        scanf("%ld",&arr2[i]);
    }

    for(i=0;i<b;i++){
        idx=binarysearch(arr1,0,a-1,arr2[i]);
        if(idx==-1){
            printf("%ld\n",idx);  
        }
        else printf("%ld\n",idx+1);
    }

    return 0;
}
