#include<stdio.h>
#define N 10
int stack[N];
int top = -1;

int isEmpty(){
	if(top == -1){
		return 1;
	}
	return 0;
}

int isFull(){
	if(top == N){
		return 1;
	}
	return 0;
}

void push(int value){
	if(isFull()){
		printf("Stack is FULL!!!\n");
		return;
	}
	stack[++top] = value;
}

int pop(){
	if(isEmpty()){
		printf("Stack is Empty\n");
		return -1;
	}
	int data = stack[top];
	top--;
	return data;
}

int peek(){
	if(isEmpty()){
		printf("Stack is Empty\n");
		return -1;
	}
	return stack[top];
}

void display(){
	if(isEmpty()){
		printf("Stack is Empty\n");
		return;
	}
	printf("Displaying the Stack\n");
	for(int i = top;i>=0;i--){
		printf("%d\n",stack[i]);
	}
}
	
void main(){
	printf("Stack Implementtation Using Array\n");
	push(23);
	push(34);
	push(56);
	push(12);
	push(67);
	
	display();
	
	printf("Deleting %d from the stack\n",pop());
	
	display();
	
	printf("Displaying the peek element - %d\n",peek());
}
