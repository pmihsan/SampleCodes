#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

int isEmpty(){
	if(front == -1){
		return 1;
	}
	return 0;
}

int isFull(){
	if(front == 0 && rear == N-1){
		return 1;
	}
	if(rear == (front-1) % (N-1)){
		return 1;
	}
	return 0;
}

void enqueue(int value){
	if(isFull()){
		printf("Queue is FULL!!!\n");
		return;
	}
	if(front == -1){
		front = rear = 0;	
	}	
	else if(rear == N - 1 && front != 0){
		rear = 0;
	}
	else{
		rear++;
	}
	queue[rear] = value;
}

int dequeue(){
	if(isEmpty()){
		printf("Queue is Empty\n");
		return -1;
	}
	int data = queue[front];
	if(front == rear){
		front = -1;
		rear = -1;
	}
	else if(front == N - 1){
		front = 0;
	}
	else{
		front++;
	}
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
	if(rear >= front){
		for(int i = front;i<rear;i++){
			printf("%d -> ",queue[i]);
		}
		printf("%d -> REAR\n",queue[rear]);
	}
	else{
		for(int i = front;i < N;i++){
			printf("%d -> ",queue[i]);
		}
		for(int i=0;i < rear;i++){
			printf("%d -> ",queue[i]);
		}
		printf("%d -> REAR\n",queue[rear]);
	}
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
	
	enqueue(19);
	display();
}
