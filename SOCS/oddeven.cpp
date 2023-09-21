#include <stdio.h>
int main()
{
	int angka , A;
	scanf("%d", &angka);
	A = angka%2;
	if(angka == 0){
		printf("even");
	}else{
		printf("odd");
	}
	
	
	return 0;
}
