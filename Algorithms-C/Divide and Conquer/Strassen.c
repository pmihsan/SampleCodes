#include<stdio.h>
#define N 2

void printMatrix(int arr[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void Strassen(int a[N][N], int b[N][N], int c[N][N]){
	
	int p1 =  a[0][0] * (b[0][1] - b[1][1]);
	int p2 =  b[1][1] * (a[0][0] + a[0][1]);
	int p3 =  b[0][0] * (a[1][0] + a[1][1]);
	int p4 =  a[1][1] * (b[1][0] - b[0][0]);
	
	int p5 = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
	int p6 = (a[0][1] - a[1][1]) * (b[1][0] + b[1][1]);
	int p7 = (a[0][0] - a[1][0]) * (b[0][0] + b[0][1]);
	
	c[0][0] = p4 + p5 + p6 - p2;
	c[0][1] = p1 + p2;
	c[1][0] = p3 + p4;
	c[1][1] = p1 + p5 - p3 -p7;
	
}

void main(){
	int a[N][N] = {
			{3, 1},
			{1, 2}
	};
	int b[N][N] = {
			{1, 5},
			{2, 2}
	};
	int c[N][N];
	printf("Displaying the Matrices\n");
	printMatrix(a);
	printMatrix(b);
	printf("Displaying the Result\n");
	Strassen(a,b,c);
	printMatrix(c);
}
