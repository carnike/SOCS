#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct palindrome{
	char ch[20];
}palindrome;

palindrome* stack1[MAX];
int size1;
int main()
{
	int opt=0;
	
	do{
	puts("welcome");
	puts("1. check palindrome");
	puts("2. check word(last five)");
	puts("option : ");
	scanf("%d", &opt);
	if(opt == 1){
	char ch[20];
	int l,k;
	printf("masukan kata: ");
	scanf("%s", &ch);
		l=strlen(ch);
		l -= 1;
		k=0;
		for(k=0;k<l;k++)
		{
			if(ch[l] != ch[k]){
				printf("it's not a palindrome\n");
				break;
			}
			else {
				printf("it's a palindrome\n");
				break;
			} 
			
		}
		palindrome* queue1 = (palindrome*) malloc(sizeof(palindrome));
		strcpy(queue1->ch,ch);
		stack1[size1]=queue1;
		size1++;
		
	}
	if(opt == 2){
		int i;
		if(size1 < 5){
			for(i=0; i<size1;i++){
				printf("%d",i+1);
				printf("kata: %s\n", stack1[i]->ch);
			}
		}
		else{
			for(i=1; i<=5;i++){
				printf("%d",i+1);
				printf("kata: %s\n", stack1[size1 - i]->ch);
			}
		}
	}
	
	}while (opt !=0);
}
