#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	long long int a;
	scanf("%d", &a);
	char code[10];
	long long int arr[a],array[a],num;
	int i,j;
	for(i=0;i<a;i++){
		scanf("%s %lld", code, &num);
		if(strcmp(code, "+")){
			arr[i] = num;	
		}
		if(strcmp(code, "-")){
			arr[i] = -num;	
		}
		if(strcmp(code, "-") && num == 0){
			array[i] = -1;	
		}
		if(strcmp(code, "+") && num == 0){
			array[i] = 1;
	}
	}
	int sum = 0;
	
	for(j=0;j<a;j++){
		if(arr[j] > 0){
			sum += pow(2,arr[j]);
		
		}
		if(arr[j] < 0){
			sum -= pow(2,-arr[j]);
		}
		if(arr[j] == 0){
			sum+= array[j];
			
		}
		if(sum == 0){
			printf("YES\n");
		}
		else{
		printf("NO\n");
		}
	}
	printf("%d", sum);
}
