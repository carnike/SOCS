#include <stdio.h>
#include <stdlib.h>

struct node{
	int num;
	struct node *next;	
};

struct node *front = NULL;
struct node *rear = NULL;

void push(int data){
	struct node *NewNode = (struct node *) malloc(sizeof(struct node));
	NewNode->num = data;
	NewNode -> next =NULL;
	
	if(front == NULL){
		front = NewNode;
		rear = NewNode;
		front->next == NULL;
		rear->next == NULL;
	}
	else{
		rear->next = NewNode;
		rear = NewNode;
		rear->next = NULL;
	}
	
	
	
	
}

int main(){
	
	
	
	return 0;	
}
