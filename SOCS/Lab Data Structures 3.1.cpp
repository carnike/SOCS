#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
	int age;
	char name[20];
	struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;

struct node *CreateNewNode(char name[], int age){
	struct node *NewNode = (struct node *) malloc(sizeof(struct node));
	
	NewNode -> age = age;
	strcpy(NewNode->name, name);
	NewNode->next = NULL;
	
	return NewNode;
}

void InsertHead(char *name,int age){
	struct node *NewNode = CreateNewNode(name,age);
	
	if(head == NULL){
		head =NewNode;
		tail =NewNode;
	}
	else{
		NewNode->next = head;
		head = NewNode;
	}
	
}

void InsertTail(char *name,int age){
	struct node *NewNode = CreateNewNode(name,age);
	struct node *curr = head;
	if(head == NULL){
		head =NewNode;
		tail = NewNode;
	}
	else{
	while(curr->next != NULL){
				curr=curr->next;
			}	
	curr->next = NewNode;
	}
}
void InsertMid(char *name,int age){
	struct node *NewNode = CreateNewNode(name,age);
	
	if(head == NULL){
		head =NewNode;
		tail =NewNode;
	}
	else{
		struct node *curr = head;
		
		while(curr->next != NULL && curr->next->age <= age){
			curr=curr->next;
		}
		NewNode ->next = curr->next;
		curr->next = NewNode;
		
		if(curr == tail){
			tail = NewNode;  

		}
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
			
			if(curr->next != NULL){
				struct node *temp;
				strcpy(temp->name,name);
				
				curr->next = temp->next;
				free(temp);
			}
			
		}
		
	}
}

int main(){
	InsertMid("budi", 1);
	PrintAll();
	InsertMid("desi", 5);
	PrintAll();
	InsertMid("andi", 4);
	PrintAll();
	InsertMid("agus", 6);
	PrintAll();
	InsertMid("beni", 3);
	PrintAll();
	DeleteMid("beni");
	PrintAll();
	return 0;
}
