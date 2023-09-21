#include <stdio.h>
#include <stdbool.h>

#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
bool isfull(){
	if(rear == MAX-1){
		return true;
	}
	return false;
	
}
bool isempty(){
	if(front == -1 || front > rear){
		return true;
	}
	return false;
}
void enqueue(int num){
	
	if(isfull()){
		printf("FULL\n");
	}
	else{
		if(front == -1 && rear == -1){
			front++;
			rear++;	
		}
		else{
			rear++;
		}
		queue[rear]= num;
	}
}
void dequeue(){
	int num;
	if(isempty()){
		printf("\n UNDERFLOW\n");
		
	}
	else{
		front++;
		num = queue[front];
		
	}
	
}
void display(){
	
	if(isempty()){
		printf("empty\n");
	}
	else{
		int i;
		for(i = front; i <= rear; i++){
			printf("%d - ", queue[i]);
		}
		printf("NULL");
		printf("\n");
	}
}
int main()
{
	enqueue(10);
	display();
	enqueue(20);
	display();
	enqueue(30);
	display();
	enqueue(40);
	display();
	enqueue(50);
	display();
	dequeue();
	display();
	
	return 0;
}
