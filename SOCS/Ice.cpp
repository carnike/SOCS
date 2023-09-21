#include <stdio.h>
int main ()
{
	FILE *fp = fopen("testdata.in", "r");
	int a,i,j;
	fscanf(fp, "%d\n", &a);
	int b,c;
	int sum = 0;
	int arr[100];
	int num;
	for(i=0;i<a;i++){
		fscanf(fp, "%d\n", &b);
		
		for(j=0;j<b;j++){
			fscanf(fp, "%d\n", &arr[j]);
			sum+=arr[j];	
		}
		c = sum * 4;
		sum *=8;
		for(j=0;j<b;j++){
			if(j!=b-1){
			if(arr[num] == 1){
			sum = sum - 4;	
					
			}
			else{
				if(arr[num] > arr[num+1]){
					sum = sum - ((arr[num]-1)*4 + arr[num+1]*4);
					
				}
				else{
					sum = sum - ((arr[num]-1)*4 + arr[num]*4);
					
				}
			}	
			}
			else{
			if(arr[num] == 1){
				sum+=0;	
			}
			else{
				sum = sum - (arr[num]-1)*4;
			}	
			}
			
			num++;
		}
		printf("Case #%d: ", i+1);
		printf("%d %d\n", sum, c);
		sum = 0;
		num = 0;
	}
	fclose(fp);
	return 0;	
}
