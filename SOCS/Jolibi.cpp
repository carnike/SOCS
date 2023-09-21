#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d", &a);
	scanf("%d %d %d",&b, &c, &d);	
	
	int i;
	int sum = 0;
	int arr[a];
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	 sum += arr[i];
		
	}
	int sum1 , sum2, total;
	sum1 = d+b+c;
	total =(sum1 + sum) /(3 + a);
	
	
	if(b >= total){
		printf("Jojo lolos\n");
	}
	else {
		printf("Jojo tidak lolos\n");
	}
	
	 if(c >= total){
		printf("Lili lolos\n");
	}
	else {
		printf("Lili tidak lolos\n");
		}
	 
	 if(d >= total ){
		printf("Bibi lolos\n");
	}	
	else {
		printf("Bibi tidak lolos\n");
	}
	
	
}
