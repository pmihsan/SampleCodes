#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

#define INF 99999
#define N 6

//int costAdj[N][N];
//int n;

void printMST(int costAdj[][N], int parent[]){
	printf("Mininmum Spanning Tree\n");
	for(int i=1;i<N;i++){
		printf("From (u)%d -> (v)%d == %d(weight)\n",parent[i],i,costAdj[parent[i]][i]);
	}	
}

int selectMinVertex(int value[], bool setMST[]){
	int minValue = INT_MAX;
	int minvertex;
	for(int i=0;i<N;i++){
		if(!setMST[i] && value[i] < minValue){
			minValue = value[i];
			minvertex = i;
		}
	}
	return minvertex;
}			

void Prims(int costAdj[][N]){
	int value[N];
	int parent[N];
	bool setMST[N];
	
	for(int i=0;i<N;i++){
		setMST[i] = false;
		value[i] = INT_MAX;
	}
	parent[0] = -1;
	value[0] = 0;
	
	for(int i=0;i<N-1;i++){
		int u = selectMinVertex(value, setMST);
		setMST[u] = true;
		
		for(int j=0;j<N;j++){
			if(costAdj[u][j] != 0 && !setMST[j] && costAdj[u][j] < value[j]){
				value[j] = costAdj[u][j];
				parent[j] = u;
			}
		}
	}
	printMST(costAdj,parent);

}

void main(){
	/*printf("Enter the number of vertices\n");
	scanf("%d",&n);
	printf("Enter the cost Adjacency matrix\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&costAdj[i][j]);
		}
	}*/
	int costAdj[][N] = {  
			      {0, 4, 6, 0, 0, 0},
			      {4, 0, 6, 3, 4, 0},
			      {6, 6, 0, 1, 8, 0},
			      {0, 3, 1, 0, 2, 3},
			      {0, 4, 8, 2, 0, 7},
			      {0, 0, 0, 3, 7, 0} 
			   };
	Prims(costAdj);	
}

