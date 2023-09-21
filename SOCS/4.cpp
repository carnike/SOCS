#include <stdio.h>
int main()
{
	int a;
	char num;
	scanf("%d", &a);
	int arr[a];
	int i;
	int b = 0,c = 0,d=0,e=0,f=0,g=0,h=0,j=0,k=0,l=0;
	for(i=0;i<a;i++){
		scanf("%d", &arr[i]);
		
		if(arr[i] == 0){
			b++;
		}
		if(arr[i] == 1){
			c++;
		}
		if(arr[i] == 2){
			d++;
		}
		if(arr[i] == 3){
			e++;
		}
		if(arr[i] == 4){
			f++;
		}
		if(arr[i] == 5){
			g++;
		}if(arr[i] == 6){
			h++;
		}
		if(arr[i] == 7){
			j++;
		}
		if(arr[i] == 8){
			k++;
		}
		if(arr[i] == 9){
			l++;
		}

	}
	printf("%d %d %d %d %d %d %d %d %d %d ", b,c,d,e,f,g,h,j,k,l);
	
}
