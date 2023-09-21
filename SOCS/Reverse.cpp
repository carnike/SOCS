#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i;
	for(i=1;i<=a;i++){
	char ch[1000000];
	scanf("%s", &ch);
	printf("Case #%d: ", i);
	int j;
	for(j=strlen(ch)-1;j>=0;j--){
		if (ch[j] == toupper(ch[j])){
			ch[j] = tolower(ch[j]);
    		printf("%c", ch[j]);
		}
            
    else if (ch[j] == tolower(ch[j])){
    	ch[j] = toupper(ch[j]);
    	printf("%c", ch[j]);
	}
        
	}
	printf("\n");
	}	
	
	
}
