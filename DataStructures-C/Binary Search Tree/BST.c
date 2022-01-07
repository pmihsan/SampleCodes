#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
}*root = NULL;

struct node * createNode(int value){
	struct node *newNode;
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void insertData(int value){
	if(root == NULL){
		root = createNode(value);
		return;
	}
	struct node *parent, *current;
	current = root;
	parent = NULL;
	while(1){
		parent = current;
		if(current->data > value){
			current = current->left;
			if(current == NULL){
				parent->left = createNode(value);
				return;
			}
		}
		else{
			current = current->right;
			if(current == NULL){
				parent->right = createNode(value);
				return;
			}
		}
	}
}

struct node * MinNode(struct node *root){
	if(root->left == NULL){
		return root;
	}
	return MinNode(root->left);
}

struct node * MaxNode(struct node *root){
	if(root->right == NULL){
		return root;
	}
	return MaxNode(root->right);
}

void inOrder(struct node *root){
	if(root == NULL){
		return;
	}
	inOrder(root->left);
	printf("%d ",root->data);
	inOrder(root->right);
}

void preOrder(struct node *root){
	if(root == NULL){
		return;
	}
	printf("%d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}

void postorder(struct node *root){
	if(root == NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}


void main(){
	int n;
	printf("Enter the number of node\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int value;
		printf("Enter the node-%d value\n",i+1);
		scanf("%d",&value);
		insertData(value);
	}
	inOrder(root);
	printf("\n");
	preOrder(root);
	printf("\n");
	postorder(root);
	printf("\n");
	
	struct node *minNode = MinNode(root);
	printf("MinNode Data - %d\n",minNode->data);
	
	struct node *maxNode = MaxNode(root);
	printf("MaxNode Data - %d\n",maxNode->data);
}
