#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int main(){
    char temp;
    char name[100];
    FILE *fp = fopen("testdata.in", "r");
    int t;
    fscanf(fp, "%d", &t);
    fscanf(fp, "%c", &temp);

    while (t--){
        fscanf(fp, "%s", &name);
        int a = strlen(name);
        int maks[26]={0};
        int y,x,i,j;
        fscanf(fp, "%d", &x);
    
        fscanf(fp, "%c", &temp);

        for(i = 0; i<x; i++){
            char kata[4];
            fscanf(fp, "%[^\n]", &kata);
            fscanf(fp, "%c", &temp);
        
            for (j = 0; j < a; j++){
                if (name[j] == kata[0] && maks[kata[0]-'A']==0 ){
                    name[j] = kata[2];
                }
            }
            maks[kata[0]-'A']++;                    
        }
        
        int freq[26] = {0};
        for (i = 0; i < a; i++){
            freq[name[i] - 'A']++; 
        }
       
        for (i = 0; i < 26; i++){
            if (freq[i] != 0){
                printf("%c %d\n", 'A' + i, freq[i]); 
            }
        }                 
    }

    fclose(fp); 
    return 0;
}
