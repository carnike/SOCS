#include <stdio.h>
int main ()
{
	int a,b;
	char x,z,y,n;
	scanf("%s", &x);
    scanf("%d", &a);
    switch (x){
    	case 'a' : printf("price = %d\n", 30000 * a);
            printf("payment: "); scanf("%d", &b);
            printf("member : "); scanf("%d", &z);
            if(z == y){
            	printf("change: %d\n", b-(30000*a));
			} 
			else if(z== y && b-(30000*a)>100000){
				printf("change: %d\n", (b-(30000*a) * 5 / 100));
			}
			
			else{
				printf("change: %d\n", b-(30000*a));
			}
			break;
        case 'b' : printf("price = %d\n", 20000 * a); 
            printf("payment: "); scanf("%d", &b);
            printf("change: %d\n", b-(20000*a)); 
			break;
        case 'c' : printf("price = %d\n", 50000 * a);
            printf("payment: "); scanf("%d", &b);
            printf("change: %d\n", b-(20000*a)); 
			break;
    		
	}
	
		
	return 0;
}
