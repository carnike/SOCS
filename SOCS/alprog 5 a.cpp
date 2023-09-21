#include <stdio.h>
#include <string.h>
int main()
{
	char ch[25], ch2[25];
	scanf("%s", &ch);
	getchar();
	scanf("%s", &ch2);
	
	strcmp(ch,ch2);
	if(strcmp(ch,ch2) == 0){
		printf("Sama");
	}
	else{
		printf("Tidak Sama");
	}
	
	
	
}
