#include<stdio.h>
#include<stdbool.h>
#define N 10


int n; //For number of Vertices
int m; //For number of Edges
int adj[N][N];

void DFS(bool visited[],int start){
	visited[start] = true;
	printf("%d ",start);
	for(int i=0;i<n;i++){
		if(!visited[i] && adj[start][i] != 0){
			DFS(visited,i);
		}
	} 
}

void main(){
	printf("Enter the number of vertices\n");
	scanf("%d",&n);
	printf("Enter the number of edges\n");
	scanf("%d",&m);
	bool visited[n];
	for(int i=0;i<n;i++){
		visited[i] = false;
	}
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
	printf("\nDFS Travesal of the given Graph\n");
	DFS(visited,0);
	printf("\n");
}
