#include <stdio.h>
#include <cctype>
int main()
{
	int p,pa,j,d;char x,m;
	puts("This book store categorized the book selling");
	puts("A:30.000  B:20.000  C:50.000");
	printf("Type of book:");scanf("%c",&x);getchar();
	printf("Total book:");scanf("%d",&j);getchar();
	printf("are you a member:(Y/N)?");scanf("%c",&m);
	switch(toupper(x)){
		case 'A':{
			p=30000*j;
			break;
		}
		case 'B':{
			p=20000*j;
			break;	
		}
		case 'C':{
			p=50000*j;
			break;
		}
	}
	printf("payment:");scanf("%d",&pa);
	
	if(toupper(m)=='Y'){
		if(p>100000){
			d=p*(5/100);
			printf("Price:%d\n",d);
			printf("chance:%d",pa-d);
		}
		else{
			printf("Price:%d\n",p);
			printf("chance:%d",pa-p);
		}
	}
	else{
		printf("Price:%d\n",p);
		printf("chance:%d",pa-p);
	}
	
	return 0;	
	
}

