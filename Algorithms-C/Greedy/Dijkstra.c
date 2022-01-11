#include<stdio.h>
#include<stdbool.h>
#define INF 99999
#define N 10
int graph[N][N];
int vertex;

void printSolution(int dist[]){
	for(int i = 0;i<vertex;i++){
		printf("Vertex - %d and Distance - %d\n",i,dist[i]);
	}
}

int minDistVertex(int dist[], bool incSet[]){
	int min = INF, minIndex;
	for(int v = 0;v < vertex;v++){
		if( !incSet[v] && dist[v] <= min){
			min = dist[v];
			minIndex = v;
		}
	}
	return minIndex;
}	

void Dijkstra(int start){
	int dist[vertex];
	bool incSet[vertex];
	for(int i=0;i<vertex;i++){
		dist[i] = INF;
		incSet[i] = false;
	}
	dist[start] = 0;
	for(int c = 0;c<vertex-1;c++){
		int u = minDistVertex(dist, incSet);
		incSet[u] = true;
		for(int v = 0;v < vertex;v++){
			if( !incSet[v] && dist[u] + graph[u][v] < dist[v]){
				dist[v] = dist[u] + graph[u][v];
			}
		}
	}	
	printSolution(dist);
}

void main(){
	int start = 0;
	printf("Enter the number of vertices\n");
	scanf("%d",&vertex);
	printf("Enter the weighted adjacency matrix\n");
	for(int i=0;i<vertex;i++){
		for(int j=0;j<vertex;j++){
			scanf("%d",&graph[i][j]);
			if(graph[i][j] == 0){
				graph[i][j] = INF;
			}
		}
	}
	Dijkstra(start);
}
	
