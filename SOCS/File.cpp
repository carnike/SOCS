#include <stdio.h>
#include <string.h>

struct data{
    char ch1[55];
    char ch2[55];
};

int main () {
    int a;
    char sentence[105];

    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &a);

    struct data data[a];

    int i;
    for(i = 0; i < a; i++) {
        fscanf(fp, "%[^#]#%[^\n]\n", data[i].ch1, data[i].ch2);
    }
    
    int b;
    fscanf(fp, "%d\n", &b);
    
    int j;
    for(j = 0; j < b; j++) {
        fscanf(fp, "%[^\n]\n", sentence);
        printf("Case #%d:\n", j+1);

        char d[] = " ";
        char *str = strtok(sentence, d);
        int check = 1;
        
        while(str != NULL) {
            int check2 = 0;
            int l;
            for (l = 0; l < a; l++) {
                if(strcmp(str, data[l].ch1) == 0) {
                    check2 = -1;
                    if(check){                     
                        printf("%s", data[l].ch2);
                        check = 0;
                    } else {
                        printf(" %s", data[l].ch2);
                    }
                    break;
                }
            }
            if(check2 != -1) {
                if(check){
                    printf("%s", str);
                    check = 0;
                } else {
                    printf(" %s", str);
                }
            }
            str = strtok(NULL, d);
        }
        printf("\n");
    } 
}


