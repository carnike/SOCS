#include <stdio.h>
int main(){
	int i, num, sum;
	printf("masukan angka = ");
	scanf("%d", &num);
	
	sum = 1;
	for(i = 1; i<=num; i++){
		sum *= i;
	}	
	printf("hasil factorialnya adalah %d", sum);
	return 0;
}
