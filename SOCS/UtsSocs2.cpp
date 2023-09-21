#include <stdio.h>
int main()
{
	int a,num = 0;
	float total;
	float sum=0;
	do
	{
		scanf("%d", &a);
		sum+=a;
		num++;
		
	}while(a!=0);	
	if(sum == 0 && num == 1){
		printf("Error\n");
	}
	else{
		total = sum / (num-1);
		printf("%.1f\n", total);

	}
	
	
}
