#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *left;
	struct node *right;
	int height;
};

int max(int a, int b){
	if( a >  b) return a;
	else return b;	
}
int height(struct node *root){
	if(root == NULL) return -1;
	else return root->height;
}

int getBalance(struct node *root){
	if(root == NULL) return 0;
	else return height(root->left) - height(root->right);
}

struct node *rotateRight(struct node *root){
	struct node *y = root->left;
	struct node *sub_y = y->right;
	
	y->right = root;
	root->left = sub_y;
	
	root->height = max(height(root->left),height(root->right)) ;
	y->height = max(height(y->left), height(y->right)) ;
	
	return y;
}
struct node *rotateLeft(struct node *root){
	struct node *y = root->right;
	struct node *sub_y = y->left;
	
	y->left = root;
	root->right = sub_y;
	
	root->height = max(height(root->right),height(root->left)) ;
	y->height = max(height(y->right), height(y->left)) ;
}
struct node *createNewNode(int value){
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->value = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->height = 0;
	
	return newNode;
}

struct node *insert(struct node *root, int value){
	if(root == NULL){
		return createNewNode(value);
	}
	else if(value > root->value){
		root->right = insert(root->right, value);
	}
	else if(value < root->value){
		root->left = insert(root->left, value);
	}
	else{
		return root;
	}
	
	root->height = 1 + max(height(root->left),height(root->right));
	
	int balance = getBalance(root);
	
	if(balance > 1){
		if(value < root->left->value){
			return rotateRight(root);
		}
		else if(value > root->left->value){
			root->left = rotateLeft(root);
			return rotateRight(root);	
		}
	}
	else if(balance < 1){
		if(value > root->left->value){
			return rotateLeft(root);
		}
		else if(value < root->left->value){
			root->right = rotateRight(root);
			return rotateLeft(root);
		}
	}
}

void InOrder(struct node *root){
	if(root == NULL){
		InOrder(root->left);
		printf("%d - ", root->value);
		InOrder(root->right);
	}
}

int main()
{
	
	struct node *root = NULL;
	root = insert(root, 10);
	root = insert(root, 20);
	root = insert(root, 30);
	root = insert(root, 40);
	root = insert(root, 50);
	root = insert(root, 25);
	InOrder(root);
	
	return 0;
}
