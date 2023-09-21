#include <stdio.h>
	int sum =0;
	int fibo(int num){
	sum+=1;
	if((num ==0) || (num == 1)){
		return 1;
	}
	else {
		return fibo(num-1) + fibo (num -2);
	}
}
int main()
{
	int a;
	scanf("%d", &a);
	int i;
	for(i=1;i<=a;i++){
	int b;
	scanf("%d", &b);
	sum=0;
	fibo(b);
	printf("Case #%d: ", i);
	printf("%d\n", sum);	
	}
	
}
