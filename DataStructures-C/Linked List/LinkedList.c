#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head,*temp;
void createList(int n);
void displayList();
void InsertBegining();
void InsertEnd();
void DeleteBegining();
void DeleteEnd();
void InsertAfterPosition(int n);
void DeleteAtGivenLocation(int n);
void getLength();
void reverseLinkedList();
void updateLinkedList();
void searchLinkedList();
void main()
{
int n;
head = NULL;
printf("Enter how many nodes you want to create\n");
scanf("%d",&n);

createList(n);
displayList();

/*InsertBegining();
displayList();*/

/*InsertEnd();
displayList();

DeleteBegining();
displayList();

DeleteEnd();
displayList();

InsertAfterPosition(n);
displayList();

DeleteAtGivenLocation(n);
displayList();

//getLength();

reverseLinkedList();
displayList();

updateLinkedList();
displayList();*/

searchLinkedList();

}


void createList(int n){
int i = 1;
struct node *newNode;

while(i <= n){
newNode = (struct node *)malloc(sizeof(struct node));
printf("Enter data to insert in position %d\n",i);
scanf("%d",&newNode->data);
newNode->next = NULL;
if(head == NULL){
head = temp = newNode;
}
else{
temp->next = newNode;
temp = newNode;
}
i++;
}
printf("\n%d Nodes created Successfully\n",n);
}


void displayList(){
printf("\nDisplaying the list\n");
temp = head;
while(temp != 0){
	printf("%d\n",temp->data);
	temp = temp->next;

}
}


void InsertBegining(){
struct node *newNode;
newNode = (struct node *)malloc(sizeof(struct node));
printf("Enter the data to insert in the begining\n");
scanf("%d",&newNode->data);
newNode->next = head;
head = newNode;
}


void InsertEnd(){
struct node *newNode;
newNode = (struct node *)malloc(sizeof(struct node));
printf("Enter the data to insert at the end\n");
scanf("%d",&(newNode->data));
temp = head;
newNode->next = NULL;
while(temp->next != NULL){
temp = temp->next;
}
temp->next = newNode; 
}


void DeleteBegining(){
printf("\nDeleting data from the begining\n");
temp = head;
head = head->next;
free(temp);
}


void DeleteEnd(){
printf("\nDeleting data from the end\n");
struct node *prevNode;
temp = head;
while(temp->next != NULL){
prevNode = temp;
temp = temp->next;
}
if(temp == head){
head = NULL;
}
else{
   prevNode->next = NULL;
}
free(temp);
}


void InsertAfterPosition(int n){
int pos,i=1;
struct node *newNode;
printf("Enter the position after which you want to insert the data\n");
scanf("%d",&pos);
if(pos > 0 && pos <= n){
temp = head;
while(i < pos){
temp = temp->next;
i++;
}
newNode = (struct node *)malloc(sizeof(struct node));
printf("Enter the data to insert in the position %d\n",pos+1);
scanf("%d",&newNode->data);
newNode->next = temp->next;
temp->next = newNode;
} 
else{
printf("Invalid Position\n");
}
}


void DeleteAtGivenLocation(int n){
struct node *nextNode;
int pos,i = 1;
temp = head;
printf("Enter the position to delete the data\n");
scanf("%d",&pos);
if(pos > 0 && pos <= n){
while(i < pos-1){
temp = temp->next;
i++;
}
nextNode = temp->next;
temp->next = nextNode->next;
free(nextNode);
}
else{
printf("Invalid Position\n");
}
}


void getLength(){
int count = 0;
temp = head;
while(temp != NULL){
count++;
temp = temp->next;
}
printf("Length of the linked list or number of nodes is %d\n",count);
}


void reverseLinkedList(){
printf("\nReversing the Linked List\n");
struct node *prevNode,*currNode,*nextNode;
prevNode = NULL;
currNode = nextNode = head;
while(nextNode != NULL){
nextNode = nextNode->next;
currNode->next = prevNode;
prevNode = currNode;
currNode = nextNode;
}
head = prevNode;
}

void updateLinkedList(){
    int old,new;
    printf("\nEnter the existing data to update\n");
    scanf("%d",&old);
    printf("Enter a new data to update\n");
    scanf("%d",&new);
    temp = head;
    while(temp != NULL){
        if(temp->data == old){
            temp->data = new;
        }
        temp = temp->next;
    }
    printf("\nData Updated Successfully\n\n");
    
}

void searchLinkedList(){
    int search,s=0,i=1,res;
    printf("\nEnter an element to search\n");
    scanf("%d",&search);
    temp = head;
    while(temp != NULL){
        if(temp->data == search){
            s = 1;
            res = i;
        }
        temp = temp->next;
        i++;
    }
    if(s){
        printf("\nElement Found At Position %d\n",res);
    }
    else{
        printf("\nElement Not Found\n\n");
    }
}


