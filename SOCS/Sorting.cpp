#include <stdio.h>
#include <string.h>

struct data{
    char name[55];
    int num;
};

int main (){
    
    int a, numbering = 1;
    char temp[51]; int temp2 = 0;
    scanf("%d",&a); getchar();

        while(a--){
            int b;
            scanf("%d",&b); 
			getchar();
            struct data arr[b];

            int i;
            for(i = 0; i < b; i++){
                scanf("%[^#]#%d", &arr[i].name, &arr[i].num); 
				getchar();
            }

            int j, k;
            for(j = 0; j <b; j++){ // t = 3
                for(k = j+1; k < b; k++){
                    if(arr[j].num > arr[k].num){
                        temp2 = arr[j].num; strcpy(temp, arr[j].name);
                        arr[j].num = arr[k].num; strcpy(arr[j].name, arr[k].name);
                        arr[k].num = temp2; strcpy(arr[k].name, temp);
                    } 
                }
            }
            int p;
            for(p = 0; p < b-1; p++){
                if(arr[p].num == arr[p+1].num){
                    if(strcmp(arr[p].name, arr[p+1].name) > 0){
                        strcpy(temp, arr[p].name);
                        strcpy(arr[p].name, arr[p+1].name);
                        strcpy(arr[p+1].name, temp);
                    }
                }
            }

            printf("Case #%d:\n", numbering);
            int l;
            for(l = 0; l < b; l++){
                printf("%s - %d\n", arr[l].name, arr[l].num);
            }
            numbering++;
        }

}
