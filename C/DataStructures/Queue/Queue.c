#include<stdio.h>
#define N 10
int queue[N];
int front = -1;
int rear = -1;

int isEmpty(){
	if(rear == -1){
		return 1;
	}
	return 0;
}

int isFull(){
	if(rear == N){
		return 1;
	}
	return 0;
}

void enqueue(int value){
	if(isFull()){
		printf("Queue is FULL!!!\n");
		return;
	}
	if(front == -1 && rear == -1){
		front++;
	}	
	queue[++rear] = value;
}

int dequeue(){
	if(isEmpty()){
		printf("Queue is Empty\n");
		return -1;
	}
	int data = queue[front];
	front++;
	return data;
}

int peek(){
	if(isEmpty()){
		printf("Queue is Empty\n");
		return -1;
	}
	return queue[front];
}

void display(){
	if(isEmpty()){
		printf("Queue is Empty\n");
		return;
	}
	printf("Displaying the Queue\nFRONT -> ");
	for(int i = front;i<rear;i++){
		printf("%d -> ",queue[i]);
	}
	printf("%d -> REAR\n",queue[rear]);
}
	
void main(){
	printf("Queue Implementtation Using Array\n");
	enqueue(23);
	enqueue(34);
	enqueue(56);
	enqueue(12);
	enqueue(67);
	
	display();
	
	printf("Deleting %d from the queue\n",dequeue());
	
	display();
	
	printf("Displaying the Front element - %d\n",peek());
}
