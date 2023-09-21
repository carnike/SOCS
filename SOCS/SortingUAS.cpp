#include <stdio.h>
#include <string.h>


int main(){
    int a, i, j;
    scanf("%d", &a);
    char nama[a][50];
    
    for(i = 0; i < a; i++){
        scanf("%s", nama[i]);
    }
    for(i = 0; i < a; i++){
    for(j = 0;j<a;j++){
           if(strcmp(nama[i], nama[j]) < 0){
            char temp[200];
            strcpy(temp, nama[i]);
            strcpy(nama[i], nama[j]);
            strcpy(nama[j], temp);
            }
        }
    }
    for(i = 0; i < a; i++){
        printf("%s\n", nama[i]);
    }
    return 0;
}
