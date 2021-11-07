#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node * next;
}*head;

void main()
{
int choice = 1,count = 0,r = 0;
int position,i=1;
struct node *newNode, *temp;

head = NULL;
while(choice){   //To create a series of node
newNode = (struct node *)malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&newNode->data); //Store the data in the new node
newNode->next = NULL;
if(head == NULL){
    head = temp = newNode;
}
else{
	temp->next = newNode;
	temp = newNode;
}
printf("Do you want to continue(PRESS 1)\n");
scanf("%d",&choice);
}

printf("\nDisplaying the data\n");//Displaying the nodes
temp = head;
while(temp != 0){
	printf("%d\n",temp->data);
	temp = temp->next;
	count++;
}
printf("The number of nodes is %d\n",count);

printf("\nTo Insert data in begining Press 1\n");
printf("To Insert data in end Press 2\n");
printf("To Insert data at agiven location Press 3\n");
scanf("%d",&r);

if(r == 1)   //Insert at the begining of the node
{
newNode = (struct node *)malloc(sizeof(struct node));
printf("Enter the data you want to insert begining\n");
scanf("%d",&newNode->data);
newNode->next = head;
head = newNode;

printf("\nDisplaying the data\n");
temp = head;
while(temp != 0){
	printf("%d\n",temp->data);
	temp = temp->next;
	count++;

}
}

else if(r == 2)       //Insert at the end of the node
{   
newNode = (struct node *)malloc(sizeof(struct node));
printf("Enter the data you want to insert at the end\n");
scanf("%d",&newNode->data);
newNode->next = NULL;
temp = head;
while(temp->next != NULL){
temp = temp->next;
}
temp->next = newNode;
printf("\nDisplaying the data\n");
temp = head;
while(temp != 0){
	printf("%d\n",temp->data);
	temp = temp->next;
	count++;

}
}

else if(r == 3)    //Insert after a given position
{
printf("Enter the  position after which you want to insert a data\n");
scanf("%d",&position);
if(position > count){
printf("Invalid Position\n");
}
else{
temp = head;
while(i < position){
temp = temp->next;
i++;
}
newNode = (struct node *)malloc(sizeof(struct node));
printf("Enter the data to insert in the position %d\n",position+1);
scanf("%d",&newNode->data);
newNode->next = temp->next;
temp->next = newNode;
}
printf("\nDisplaying the data\n");
temp = head;
while(temp != 0){
	printf("%d\n",temp->data);
	temp = temp->next;
	count++;

}
}

else{
printf("Invalid Operation\n");
printf("Insertion Completed\nPress ENTER\n");
getchar();
getchar();
}



printf("Deletion\n\nTo delete data in the begining Press 1\n");
printf("To delete data from the end Press 2\n");
printf("To delete data from a given position Press 3\n");
scanf("%d",&r);



if(r == 1){
temp = head;
head = head->next;
free(temp);
printf("\nDisplaying the data\n");
temp = head;
while(temp != 0){
	printf("%d\n",temp->data);
	temp = temp->next;
	count++;

  }

}


else if(r == 2){
struct node * prevNode;
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
printf("\nDisplaying the data\n");
temp = head;
while(temp != 0){
	printf("%d\n",temp->data);
	temp = temp->next;
	count++;

  }
}



else if(r == 3){
struct node *nextNode;
int pos,i = 1;
temp = head;
printf("Enter the position to delete the data\n");
scanf("%d",&pos);

while(i < (pos-1)){
temp = temp->next;
i++;
}
nextNode = temp->next;
temp->next = nextNode->next;
free(nextNode);
printf("\nDisplaying the data\n");
temp = head;
while(temp != 0){
	printf("%d\n",temp->data);
	temp = temp->next;
	count++;

  }

}


else{
printf("Invalid Operation\n");
printf("Deletion completed\nPress Enter to Exit\n");
getchar();
getchar();
}

}
