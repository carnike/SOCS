#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char vid[1010];
    char nama[1010];
    int view;
}data;
void swap (data *infoA, data *infoB);

int main ()
{
	data info[110];
    int i = 0;
	FILE *fp = fopen("testdata.in", "r");
	while(!feof(fp)){
	fscanf(fp, "%[^#]#%[^#]#%d\n", &info[i].vid, &info[i].nama, &info[i].view);
        i++;	
	}
	int j, k;

    for(j = 0; j < i-1; j++){
        for(k = 0; k < i-1; k++){
            if(info[k].view < info[k+1].view){
                swap(&info[k], &info[k+1]);
            }else if(info[k].view == info[k+1].view){
                if(strcmp(info[k].vid, info[k+1].vid) > 0){
                swap(&info[k], &info[k+1]);
            }
            }
        }
    }
    for(j = 0; j < i; j++){
        printf("%s by %s - %d\n", info[j].vid, info[j].nama, info[j].view);
    }
    
}
void swap (data *infoA, data *infoB){
	data temp = *infoA;
    *infoA = *infoB;
    *infoB = temp;
}
