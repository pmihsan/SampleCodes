#include<stdio.h>
#include<stdbool.h>
#define N 10

int front = -1;
int rear = -1;
int queue[N];

int n; //For number of Vertices
int m; //For number of Edges
int adj[N][N];

int isEmpty(){
	if(front == -1 || front == rear + 1){
		return 1;
	}
	return 0;
}

int isFull(){
	if(rear == n){
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

void BFS(int start){
	bool visited[n];
	for(int i=0;i<n;i++){
		visited[i] = false;
	}
	visited[start] = true;
	enqueue(start);
	printf("\nBFS Traversal of the given Graph\n");
	while(!isEmpty()){
		start = dequeue();
		printf("%d ",start);
		
		for(int i=0;i<n;i++){
			if(!visited[i] && adj[start][i] != 0){
					visited[i] = true;
					enqueue(i);
			}
		}
	}
	printf("\n");
}

void main(){
	printf("Enter the number of vertices\n");
	scanf("%d",&n);
	printf("Enter the number of edges\n");
	scanf("%d",&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			adj[i][j] = 0;
		}
	}
	for(int i=0;i<m;i++){
		int u,v,w;
		printf("Enter the source, destination and weight of the edge\n");
		scanf("%d %d %d",&u,&v,&w);
		adj[u][v] = w;
		adj[v][u] = w;
	}
	BFS(2);
}
