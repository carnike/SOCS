#include<stdio.h>
#include<string.h>

int main(){

    int a, b, i, j, k;
    scanf("%d", &a);
    for(i=0; i<a; i++){
        scanf("%d", &b);
        char name[b][50];
		char name1[50];
        int score[b];
        
        for(j=0; j<b; j++){
            scanf(" %[^#] #%d", name[j], &score[j]);
        }
        
        for(j=0; j<b; j++){
            for(k=0; k<b-1; k++){
                if(score[k]<score[k+1]){
                    int temp = score[k];
                    score[k] = score[k+1];
                    score[k+1] = temp;
                    
                    char temp1[50];
                    strcpy(temp1, name[k]);
                    strcpy(name[k], name[k+1]);
                    strcpy(name[k+1], temp1);
                }else if(score[k]==score[k+1]){
                    if(strcmp(name[k], name[k+1])>0){
                        char temp1[50];
                        strcpy(temp1, name[k]);
                        strcpy(name[k], name[k+1]);
                        strcpy(name[k+1], temp1);
                    }
                }
            }
        }
        
        scanf("%s", name1); 
        printf("Case #%d: ", i+1);
        for(j=0; j<b; j++){
        	if(strcmp(name1, name[j])==0){
        	    printf("%d\n", j+1);
        	}
        }
    }

    return 0;
}
