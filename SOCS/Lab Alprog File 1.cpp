#include<stdio.h>
int main (){
    
    FILE *fp;
    fp = fopen("text.text","r");
    int a,b,i;
    char nama[100];
    fscanf(fp,"%d", &a);
    for( i=0; i<a;i++)
    {
    fscanf(fp,"%d@%[^\n]",&b,nama);
    printf("%d - %s\n",b,nama);
    }
    fclose(fp);
    return 0;
}
