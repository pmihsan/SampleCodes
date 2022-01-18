#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

#define INF 99999
#define N 10

//int costAdj[N][N];
int n,m;
int parent[N];

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int find(int v){
	if(parent[v] == -1){
		return v;
	}
	return find(parent[v]);
}

void unionSet(int src, int des){
	src = find(src);
	des = find(des);
	parent[src] = des;
}			

void Kruskals(int a[], int b[], int weight[]){
	int s,e,sum = 0;
	printf("Minimum Spanning Trre\n");
	for(int i=0;i<m;i++){
		s = find(a[i]);
		e = find(b[i]);
		if(s != e){
			sum += weight[i];
			printf("From vertex (u)%d to (v)%d the weight is %d\n",s,e,weight[i]);
			unionSet(s,e);
		}
	}
	printf("Minimum cost of the spanning tree is %d\n",sum);
}

void main(){
	printf("Enter the number of vertices\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		parent[i] = -1;
	}
	printf("Enter the number of edges\n");
	scanf("%d",&m);
	int source[m],dest[m],weight[m];
	for(int i=0;i<m;i++){
		printf("Enter the source and destination and the corresponding weight of edge %d\n",i+1);
		scanf("%d %d %d",&source[i],&dest[i],&weight[i]);
		
	}
	for(int i=0;i<m-1;i++){
		for(int j=i+1;j<m;j++){
			if(weight[j-1] > weight[j]){
				swap(&weight[j-1],&weight[j]);
				swap(&source[j-1],&source[j]);
				swap(&dest[j-1],&dest[j]);
			}
		}
	}			
	Kruskals(source,dest,weight);	
}
