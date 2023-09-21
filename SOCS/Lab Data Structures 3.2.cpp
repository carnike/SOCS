#include<stdio.h>
#include<stdlib.h>

struct node{
	int num;
	struct node *next;	
};

struct node *tail = NULL;
struct node *head = NULL;

void InsertTail(int num){
	struct node *NewNode = (struct node *) malloc(sizeof(struct node));
	NewNode->num = num;
	if(tail == NULL){
		tail =NewNode;
		tail->next = tail;
	}
	else{
		NewNode->next = tail->next;
		tail->next = NewNode;
		tail = NewNode;
	}

}
void InsertHead(int num){
	struct node *NewNode = (struct node *) malloc(sizeof(struct node));
	NewNode->num = num;
	if(tail == NULL){
		tail =NewNode;
		tail->next = tail;
	}
	else{
		NewNode->next = tail->next;
		tail->next = NewNode;
		head = NewNode;	
	}
}

void PrintAll(){
	struct node *curr = head;
	do{
		printf("[%d] -> ",curr->num);
		curr=curr->next;
		
	}
	while(curr != tail->next);
	
	printf("NULL\n");
	
	
}
void DeleteHead(){
	if(head != NULL){
		struct node *temp = head;
		head = head->next;
		free(temp);
	}
	
}
void DeleteTail(){
	if(head != NULL){
		struct node *curr = head;
		if(curr->next == NULL){
			
			head =NULL;
			tail =NULL;
			free(curr);
		}
		else{
			
			while(curr->next != tail){
				curr=curr->next;
			}
			struct node *temp = tail;
			curr->next = NULL;
			tail = curr;
			free(temp);
				
		}
	}
	
}
void DeleteMid(int num){
	if(head != NULL){
		if(head->num == num){
		DeleteHead();
			
		}
		else if(tail->num == num){
			DeleteTail();
		}
		else{
			struct node *curr = head;
			
			while(curr->next != NULL && curr->next->num != num ){
				curr=curr->next;
			}
			
			if(curr->next != NULL){
				struct node *del = curr->next ;
				curr->next = del->next;
				free(del);
			
				
			}
			
		}
		
	}
}
int main()
{
	
	InsertHead(3);
	InsertHead(6);
	InsertHead(5);
	InsertHead(8);
	InsertHead(1);
	printf("Sebelum di Delete\n");
	PrintAll();
	DeleteMid(8);
	printf("Sesudah di angka 8 di Delete\n");
	PrintAll();
	
	
}
