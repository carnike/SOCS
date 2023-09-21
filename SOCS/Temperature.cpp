#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data{
   char name[1010];
   double tem;
   char metric; 
};

void swap(data*fileA,data*fileB);

int main(){
    data file[110];
    int i=0;

    FILE*fp=fopen("testdata.in","r");

    while(!feof(fp)){
        fscanf(fp,"%[^#]#%lf#%c\n",&file[i].name,&file[i].tem,&file[i].metric);
        i++;
    }
    
    int j,k;
    for(j=0;j<i;j++){
        if(file[j].metric=='F'){
            file[j].tem=(file[j].tem-32)*5/9;
        }
    }

    for(j=0;j<i;j++){
        for(k=j+1;k<i;k++){
            if(strcmp(file[j].name, file[k].name)>0){
                swap(&file[j], &file[k]);
            }
        }
    }

    for(j=0;j<i-1;j++){
        for(k=0;k<i-1;k++){
            if(file[k].tem>file[k+1].tem){
                swap(&file[k], &file[k+1]);
            }
        }
    }

    for(j=0;j<i;j++){
        if(file[j].metric=='F'){
            file[j].tem=(file[j].tem*9/5)+32;
        }
    }

    for(j=0;j<i;j++){
        printf("%s is %.2lf%c\n",file[j].name,file[j].tem,file[j].metric);
    }
}

void swap(data*fileA, data*fileB){
    data temp=*fileA;
    *fileA=*fileB;
    *fileB=temp;
}
