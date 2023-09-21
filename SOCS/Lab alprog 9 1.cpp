#include <stdio.h>
#include <string.h>
int main()
{
	char ch[1001] , temp;
	gets(ch);
	
	int i,j;
	int b = strlen(ch);
	for(i=0;i<b-1;i++){
	for(j=i+1;j<b;j++){
			if( ch[i] > ch[j]){
			temp = ch[j];
			ch[j] = ch[i];
			ch[i] = temp;
			}
		}
	}
	printf("%s", ch);
}

