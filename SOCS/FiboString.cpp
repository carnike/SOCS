#include <stdio.h>
	int a=0;
	char b[1];
	char c[1];
int fibo(int num){
	a +=1;
	if(num == 0){
		printf("%c", b[0]);
	}
	if (num == 1){
		printf("%c", c[0]);
	}
	 if((num == 0) || (num == 1)){
		return 1;
	}else{
		return fibo(num-1) + fibo(num-2);
	}
}

int main()
{
	int d;
	scanf("%d", &d);
	int i,e;
	for(i=1;i<=d;i++){
		scanf("%d %c %c", &e,b,c);
		printf("Case #%d: ", i);
		fibo(e);
		printf("\n");
		
	}	
	return 0;
}
