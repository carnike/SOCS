#include<stdio.h>
#include<stdlib.h>

struct data
{
	char name[50];
	int number;
};

void sorting(struct data input[],int n)
{
	int i,j;
    struct data a;
    struct data b;
    
    for (i=0; i<n-1; i++){
        for (j = 0; j < (n-1-i); j++){
            if (input[j].number>input[j + 1].number){
                a = input[j];
                input[j] = input[j + 1];
                input[j + 1] = a;
            } else if(input[j].number==input[j+1].number){
                if(input[j].name<input[j+1].name){
                    b = input[j];
                    input[j] = input[j+1];
                    input[j+1] = b;
                }
            }
        }
    }
}

void print(struct data input[],int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("%s - %d\n",input[i].name,input[i].number);
    } 
	
}

int main()
{
	int i,t;
	scanf("%d",&t);
		for(i=1; i<=t; i++)
		{
			int j,n;
			scanf("%d",&n);	getchar();
			struct data input[n];

				for(j=0; j<n; j++)
				{
					scanf("%[^#]#%d",input[j].name,&input[j].number);
					getchar();
					
				}
			sorting(input,n);	
			printf("Case #%d:\n", i);
      		print(input,n); 
		}
	
	
	return 0;
}
