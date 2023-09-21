#include <stdio.h>
#include <stdlib.h>

struct node{
	int num;
	struct node *left;
	struct node *right;
	
};
struct node *CreateNewNode(int num){
	struct node *NewNode = (struct node *) malloc(sizeof(struct node));
	NewNode->num = num;
	NewNode->left = NULL;
	NewNode->right = NULL;	
}

void InsertKiri(struct node *root, int num){
	root->left = CreateNewNode(num);
}

void InsertKanan(struct node *root, int num){
	root->right = CreateNewNode(num);
}

struct node *Insert(struct node *root, int num){
	if(root == NULL){
		return CreateNewNode(num);
	}
	else if(num < root->num){
		root->left = Insert(root->left,num);
	}
	else if(num >= root->num){
		root->right = Insert(root->right,num);
	}
	return root;
}
struct node* minValueNode(struct node* node)
{
	struct node* curr = node;

	while (curr && curr->left != NULL)
		curr = curr->left;

	return curr;
}
struct node* DeleteNode(struct node* root, int num)
{
	
	if (root == NULL)
		return root;

	
	if (num < root->num)
		root->left = DeleteNode(root->left, num);

	
	else if (num > root->num)
		root->right = DeleteNode(root->right, num);

	else {
		
		if (root->left == NULL) {
			struct node* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			struct node* temp = root->left;
			free(root);
			return temp;
		}

		struct node* temp = minValueNode(root->right);
		root->num = temp->num;
		root->right = DeleteNode(root->right, temp->num);
	}
	return root;
}
void InOrder(struct node *root){
	if(root == NULL){
		return;
	}
	else{
		InOrder(root->left);
		printf("%d - ", root->num);
		InOrder(root->right);
	}
	
}
void PreOrder(struct node *root){
	if(root != NULL){
		printf("%d - ", root->num);
		PreOrder(root->left);
		PreOrder(root->right);
	}
}
int main()
{
	struct node *root = NULL;
	root = Insert(root, 50);
    root = Insert(root, 30);
    root = Insert(root, 20);
    root = Insert(root, 40);
    root = Insert(root, 70);
    root = Insert(root, 60);
    root = Insert(root, 80);
    InOrder(root);
    printf("NULL");
    printf("\n");
    root = DeleteNode(root, 30);
    InOrder(root);
    printf("NULL");
	return 0;
}
