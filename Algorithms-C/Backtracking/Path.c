#include<stdio.h>
#define N 3
int Board[N][N];

void printBoard(){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%d ",Board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int Path(int row, int col){
	if(row == N-1 && col == N-1){
		Board[row][col] = 1;
		printBoard();
		return 1;
	}
	int count = 0;
	if(row < N-1){
		Board[row][col] = 1;
		count += Path(row+1, col);
		Board[row][col] = 0;
	}
	if(col < N-1){
		Board[row][col] = 1;
		count += Path(row, col+1);
		Board[row][col] = 0;
	}
	return count;
}
	

void main(){
	int row = 0;
	int col = 0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			Board[i][j] = 0;
		}
	}
	int ans = Path(row,col);
	printf("No of ways to go is %d\n",ans);
}			
