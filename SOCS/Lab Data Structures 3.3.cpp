#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct node{
	int age;
	char name[20];
	struct node *next;
	struct node *prev;
};

struct node *head = NULL;
struct node *tail = NULL;

struct node *InsertNewNode(int age, char name[]){
	struct node *NewNode = (struct node *) malloc(sizeof(struct node));
	NewNode->age = age;
	strcpy(NewNode->name, name);
	NewNode->next = NULL;
	NewNode->prev = NULL;
	
	return NewNode;
}
void InsertHead(int age, char name[]){
	struct node *NewNode = InsertNewNode(age,name);
	
	if(head == NULL){
		tail = NewNode;
		head = NewNode;
	}
	else{
		NewNode->next = head;
		head->prev = NewNode;
		head = NewNode;
		
	}
	head->prev = NULL;
}
void InsertTail(int age, char name[]){
	struct node *NewNode = InsertNewNode(age,name);
	
	if(head == NULL){
		tail = NewNode;
		head = NewNode;
	}
	else{
		tail->next = NewNode;
		head->prev = tail;
		tail = NewNode;
		
	}
	head->prev = NULL;
	
}
void InsertMid(int age, char name[]){
	struct node *NewNode = InsertNewNode(age,name);
	
	if(head == NULL){
		tail = NewNode;
		head = NewNode;
	}
	else if(age < head->age){
		InsertHead(age,name);
	}
	else if(age > tail->age){
		InsertTail(age,name);
	}
	else{
		struct node *curr = head;
		
		while(curr->next !=NULL && curr->next->age <= age ){
			curr = curr->next;
		}
		NewNode->next = curr->next;
		curr->next->prev = NewNode;
		curr->next = NewNode;
		NewNode->prev = curr;
	}
	
}
void PrintAll(){
	struct node *curr = head;
	
	while(curr != NULL){
		printf("[%d %s] -> ",curr->age , curr->name);
		curr=curr->next;
		
	}
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

void DeleteMid(char *name){
	if(head != NULL){
		if(strcmp(head->name, name) == 0){
			DeleteHead();
			
		}
		else if(strcmp(tail->name, name)== 0){
			DeleteTail();
		}
		else{
			struct node *curr = head;
			
			while(curr->next != NULL && strcmp(curr->next->name, name) != 0){
				curr=curr->next;
			}
			
			struct node *a = curr;
			struct node *del = curr->next;
			struct node *b = curr->next->next;
			
			a->next = b;
			b->prev = a;
			free(del);
			
			
		}
		
	}
}
int main()
{
	
	InsertMid(3,"desi");
	InsertMid(6,"agus");
	InsertMid(5,"andi");
	InsertMid(8,"beni");
	InsertMid(1,"budi");
	printf("Sebelum di Delete\n");
	PrintAll();
	printf("Sesudah agus Delete\n");
	DeleteMid("agus");
	PrintAll();
	
	
}
