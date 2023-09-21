#include <stdio.h>
#include <math.h>
int binarySearch(long long l, long long r, long long a){
	if (l <= r){
		long long mid = l + (r - l) / 2;
		long long key = mid * (mid + 1) * (2 * mid + 1) / 6;
		
		if (key == a){
			return mid;
		}
		if (key > a){
			return binarySearch(l, mid-1, a);
		}
		if (key < a){
			return binarySearch(mid+1, r, a);
		}
	}
	return r + 1;
}
int main(){

    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        long long search;
        scanf("%llu", &search);
		getchar();
        long long hasil = binarySearch(1, 1500000, search);
        printf("Case #%d: %llu\n", i+1, hasil);
    }
}
