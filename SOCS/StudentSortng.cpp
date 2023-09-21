#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[100];
    char nomor[11];
}data;

void swap(data *a, data *b);
    

int main (){

    FILE *fp = fopen ("testdata.in", "r");

    int a;
    fscanf(fp, "%d",&a);
    data arr[a];
    
    int x = 0;
    while(!feof(fp)){
        fscanf(fp, "%s %s\n", arr[x].nomor, arr[x].nama);
        x++;
    }

    int i, j;
    for(i = 0; i < x-1; i++){
        for(j = 0; j < x-1; j++){
            if(strcmp(arr[j].nomor,arr[j+1].nomor) > 0){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

    for(i = 0; i < x; i++){
        printf("%s %s\n", arr[i].nomor, arr[i].nama);
    }

	fclose(fp);
	return 0;
}
void swap(data *a, data *b){
    data temp = *a;
    *a = *b;
    *b = temp;
}
