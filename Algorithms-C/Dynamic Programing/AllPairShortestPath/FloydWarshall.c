/* Floyd Warshall Algorithm 
Solves the all-pairs shortest path problem */

#include<stdio.h>

#define V 10
#define INF 99999

int costAdj[V][V];
int distance[V][V];
int v;


void printSolution()
{
    printf ("The All Pair Shortest Path for the given Adjacency Matrix is\n");
    for (int i = 0; i < v; i++){
        for (int j = 0; j < v; j++){
            if (distance[i][j] == INF){
            	printf("∞\t");
            }
            else{
                printf ("%d\t", distance[i][j]);
            }
        }
        printf("\n");
    }
}


void floydWarshall ()
{
    int i, j, k;
    for (i = 0; i < v; i++){
        for (j = 0; j < v; j++){
            distance[i][j] = costAdj[i][j];
        }
    }
           
    for (k = 0; k < v; k++){
        for (i = 0; i < v; i++){
            for (j = 0; j < v; j++){
                if (distance[i][k] + distance[k][j] < distance[i][j]){
                    distance[i][j] = distance[i][k] + distance[k][j];
                }
            }
        }
    }
    printSolution();
}


int main()
{
    printf("Floyd Warshall Algorithm\n");
    printf("Enter the number of vertices\n");
    scanf("%d",&v);
    printf("Enter the cost Adjacency Matrix\n");
    for(int i=0;i<v;i++){
    	for(int j=0;j<v;j++){
    		scanf("%d",&costAdj[i][j]);
    		if(costAdj[i][j] == 0){
    			costAdj[i][j] = INF;
    		}
    	}
    }
    floydWarshall();
    return 0;
}
