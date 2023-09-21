#include <stdio.h>
#include <stdbool.h>

//bikin swap
void swap(int *heap, int curr, int parent){
    int temp = heap[curr];
    heap[curr] = heap[parent];
    heap[parent] = temp;
}

int parent(int curr){
    return curr/2;
}

int insert(int *heap, int size, int value){
    size++;
    heap[size] = value;

    //swapping
    int curr = size;
    while(heap[curr] > heap[parent(curr)]){
        swap(heap, curr, parent(curr));
        curr = parent(curr);
    }

    return size;
}

void view(int *heap, int size){
    int i;
    for(i = 1; i<=size/2; i++){
        printf("parent: %d, left child: %d, right child: %d\n", heap[i], heap[i*2], heap[i*2+1]);
    }
}

int getmax(int *heap){
    return heap[1];
}

bool isLeaf(int curr, int size){
    if(curr > (size/2) && curr <= size){
        return true;
    }
    else{
        return false;
    }
}

int rightChildPos(int curr){
    return curr*2+1;
}

int leftChildPos(int curr){
    return curr*2;
}

void maxHeapify(int *heap, int size, int curr){
    if(isLeaf(curr, size) == true) return;

    int rightChildValue = heap[rightChildPos(curr)];
    int leftChildValue = heap[leftChildPos(curr)];

    if(heap[curr] < rightChildValue || heap[curr] < leftChildValue){
        if(leftChildValue > rightChildValue){
            swap(heap, curr, leftChildPos(curr));
            maxHeapify(heap, size, leftChildPos(curr));
        }
        else{
            swap(heap, curr, rightChildPos(curr));
            maxHeapify(heap, size, rightChildPos(curr));
        }
    }
}

int extractMax(int *heap, int *size){
    //get max value or root
    int maxValue = heap[1];
    heap[1] = heap[*size];
    *size--;

    maxHeapify(heap, *size, 1);
    return maxValue;
}

int main(){

    int heap[100];
    int size = 0;

    size = insert(heap, size, 45);
    size = insert(heap, size, 27);
    size = insert(heap, size, 36);
    size = insert(heap, size, 16);
    size = insert(heap, size, 18);
    size = insert(heap, size, 29);
    size = insert(heap, size, 21);
    size = insert(heap, size, 54);


    view(heap, size);

    // printf("root: %d\n", getmax(heap));

    // int maxValue = extractMax(heap, &size);

    // printf("root: %d\n", getmax(heap));

    return 0;
}
