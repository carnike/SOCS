#include <stdio.h> 
#include <ctype.h>

int main(){

    int a,b;
    scanf("%d %d", &a, &b); 


    char ch[a];
    scanf("%s", ch); 
    for (int i = 0; i < b; i++){
        int c;
        scanf("%d", &c);
        if (ch[c] == toupper(ch[c]))
            ch[c] = tolower(ch[c]);
    else if (ch[c] == tolower(ch[c]))
        ch[c] = toupper(ch[c]);
    }
    printf("%s\n", ch);

    return 0;
}
