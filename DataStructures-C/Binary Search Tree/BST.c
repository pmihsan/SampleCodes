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

struct node * Search(struct node * root, int value){
	if(root == NULL || root->data == value){
		return root;
	}
	if(root->data < value){
		return Search(root->right, value);
	}
	return Search(root->left, value);
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

struct node* deleteNode(struct node* node, int value){
	if(node == NULL){
		return NULL;
	}
	else{
		if(node->data > value){
			node->left = deleteNode(node->left, value);
		}
		else if(node->data < value){
			node->right = deleteNode(node->right, value);
		}
		else{
			if(node->left == NULL && node->right == NULL){
				node = NULL;
			}
			else if(node->left == NULL){
				node = node->right;
			}
			else if(node->right == NULL){
				node = node->left;
			}
			else{
				struct node* temp = MinNode(node->right);
				node->data = temp->data;
				node->right = deleteNode(node->right, temp->data);
			}
		}
		return node;
	}
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
	printf("Inorder Traversal\n");
	inOrder(root);
	printf("\n");
	/*preOrder(root);
	printf("\n");
	postorder(root);
	printf("\n");*/
	
	struct node *minNode = MinNode(root);
	printf("MinNode Data - %d\n",minNode->data);
	
	struct node *maxNode = MaxNode(root);
	printf("MaxNode Data - %d\n",maxNode->data);
	
	struct node *searchNode = Search(root, 34);
	if(searchNode){
		printf("The Node data-%d is found\n",searchNode->data);
	}
	else{
		printf("There is no node with data %d\n",34);
	}
	
	printf("Deleting Node with Data %d\n",23);
	deleteNode(root,23);
	printf("Inorder Traversal\n");
	inOrder(root);
	printf("\n");
	
	
	/*printf("Deleting Node with Data %d\n",56);
	root = deleteNode(root,56);
	printf("Inorder Traversal\n");
	inOrder(root);
	printf("\n");*/	
}
