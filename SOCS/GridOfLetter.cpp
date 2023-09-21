#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

struct a{
    int line;
    int huruf;
};

int main(){
    struct a data;
    scanf("%d %d", &data.line, &data.huruf);
    char ch[201][201];
    char c[201], temp;
    for(int i = 0; i < data.line; i++){
        scanf(" %[^\n]", ch[i]);
    }
    for(int i = 0; i < data.line; i++){
        for(int j = 0; j < data.huruf; j++){
            for(int k = j+1; k < data.huruf; k++){
                if(ch[i][j] > ch[i][k]){
                    temp = ch[i][j];
                    ch[i][j] = ch[i][k];
                    ch[i][k] = temp;
                }
            }
        }
    }
    for(int i = 0; i < data.line; i++){
        for(int j = i + 1; j < data.line; j++){
            if(strcmp(ch[i], ch[j]) < 0){
                strcpy(c, ch[i]);
                strcpy(ch[i], ch[j]);
                strcpy(ch[j], c);
            }
        }
    }
    for(int i = 0; i < data.line; i++){
        printf("%s\n", ch[i]);
    }
}
