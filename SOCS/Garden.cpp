#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d %d", &x, &y);
	int arr[x][y];
	int i,j;	
	for(i = 0;i < x;i++){
		for(j=0;j<y;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int k;
	int a,b,c;
	scanf("%d", &z);
	for(k = 0;k < z;k++){
		scanf("%d %d %d",&a, &b ,&c);
		arr [a-1][b-1] = c;
		}
		int l;
	for(l = 0; l < x; l++){
		int m;
		for(m = 0; m < y; m++){
			if(m < (y-1)){
			    printf("%d ", arr[l][m]);
			} else if (m == (y-1)){
				printf("%d", arr[l][m]);
				
			}
		}
	}
		
	}
