#include <stdio.h>
int main()
{
	int angka , A;
	scanf("%d", &angka);
	A = angka%2;
	if(A == 0){
		printf("%d adalah genap", angka);
	}else{
		printf("%d adalah ganjil", angka);
	}
	
	
	return 0;
}
