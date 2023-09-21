#include <stdio.h>

int main()
{
//	int a;
//	int b = 4;
//	
//	scanf("%d", &a);
//	if(a < b){
//		printf("a lebih kecil dari b");
//	}
//	else if(a > b){
//		printf("a lebih besar dari b");
//	}
//	else{
//		printf("nilai a adalah 4");
//	}
	
	int i = 1;
	do{
		printf("%d\n", i+1);
		i++;
	}while(i<10);
	
	printf("\n while\n");
	i = 1;
	while(i<10){
		printf("%d\n", i+1);
		i++;
	}
	
	return 0;
}
