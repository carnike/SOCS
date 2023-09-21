#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[10];
	char n[]= "n",c[]= "x";
	
	char op;
	float b;
	float hasil = 0 ;
	
	label:
		
	scanf("%s", &a);
	float x = atof(a);
	
	if(strcmp(a,"x") == 0){
		exit(1);
	}
	scanf("%s %f",&op, &b);
	
	
	switch(op){
		case'+': 
		if(strcmp(a,n) == 0){
			hasil -= b;
			printf("nilai n = %.1f\n", hasil);
			
		}else{
		hasil = x + b;
		printf("%.1f\n", hasil);
			
		}
		
		break;
		
		case'-': 
		if(strcmp(a,n) == 0){
			hasil += b;
			printf("nilai n = %.1f\n", hasil);
			
		}else{
		hasil = x - b;
		printf("%.1f\n", hasil);	
		}
		
		break;
		
		case'/': 
		if(strcmp(a,n) == 0){
			hasil *= b;
			printf("nilai n = %.1f\n", hasil);
			
		}else{
		hasil = x / b;
		printf("%.1f\n", hasil);	
		}
		
		break;
		
		case'*': 
		if(strcmp(a,n) == 0){
			hasil /= b;
			printf("nilai n = %.1f\n", hasil);
			
		}else{
		hasil = x * b;
		printf("%.1f\n", hasil);	
		}
		
		break;
	}
	
	goto label;
	
}
