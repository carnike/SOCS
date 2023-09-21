#include <stdio.h>
#include <string.h>

int main ()
{	
	int a,b,c,len,s;
	char ch[1000];
	
	scanf("%d", &a);
	int i,j,k;
	for(i=1;i<=a;i++)
	{
		scanf("%s", ch);
		len=strlen(ch);		
		for(k=0;k<len/2;k++){
			c=ch[k];
			ch[i] = ch[len-k-1];
			ch[len-k-1]=c;
		}
		printf("Case %d: ", i);
	
	for(int j =0; j<len; j++){
		s = ch[j] % 2;
		printf ("%d", s);
}
	printf("\n");
	}
	return 0;
}
