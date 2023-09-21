#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d jam %d menit", &a, &b);
	
	int c,d;
	scanf("%d jam %d menit", &c, &d);
	
	int sum1,sum2,sum3;
	sum1=a+c;
	sum2=b+d;
	if(sum2 > 60){
		sum2 = sum2 - 60;
		sum1+1;
	}
	printf("%d jam %d menit", sum1,sum2);
}
